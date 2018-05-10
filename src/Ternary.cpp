/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>

ast_Expression ast_Ternary_fold(
    ast_Ternary _this)
{
    ast_Expression result = NULL;

    corto_type type = ast_Expression(_this)->type;
    uintptr_t cond_ptr, true_ptr, false_ptr;
    corto_type true_type, false_type, cond_type;
    corto_value true_value, false_value, cond_value;
    bool true_isnull, false_isnull, cond_isnull;

    /* First, fold left and right operands to handle nested expressions */
    corto_set_ref(&_this->cond, ast_Expression_fold(_this->cond));
    if (!_this->cond) {
        corto_throw(NULL);
        goto error;
    }

    corto_set_ref(&_this->_true, ast_Expression_fold(_this->_true));
    if (!_this->_true) {
        corto_throw(NULL);
        goto error;
    }

    corto_set_ref(&_this->_false, ast_Expression_fold(_this->_false));
    if (!_this->_false) {
        corto_throw(NULL);
        goto error;
    }

    cond_ptr = ast_Expression_getPtr(_this->cond);
    true_ptr = ast_Expression_getPtr(_this->_true);
    false_ptr = ast_Expression_getPtr(_this->_false);

    cond_isnull = corto_instanceof(ast_Null_o, _this->cond);
    true_isnull = corto_instanceof(ast_Null_o, _this->_true);
    false_isnull = corto_instanceof(ast_Null_o, _this->_false);

    if (!cond_ptr && !cond_isnull) {
        corto_throw("value of condition cannot be statically derived");
        goto error;
    }

    if (!true_ptr && !true_isnull) {
        corto_throw("value of true operand cannot be statically derived");
        goto error;
    }

    if (!false_ptr && !false_isnull) {
        corto_throw("value of false operand cannot be statically derived");
        goto error;
    }

    cond_type = safe_ast_Expression_getTypeForTarget(_this->cond, type, _this);
    true_type = safe_ast_Expression_getTypeForTarget(_this->_true, type, _this);
    false_type = safe_ast_Expression_getTypeForTarget(_this->_false, type, _this);

    if (!cond_type && !cond_isnull) {
        corto_throw("cannot determine type of condition operand");
        goto error;
    }

    if (!true_type && !true_isnull) {
        corto_throw("cannot determine type of true operand");
        goto error;
    }

    if (!false_type && !false_isnull) {
        corto_throw("cannot determine type of false operand");
        goto error;
    }

    cond_value = corto_value_value((void*)cond_ptr, cond_type);
    true_value = corto_value_value((void*)true_ptr, true_type);
    false_value = corto_value_value((void*)false_ptr, false_type);

    bool cond;
    if (corto_value_to_boolean(&cond_value, &cond)) {
        corto_throw("cannot convert condition of ternary to boolean value");
        goto error;
    }

    if (cond) {
        result = cortoscript_ast_from_value(&true_value);
    } else {
        result = cortoscript_ast_from_value(&false_value);
    }

    return result;
error:
    return NULL;
}
