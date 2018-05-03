/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>

int16_t ast_Initializer_apply(
    ast_Initializer _this,
    ast_InitializerHelper helper)
{
    corto_iter it = corto_ll_iter(_this->values);

    while (corto_iter_hasNext(&it)) {
        ast_InitializerValue arg = (ast_InitializerValue)corto_iter_next(&it);

        if (arg->key) {
            if (ast_InitializerHelper_member(helper, arg->key)) {
                goto error;
            }
        }

        if (corto_instanceof(ast_Initializer_o, arg->value)) {
            if (ast_InitializerHelper_push(helper)) {
                goto error;
            }

            if (safe_ast_Initializer_apply(arg->value, helper)) {
                goto error;
            }

            if (ast_InitializerHelper_pop(helper)) {
                goto error;
            }
        } else {
            if (ast_InitializerHelper_value(helper, arg->value)) {
                goto error;
            }
        }
    }

    return 0;
error:
    return -1;
}

int16_t ast_Initializer_visit_v(
    ast_Initializer _this,
    ast_Visitor visitor)
{
    corto_iter it = corto_ll_iter(_this->values);
    corto_type type = ast_Expression(_this)->type;
    ast_InitializerHelper helper = NULL;

    if (!type) {
        corto_throw("initializer has no type");
        goto error;
    }

    /* Create an initializer helper to determine the type for the initializer
     * value expressions. This is needed because some of the values cannot
     * be serialized without knowing their type in advance (like enums). */
    helper = ast_InitializerHelper__declare(NULL, NULL);
    if (!helper) {
        goto error;
    }

    /* Since we don't have an expression for the helper, manually initializer
     * the type */
    corto_set_ref(&helper->frames[helper->fp].type, type);

    if (corto_define(helper)) {
        goto error;
    }

    /* Visit the values in the initializer, pre-set their type */
    while (corto_iter_hasNext(&it)) {
        ast_InitializerValue arg = (ast_InitializerValue)corto_iter_next(&it);

        if (arg->key) {
            if (ast_InitializerHelper_member(helper, arg->key)) {
                goto error;
            }
        }

        if (corto_instanceof(ast_Initializer_o, arg->value)) {
            if (ast_InitializerHelper_push(helper)) {
                goto error;
            }

            if (!arg->value->type) {
                corto_type value_type =
                    ast_InitializerHelper(helper)->frames[helper->fp].type;
                ast_Expression_setType(arg->value, value_type);
                if (safe_ast_Visitor_visit(visitor, arg->value)) {
                    goto error;
                }
            }

            if (ast_InitializerHelper_pop(helper)) {
                goto error;
            }
        } else {
            if (!arg->value->type) {
                corto_type value_type =
                    ast_InitializerHelper(helper)->frames[helper->fp].type;
                ast_Expression_setType(arg->value, value_type);
                if (safe_ast_Visitor_visit(visitor, arg->value)) {
                    goto error;
                }
            }
        }
    }

    corto_delete(helper);

    return 0;
error:
    return -1;
}
