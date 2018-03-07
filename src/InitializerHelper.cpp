/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>
#include "ast.h"

static int indent;
typedef struct ast_InitializerHelper_findMember_t {
    corto_int32 lookForLocation;
    const char *lookForString;
    corto_uint32 id;
    corto_uint32 count;
    corto_uint32 current;
    corto_member m;
} ast_InitializerHelper_findMember_t;

/* Walk members, look it up */
corto_int16 ast_InitializerHelper_findMember(corto_walk_opt* s, corto_value* v, void* userData) {
    corto_uint32 result;
    ast_InitializerHelper_findMember_t* data;

    result = 0;
    data = (ast_InitializerHelper_findMember_t*)userData;

    switch(v->kind) {
    case CORTO_MEMBER:
        if (v->is.member.t->id == (corto_uint32)-1) {
            result = corto_walk_value(s, v, userData);
        } else {
            if ((data->lookForLocation >= 0) && ((corto_uint32)data->lookForLocation == data->count)) {
                data->m = v->is.member.t;
                data->id = data->count;
                goto found;
            } else if (data->lookForString && !strcmp(data->lookForString, corto_idof(v->is.member.t))) {
                data->m = v->is.member.t;
                data->id = data->count;
                if (data->current >= data->count) {
                    goto found;
                }

            }

            data->count++;
        }

        break;
    default:
        corto_assert(0, "invalid valueKind for member-callback.");
        break;
    }

    return result;
found:
    return -1;
}

/* Create serializer */
corto_walk_opt ast_findMemberSerializer(corto_bool findHidden) {
    corto_walk_opt s;
    corto_walk_init(&s);
    s.metaprogram[CORTO_MEMBER] = ast_InitializerHelper_findMember;
    s.access = CORTO_LOCAL | CORTO_PRIVATE | CORTO_READONLY;
    if (!findHidden) {
        s.access |= CORTO_HIDDEN;
    }

    s.accessKind = CORTO_NOT;
    s.traceKind = CORTO_WALK_TRACE_NEVER;
    s.aliasAction = CORTO_WALK_ALIAS_FOLLOW;
    s.optionalAction = CORTO_WALK_OPTIONAL_ALWAYS;
    return s;
}

corto_type ast_Context_initGetType(ast_InitializerHelper _this, corto_member *m_out) {
    corto_type t, result;

    result = NULL;

    if (m_out) {
        *m_out = NULL;
    }

    if (_this->fp > 0) {
        t = _this->frames[_this->fp-1].type;
        if (_this->frames[_this->fp].isKey) {
            result = corto_map(t)->keyType;
        } else {
            switch(t->kind) {
            case CORTO_COMPOSITE: {
                corto_walk_opt s;
                ast_InitializerHelper_findMember_t walkData;
                if (!_this->frames[_this->fp].member) {
                    s = ast_findMemberSerializer(FALSE);
                    walkData.id = 0;
                    walkData.count = 0;
                    walkData.lookForLocation = _this->frames[_this->fp].location;
                    walkData.lookForString = NULL;
                    walkData.m = NULL;
                    walkData.current = 0;
                    corto_metawalk(&s, t, &walkData);
                } else {
                    walkData.m = _this->frames[_this->fp].member;
                }

                if (walkData.m) {
                    result = walkData.m->type;
                    if (m_out) {
                        *m_out = walkData.m;
                    }

                } else {
                    /* If m_out is not set _this function is not used to determine the type
                     * for setting a value in an initializer. */
                    if (m_out) {
                        ast_Context_error(ast_ctx(), "member out of range");
                    }
                }
                break;
            }

            case CORTO_COLLECTION:
                result = corto_collection(t)->elementType;
                break;
            default: {
                /* If value is a non-composite type it can only have one initializer value. If there are more
                 * values specified (thus location != 0) report an error. */
                if (!_this->frames[_this->fp].location) {
                    result = t;
                } else {
                    if (m_out) {
                        corto_id id;
                        ast_Context_error(ast_ctx(),
                            "too many elements for non-composite\\collection type '%s'", ast_Context_id(t, id));
                        result = NULL;
                    }

                }

                break;
            }

            }

        }

    } else {
        if (_this->frames[0].location == 0) {
            result = _this->frames[0].type;
        } else {
            corto_id id;
            if (_this->frames[0].type->reference) {
                ast_Context_error(ast_ctx(), "excess elements in initializer for reference type '%s' (location=%d)",
                        ast_Context_id(_this->frames[0].type, id), _this->frames[0].location);
            } else {
                ast_Context_error(ast_ctx(), "excess elements in initializer for primitive type '%s' (location=%d)",
                            ast_Context_id(_this->frames[0].type, id), _this->frames[0].location);
            }

        }

    }

    return result;
}

int16_t ast_InitializerHelper_construct(
    ast_InitializerHelper _this)
{
    corto_type t = safe_ast_Expression_getType(corto_ll_get(_this->expressions, 0));
    corto_int32 count = corto_ll_count(_this->expressions);

    if (!count) {
        ast_Context_error(ast_ctx(), "parser error: no target expression(s) for initializer");
        goto error;
    }

    if (!t) {
        ast_Context_error(ast_ctx(), "parser error: invalid object in initializer");
        goto error;
    }

    /* Initialize first frame with type */
    corto_set_ref(&_this->frames[0].type, t);
    _this->fp = 0;
    {
        corto_id id, id2;
        corto_debug("%*s%d[%s %p]: construct (type=%s)\n",
            indent, " ", ast_ctx()->line, ast_Context_id(corto_typeof(_this), id), _this, ast_Context_id(t, id2));
        indent++;
    }

    /* If type of initializer is either a composite or a collection type, do an initial push */
    if ((((t->kind == CORTO_COMPOSITE) && (corto_interface(t)->kind != CORTO_DELEGATE)) || (t->kind == CORTO_COLLECTION))) {
        if (ast_InitializerHelper_push(_this)) {
            goto error;
        }

    }

    return 0;
error:
    return -1;
}

corto_type ast_InitializerHelper_currentType(
    ast_InitializerHelper _this)
{
    return ast_Context_initGetType(_this, NULL);
}

int16_t ast_InitializerHelper_define_object_v(
    ast_InitializerHelper _this)
{
    CORTO_UNUSED(_this);
    {
        corto_id id;
        indent--;
        corto_debug("%*s%d[%s %p]: define\n",
               indent, " ", ast_ctx()->line, ast_Context_id(corto_typeof(_this), id), _this);
    }

    return 0;
}

uint16_t ast_InitializerHelper_initFrame(
    ast_InitializerHelper _this)
{
    corto_walk_opt s;
    corto_type t;
    ast_InitializerHelper_findMember_t walkData;

    /* Lookup corresponding member for current value (if there is any) */
    if (_this->fp) {
        t = _this->frames[_this->fp-1].type;
        if (!t) {
            ast_Context_error(ast_ctx(), "missing type in initializer frame %d", _this->fp - 1);
            goto error;
        }

        s = ast_findMemberSerializer(FALSE);
        walkData.id = 0;
        walkData.count = 0;
        walkData.lookForLocation = _this->frames[_this->fp].location;
        walkData.lookForString = NULL;
        walkData.m = NULL;
        walkData.current = _this->frames[_this->fp].location;
        if (t->kind == CORTO_COMPOSITE) {
            corto_metawalk(&s, t, &walkData);
        }

        if (walkData.m) {
            _this->frames[_this->fp].location = walkData.id;
            corto_set_ref(&_this->frames[_this->fp].member, walkData.m);
            corto_set_ref(&_this->frames[_this->fp].type, walkData.m->type);
            /*corto_set_ref(&ast_ctx()->rvalueType, walkData.m->type);*/
        } else {
            corto_set_ref(&_this->frames[_this->fp].member, NULL);
            if (t->kind == CORTO_COLLECTION) {
                corto_set_ref(&_this->frames[_this->fp].type, corto_collection(t)->elementType);
                /*corto_set_ref(&ast_ctx()->rvalueType, corto_collection(t)->elementType);*/
            } else {
                corto_set_ref(&_this->frames[_this->fp].type, NULL);
            }

        }

    }

    return 0;
error:
    return -1;
}

int32_t ast_InitializerHelper_member_v(
    ast_InitializerHelper _this,
    const char *name)
{
    corto_walk_opt s;
    corto_type t;
    ast_InitializerHelper_findMember_t walkData;

    if (!_this->fp) {
        ast_Context_error(ast_ctx(), "unexpected member '%s' in initializer", name);
        goto error;
    }

    t = _this->frames[_this->fp-1].type;
    s = ast_findMemberSerializer(TRUE);
    walkData.id = 0;
    walkData.count = 0;
    walkData.lookForLocation = -1;
    walkData.lookForString = name;
    walkData.m = NULL;
    walkData.current = _this->frames[_this->fp].location;
    if (t->kind == CORTO_COMPOSITE) {
        corto_metawalk(&s, t, &walkData);
    }

    if (walkData.m) {
        /* _this->frames[_this->fp].location = walkData.id; */
        corto_set_ref(&_this->frames[_this->fp].member, walkData.m);
        corto_set_ref(&_this->frames[_this->fp].type, walkData.m->type);
        /*corto_set_ref(&ast_ctx()->rvalueType, walkData.m->type);*/
    } else {
        corto_id id;
        ast_Context_error(ast_ctx(), "member '%s' invalid for type '%s'", name, ast_Context_id(t, id));
        corto_set_ref(&_this->frames[_this->fp].type, NULL);
        goto error;
    }

    return 0;
error:
    return -1;
}

int16_t ast_InitializerHelper_next_v(
    ast_InitializerHelper _this)
{

    /* Increase location by one */
    _this->frames[_this->fp].location++;
    if (ast_InitializerHelper_initFrame(_this)) {
        goto error;
    }

    {
        corto_id id, id2;
        corto_debug("%*s%d[%s %p]: next(fp=%d, location=%d, type=%s, member=%s)\n",
               indent, " ", ast_ctx()->line, ast_Context_id(corto_typeof(_this), id), _this, _this->fp,
               _this->frames[_this->fp].location,
               _this->frames[_this->fp].type?ast_Context_id(_this->frames[_this->fp].type, id2):NULL,
               _this->frames[_this->fp].member?corto_idof(_this->frames[_this->fp].member):NULL);
    }

    return 0;
error:
    return -1;
}

int8_t ast_InitializerHelper_pop_v(
    ast_InitializerHelper _this)
{

    if (_this->fp) {
        _this->fp--;

        {
            corto_id id;
            indent--;
            corto_debug("%*s%d[%s %p]: pop(fp=%d, location=%d)\n",
                indent, " ", ast_ctx()->line,
                ast_Context_id(corto_typeof(_this), id), _this, _this->fp, _this->frames[_this->fp].location);
        }

        ast_InitializerHelper_next(_this);
    }

    return 0;
}

int16_t ast_InitializerHelper_popKey_v(
    ast_InitializerHelper _this)
{
    return ast_InitializerHelper_pop(_this);
}

int16_t ast_InitializerHelper_push_v(
    ast_InitializerHelper _this)
{
    corto_type t = ast_InitializerHelper_currentType(_this);

    if (!_this->fp || (_this->fp && !t->reference)) {
        _this->fp++;
        _this->frames[_this->fp].location = 0;
        corto_set_ref(&_this->frames[_this->fp].type, t);

        if (ast_InitializerHelper_initFrame(_this)) {
            goto error;
        }

        {
            corto_id id, id2;
            corto_debug("%*s%d[%s %p]: push(fp=%d, location=%d, type=%s, member=%s)\n",
                   indent, " ", ast_ctx()->line, ast_Context_id(corto_typeof(_this), id), _this, _this->fp,
                   _this->frames[_this->fp].location,
                   _this->frames[_this->fp].type ? ast_Context_id(_this->frames[_this->fp].type, id2) : NULL,
                   _this->frames[_this->fp].member?corto_idof(_this->frames[_this->fp].member):NULL);
            indent++;
        }

    } else {
        corto_id id;
        ast_Context_error(ast_ctx(), "unexpected initializer scope for value of reference type '%s'", ast_Context_id(t, id));
        goto error;
    }

    return 0;
error:
    return -1;
}

int16_t ast_InitializerHelper_pushKey_v(
    ast_InitializerHelper _this)
{
    _this->frames[_this->fp+1].isKey = TRUE;
    return ast_InitializerHelper_push(_this);
}

corto_type ast_InitializerHelper_type(
    ast_InitializerHelper _this)
{
    return safe_ast_Expression_getType(corto_ll_get(_this->expressions, 0));
}

int16_t ast_InitializerHelper_value_v(
    ast_InitializerHelper _this,
    ast_Expression v)
{
    CORTO_UNUSED(v);
    return ast_InitializerHelper_next(_this);
}

int16_t ast_InitializerHelper_valueKey_v(
    ast_InitializerHelper _this,
    ast_Expression key)
{
    _this->frames[_this->fp].isKey = TRUE;
    return ast_InitializerHelper_value(_this, key);
}
