/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>

ast_Expression ast_Unary_fold(
    ast_Unary _this)
{
    uintptr_t ptr;
    corto_type expr_type, type = ast_Expression(_this)->type;
    corto_value expr, result_value;
    ast_Expression result = NULL;
    bool expr_isnull;

    /* First fold nested expression, in case it is not a literal */
    corto_set_ref(&_this->expr, ast_Expression_fold(_this->expr));
    if (!_this->expr) {
        corto_throw(NULL);
        goto error;
    }

    expr_isnull = corto_instanceof(ast_Null_o, _this->expr);

    /* If operator is either '&' or '*', passthrough expression and set the
     * value_kind accordingly */
    if (_this->_operator == CORTO_AND) {
        result = _this->expr;
        result->ref_kind = CORTO_BY_REFERENCE;
    } else
    if (_this->_operator == CORTO_MUL) {
        result = _this->expr;
        result->ref_kind = CORTO_BY_VALUE;
    } else {
        /* Get pointer to value */
        ptr = ast_Expression_getPtr(_this->expr);
        if (!ptr && !expr_isnull) {
            corto_throw("value of left operand cannot be statically derived");
            goto error;
        }

        /* Get type of expression */
        expr_type = safe_ast_Expression_getTypeForTarget(_this->expr, type, _this);
        if (!expr_type && !expr_isnull) {
            corto_throw("cannot determine type of operand");
            goto error;
        }

        expr = corto_value_ptr((void*)ptr, expr_type);
        result_value = corto_value_init();

        if (corto_value_unaryOp(_this->_operator, &expr, &result_value)) {
            corto_throw("folding of unary expression failed");
            goto error;
        }

        result = cortoscript_ast_from_value(&result_value);
        if (!result) {
            corto_throw(NULL);
        }
    }

    return result;
error:
    return NULL;
}

void ast_Unary_setType(
    ast_Unary _this,
    corto_type type)
{
    if (!_this->expr->type) {
        ast_Expression_setType(_this->expr, type);
    }

    safe_ast_Expression_setType_v(_this, type);
}
