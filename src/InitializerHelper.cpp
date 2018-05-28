/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>
#include "ast.h"

typedef struct ast_InitializerHelper_findMember_t {
    corto_int32 lookForLocation;
    const char *lookForString;
    corto_uint32 id;
    corto_uint32 count;
    corto_uint32 current;
    corto_member m;
} ast_InitializerHelper_findMember_t;

/* Walk members, look it up */
int16_t ast_InitializerHelper_findMember(
    corto_walk_opt* s,
    corto_value* v,
    void* userData)
{
    corto_uint32 result;
    ast_InitializerHelper_findMember_t* data;

    result = 0;
    data = (ast_InitializerHelper_findMember_t*)userData;

    switch(v->kind) {
    case CORTO_MEMBER:
        if (v->is.member.member->id == (corto_uint32)-1) {
            result = corto_walk_value(s, v, userData);
        } else {
            if ((data->lookForLocation >= 0) &&
                ((corto_uint32)data->lookForLocation == data->count))
            {
                data->m = v->is.member.member;
                data->id = data->count;
                goto found;
            } else if (data->lookForString &&
                !strcmp(data->lookForString, corto_idof(v->is.member.member)))
            {
                data->m = v->is.member.member;
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

corto_type ast_Context_initGetType(
    ast_InitializerHelper _this,
    corto_member *m_out)
{
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
                        corto_throw("member out of range");
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
                        corto_throw(
                            "too many elements for non-composite\\collection type '%s'",
                            corto_fullpath(id, t));
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
                corto_throw("excess elements in initializer for reference type '%s' (location=%d)",
                    corto_fullpath(id, _this->frames[0].type),
                    _this->frames[0].location);
            } else {
                corto_throw("excess elements in initializer for primitive type '%s' (location=%d)",
                    corto_fullpath(id, _this->frames[0].type),
                    _this->frames[0].location);
            }
        }
    }

    return result;
}

int16_t ast_InitializerHelper_construct(
    ast_InitializerHelper _this)
{
    corto_type t = _this->frames[0].type;

    /* If an expression is provided, get type from expression */
    if (_this->expression) {
        t = safe_ast_Expression_getType(_this->expression);
        if (!t) {
            corto_throw("parser error: failed to get type of expression");
            goto error;
        }

        /* Initialize first frame with type */
        corto_set_ref(&_this->frames[0].type, t);
    }

    if (!t) {
        corto_throw("missing type for initializer helper");
        goto error;
    }

    /* If type of initializer is either a composite or a collection type, do
     * an initial push */
    if ((((t->kind == CORTO_COMPOSITE) &&
        (corto_interface(t)->kind != CORTO_DELEGATE)) ||
        (t->kind == CORTO_COLLECTION)))
    {
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
            corto_throw("missing type in initializer frame %d", _this->fp - 1);
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
            _this->frames[_this->fp].offset = walkData.m->offset;
        } else {
            corto_set_ref(&_this->frames[_this->fp].member, NULL);
            if (t->kind == CORTO_COLLECTION) {
                corto_set_ref(&_this->frames[_this->fp].type, corto_collection(t)->elementType);
            } else {
                corto_set_ref(&_this->frames[_this->fp].type, NULL);
            }
            _this->frames[_this->fp].offset = 0;
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
    corto_type type;
    ast_InitializerHelper_findMember_t walkData;
    corto_id full_member_id;
    char *member_id;
    uintptr_t offset = 0;

    if (!_this->fp) {
        corto_throw("unexpected member '%s' in initializer", name);
        goto error;
    }

    type = _this->frames[_this->fp-1].type;
    if (!type) {
        corto_throw("missing type to lookup member '%s' in", name);
        goto error;
    }

    s = ast_findMemberSerializer(TRUE);

    /* Support nested member ids, separated by a '.' */
    strcpy(full_member_id, name);
    member_id = strtok(full_member_id, ".");
    while (member_id) {
        walkData.id = 0;
        walkData.count = 0;
        walkData.lookForLocation = -1;
        walkData.lookForString = member_id;
        walkData.m = NULL;
        walkData.current = _this->frames[_this->fp].location;

        if (type->kind == CORTO_COMPOSITE) {
            corto_metawalk(&s, type, &walkData);
        } else {
            corto_throw("cannot resolve member '%s' in non-composite type '%s'",
                member_id, corto_fullpath(NULL, type));
            goto error;
        }

        if (walkData.m) {
            type = walkData.m->type;
            offset += walkData.m->offset;
        }

        member_id = strtok(NULL, ".");
    }

    if (walkData.m) {
        corto_set_ref(&_this->frames[_this->fp].member, walkData.m);
        corto_set_ref(&_this->frames[_this->fp].type, walkData.m->type);
        _this->frames[_this->fp].offset = offset;
    } else {
        corto_id id;
        corto_throw("member '%s' invalid for type '%s'", name,
            corto_fullpath(id, type));
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

    return 0;
error:
    return -1;
}

int8_t ast_InitializerHelper_pop_v(
    ast_InitializerHelper _this)
{
    if (_this->fp) {
        _this->fp--;
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
    } else {
        corto_id id;
        corto_throw(
            "unexpected initializer scope for value of reference type '%s'",
            corto_fullpath(id, t));
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
    return safe_ast_Expression_getType(_this->expression);
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
