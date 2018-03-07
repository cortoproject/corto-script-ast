/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>

int16_t ast_Initializer_populateHelper(
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

            if (safe_ast_Initializer_populateHelper(arg->value, helper)) {
                goto error;
            }

            if (ast_InitializerHelper_pop(helper)) {
                goto error;
            }
        } else {
            ast_Node data = safe_ast_Statement_getData(arg->value);
            if (!data) {
                corto_throw("%s unexpected in initializer",
                  corto_idof(corto_typeof(arg->value)));
                goto error;
            }

            if (corto_instanceof(ast_Expression_o, data)) {
                if (ast_InitializerHelper_value(helper, data)) {
                    goto error;
                }
            } else {
                corto_throw("invalid %s element in initializer",
                  corto_idof(corto_typeof(arg->value)));
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

    while (corto_iter_hasNext(&it)) {
        ast_InitializerValue arg = (ast_InitializerValue)corto_iter_next(&it);
        if (safe_ast_Visitor_visit(visitor, arg->value)) {
            goto error;
        }
    }

    return 0;
error:
    return -1;
}
