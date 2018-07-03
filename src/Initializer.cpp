/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>

int16_t ast_Initializer_apply(
    ast_Initializer _this,
    uintptr_t helper)
{
    corto_iter it = corto_ll_iter(_this->values);
    corto_rw *rw = (corto_rw*)helper;
    uint32_t count = 0;

    while (corto_iter_hasNext(&it)) {
        ast_InitializerValue arg = (ast_InitializerValue)corto_iter_next(&it);

        if (arg->key) {
            corto_try( corto_rw_field(rw, arg->key), NULL);
        } else if (count) {
            /* Don't call next for the first element */
            corto_try( corto_rw_next(rw), NULL);
        }

        count ++;

        if (corto_instanceof(ast_Initializer_o, arg->value)) {
            ast_Initializer initializer = ast_Initializer(arg->value);
            corto_try( corto_rw_push(rw, initializer->collection), NULL);

            if (safe_ast_Initializer_apply(arg->value, helper)) {
                corto_throw(NULL);
                goto error;
            }

            corto_try( corto_rw_pop(rw), NULL);
        } else {
            corto_value v;
            cortoscript_ast_to_value(ast_Node(arg->value), &v);
            corto_try( corto_rw_set_value(rw, &v), NULL);
        }
    }

    return 0;
error:
    return -1;
}

static
int16_t ast_Initializer_propagateTypes(
    ast_Initializer _this,
    corto_rw *rw)
{
    corto_iter it = corto_ll_iter(_this->values);
    corto_type type = ast_Expression(_this)->type;
    uint32_t count = 0;

    /* Visit the values in the initializer, pre-set their type */
    while (corto_iter_hasNext(&it)) {
        ast_InitializerValue arg = (ast_InitializerValue)corto_iter_next(&it);

        if (arg->key) {
            corto_try( corto_rw_field(rw, arg->key), NULL);
        } else if (count) {
            /* Don't call next for the first element */
            corto_try( corto_rw_next(rw), NULL);
        }

        count ++;

        if (corto_instanceof(ast_Initializer_o, arg->value)) {
            ast_Initializer initializer = ast_Initializer(arg->value);
            corto_try( corto_rw_push(rw, initializer->collection), NULL);

            if (!arg->value->type) {
                corto_type value_type = corto_rw_get_type(rw);
                if (!value_type) {
                    corto_throw(NULL);
                    goto error;
                }

                ast_Expression_setType(arg->value, value_type);

                corto_try (ast_Initializer_propagateTypes(
                    ast_Initializer(arg->value),
                    rw), NULL);
            }

            corto_try (corto_rw_pop(rw), NULL);
        } else {
            if (!arg->value->type) {
                corto_type value_type = corto_rw_get_type(rw);
                if (!value_type) {
                    corto_throw("value unexpected for type '%s'",
                        corto_fullpath(NULL, type));
                    goto error;
                }

                ast_Expression_setType(arg->value, value_type);
            }
        }
    }

    return 0;
error:
    return -1;
}

int16_t ast_Initializer_propagateType(
    ast_Initializer _this)
{
    corto_rw rw;
    corto_type type = safe_ast_Expression_getType(_this);
    if (!type) {
        corto_throw("missing type for initializer");
        goto error;
    }

    /* Create reader/writer to determine type of the initializer */
    rw = corto_rw_init(type, NULL);

    /* If initializer is collection or composite, do initial push */
    if (type->kind == CORTO_COMPOSITE || type->kind == CORTO_COLLECTION) {
        corto_try(corto_rw_push(&rw, FALSE), NULL);
    }

    if (ast_Initializer_propagateTypes(_this, &rw)) {
        goto error;
    }

    corto_rw_deinit(&rw);

    return 0;
error:
    return -1;
}

ast_Expression ast_Initializer_fold(
    ast_Initializer _this)
{
    corto_iter it = corto_ll_iter(_this->values);

    /* Visit the values in the initializer, pre-set their type */
    while (corto_iter_hasNext(&it)) {
        ast_InitializerValue arg = (ast_InitializerValue)corto_iter_next(&it);
        corto_set_ref(&arg->value, ast_Expression_fold(arg->value));
        if (!arg->value) {
            goto error;
        }
    }

    return ast_Expression(_this);
error:
    return NULL;
}
