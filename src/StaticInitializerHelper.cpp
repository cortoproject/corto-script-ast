/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>
#include "ast.h"

corto_word ast_InitializerHelper_offset(
    ast_StaticInitializerHelper _this)
{
    corto_word result, base;
    corto_uint16 fp = ast_InitializerHelper(_this)->fp;
    ast_InitializerFrame *frame =
        &ast_InitializerHelper(_this)->frames[fp?fp-1:0];
    ast_StaticInitializerHelperFrame *baseFrame = &(_this->frames[fp?fp-1:0]);
    ast_InitializerFrame *thisFrame = &ast_InitializerHelper(_this)->frames[fp];
    result = 0;

    base = baseFrame->ptr;
    if (!base) {
        corto_throw("parser error: base is zero in offset calculation");
        goto error;
    }

    /* Switch on current type */
    switch(frame->type->kind) {
    case CORTO_PRIMITIVE:
        result = base;
        break;

    case CORTO_COMPOSITE:
        result = base + thisFrame->offset;
        break;

    case CORTO_ITERATOR:
        result = base;
        break;

    case CORTO_COLLECTION: {
        if (fp) {
            corto_collection t = corto_collection(frame->type);
            corto_type elementType = t->elementType;
            corto_uint32 elementSize = corto_type_sizeof(elementType);
            switch(t->kind) {
            case CORTO_SEQUENCE:
                ((corto_objectseq*)base)->length++;
                ((corto_objectseq*)base)->buffer =
                    (void**)corto_realloc(
                        ((corto_objectseq*)base)->buffer,
                        ((corto_objectseq*)base)->length * elementSize);
                base = (corto_word)((corto_objectseq*)base)->buffer;

            case CORTO_ARRAY:
                result =
                    base + thisFrame->location * corto_type_sizeof(elementType);
                memset((void*)result, 0, elementSize);
                break;

            case CORTO_LIST: {
                corto_ll list = *(corto_ll*)base;

                if (corto_collection_requiresAlloc(elementType)) {
                    result = (corto_word)corto_ptr_new(elementType);
                }
                corto_ll_append(list, (void*)result);
                if (!result) {
                    result = (corto_word)corto_ll_getPtr(
                        list,
                        corto_ll_count(list)-1);
                }
                break;
            }

            case CORTO_MAP: {
                corto_type keyType = corto_map(frame->type)->keyType;
                if (!thisFrame->isKey) {
                    if (corto_collection_requiresAlloc(elementType)) {
                        result = (corto_word)corto_ptr_new(elementType);
                    }

                    corto_rb_set(
                        *(corto_rb*)base,
                        (void*)_this->frames[fp].keyPtr,
                        (void*)result);
                    if (!result) {
                        if (_this->frames[fp].keyPtr) {
                            result = (corto_word)corto_rb_findPtr(
                                *(corto_rb*)base,
                                (void*)_this->frames[fp].keyPtr);
                        } else {
                            corto_throw("cannot set element without keyvalue");
                            goto error;
                        }
                    }
                } else {
                    result = (corto_word)corto_calloc(
                        corto_type_sizeof(keyType));
                    _this->frames[fp].keyPtr = result;
                    thisFrame->isKey = FALSE;
                }
                break;
            }
            }
        } else {
            result = base;
        }
        break;
    }

    case CORTO_VOID:
        if (frame->type->reference) {
            result = base;
            break;
        }
        /* fallthrough on purpose */

    default: {
        corto_id id;
        corto_throw("invalid initializer type '%s'",
            corto_fullpath(id, frame->type));
        break;
    }
    }

    return result;
error:
    return 0;
}

int16_t ast_StaticInitializerHelper_construct(
    ast_StaticInitializerHelper _this)
{
    ast_Expression expr = ast_InitializerHelper(_this)->expression;
    if (expr) {
        /* Copy offsets of variable into frame */
        _this->frames[0].ptr = (corto_word)ast_Storage(expr)->value;
        if (!_this->frames[0].ptr) {
            corto_throw("non-static variable in static initializer");
            goto error;
        }
    }

    return ast_InitializerHelper_construct(ast_InitializerHelper(_this));
error:
    return -1;
}

int16_t ast_StaticInitializerHelper_define_object(
    ast_StaticInitializerHelper _this)
{
    ast_Expression expr = ast_InitializerHelper(_this)->expression;
    if (expr) {
        corto_object o = (corto_object)ast_Storage(expr)->value;

        if (corto_define(o)) {
            corto_id id1;
            corto_throw("failed to define '%s'", corto_fullpath(id1, o));
            goto error;
        }

        ast_InitializerHelper_define_object_v(ast_InitializerHelper(_this));
    }
    return 0;
error:
    return -1;
}

int16_t ast_StaticInitializerHelper_push(
    ast_StaticInitializerHelper _this)
{
    ast_Expression expr = ast_InitializerHelper(_this)->expression;
    int16_t ret = 0;
    uintptr_t offset = 0;

    if (expr) {
        offset = ast_InitializerHelper_offset(_this);
        if (!offset) {
            goto error;
        }

        _this->frames[ast_InitializerHelper(_this)->fp].ptr = offset;
    }

    ret = ast_InitializerHelper_push_v(ast_InitializerHelper(_this));
    if (ret) {
        goto error;
    }

    /* If a collection is pushed, check if collection must be allocated */
    if (expr) {
        ast_InitializerHelper base = ast_InitializerHelper(_this);
        corto_type type = base->frames[base->fp - 1].type;
        if (type->kind == CORTO_COLLECTION) {
            corto_collection collection_type = corto_collection(type);
            if (collection_type->kind == CORTO_LIST) {
                if (!*(corto_ll*)offset) {
                    /* If list isn't allocated, this is not a not_null list. */
                    *(corto_ll*)offset = corto_ll_new();
                }
            }
        }
    }

    return 0;
error:
    return -1;
}


int16_t ast_StaticInitializerHelper_value(
    ast_StaticInitializerHelper _this,
    ast_Expression v)
{
    void* ptr = NULL;
    corto_uint32 fp = ast_InitializerHelper(_this)->fp;
    corto_type type = safe_ast_InitializerHelper_currentType(_this);
    ast_Expression expr = ast_InitializerHelper(_this)->expression;

    if (expr) {
        ptr = (void*)ast_InitializerHelper_offset(_this);
        if (!ptr) {
            corto_throw("cannot statically define value of expression");
            goto error;
        }

        _this->frames[fp].ptr = (uintptr_t)ptr;

        corto_value dst = corto_value_pointer(ptr, type);
        corto_value src;
        corto_try(
          cortoscript_ast_to_value(ast_Node(v), &src), NULL);

        corto_try(
          corto_value_binaryOp(CORTO_ASSIGN, &dst, &src, NULL), NULL);
    }

    return ast_InitializerHelper_next(ast_InitializerHelper(_this));
error:
    return -1;
}
