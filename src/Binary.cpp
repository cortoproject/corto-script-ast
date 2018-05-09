/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>

ast_Expression ast_Binary_fold(
    ast_Binary _this)
{
    ast_Expression result = NULL;

    corto_type type = ast_Expression(_this)->type;
    uintptr_t left_offset, right_offset = 0;
    corto_type left_type, right_type = NULL;
    corto_value left, right, result_value;

    /* First, fold left and right operands to handle nested expressions */
    corto_set_ref(&_this->left, ast_Expression_fold(_this->left));
    if (!_this->left) {
        corto_throw(NULL);
        goto error;
    }

    corto_set_ref(&_this->right, ast_Expression_fold(_this->right));
    if (!_this->right) {
        corto_throw(NULL);
        goto error;
    }

    left_offset = ast_Expression_getPtr(_this->left);
    right_offset = ast_Expression_getPtr(_this->right);

    if (!left_offset) {
        corto_throw("value of left operand cannot be statically derived");
        goto error;
    }

    if (!right_offset) {
        corto_throw("value of right operand cannot be statically derived");
        goto error;
    }

    left_type = safe_ast_Expression_getTypeForTarget(_this->left, type, _this);
    right_type = safe_ast_Expression_getTypeForTarget(_this->right, type, _this);

    if (!left_type) {
        corto_throw("cannot determine type of left operand");
        goto error;
    }

    if (!right_type) {
        corto_throw("cannot determine type of right operand");
        goto error;
    }

    left = corto_value_value((void*)left_offset, left_type);
    right = corto_value_value((void*)right_offset, right_type);
    result_value = corto_value_init();

    if (corto_value_binaryOp(_this->_operator, &left, &right, &result_value)) {
        corto_throw("folding of binary expression failed");
        goto error;
    }

    result = cortoscript_ast_from_value(&result_value);
    if (!result) {
        corto_throw(NULL);
    }

    return result;
error:
    return NULL;
}
