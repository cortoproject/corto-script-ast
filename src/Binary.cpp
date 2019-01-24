/* This is a managed file. Do not delete this comment. */

#include <corto.script.ast>

ast_Expression ast_Binary_fold(
    ast_Binary _this)
{
    ast_Expression result = NULL;

    corto_type type = _this->operand_type;
    uintptr_t left_offset, right_offset = 0;
    corto_type left_type, right_type = NULL;
    bool left_isnull, right_isnull;
    corto_value left, right, result_value;

    /* Fold left operand to handle nested expressions */
    corto_set_ref(&_this->left, ast_Expression_fold(_this->left));
    if (!_this->left) {
        ut_throw(NULL);
        goto error;
    }

    /* Fold right operand to handle nested expressions */
    corto_set_ref(&_this->right, ast_Expression_fold(_this->right));
    if (!_this->right) {
        ut_throw(NULL);
        goto error;
    }

    /* Get type and pointer to left operand */
    left_isnull = corto_instanceof(ast_Null_o, _this->left);
    left_offset = ast_Expression_getPtr(_this->left);
    if (!left_offset && !left_isnull) {
        ut_throw("value of left operand (%s) cannot be statically derived",
            corto_idof(corto_typeof(_this->left)));
        goto error;
    }

    /* Get type and pointer to right operand */
    right_isnull = corto_instanceof(ast_Null_o, _this->right);
    right_offset = ast_Expression_getPtr(_this->right);
    if (!right_offset && !right_isnull) {
        ut_throw("value of right operand (%s) cannot be statically derived",
            corto_idof(corto_typeof(_this->right)));
        goto error;
    }

    left_type = safe_ast_Expression_getTypeForTarget(_this->left, type, _this);
    right_type = safe_ast_Expression_getTypeForTarget(_this->right, type, _this);

    if (!left_type && !left_isnull) {
        ut_throw("cannot determine type of left operand");
        goto error;
    }

    if (!right_type && !right_isnull) {
        ut_throw("cannot determine type of right operand");
        goto error;
    }

    left = corto_value_ptr((void*)left_offset, left_type);
    right = corto_value_ptr((void*)right_offset, right_type);
    result_value = corto_value_init();

    if (corto_value_binaryOp(_this->_operator, &left, &right, &result_value)) {
        ut_throw("folding of binary expression failed");
        goto error;
    }

    result = cortoscript_ast_from_value(&result_value);
    if (!result) {
        ut_throw(NULL);
    }

    return result;
error:
    return NULL;
}

int16_t ast_Binary_construct(
    ast_Binary _this)
{
    corto_type left_type = ast_Expression_getType(_this->left);
    corto_type right_type = ast_Expression_getType(_this->right);
    corto_type operand_type = NULL, expr_type = NULL;

    if (corto_expr_binary_typeof(
        left_type,
        left_type ? left_type->reference : false,
        right_type,
        right_type ? right_type->reference : false,
        _this->_operator,
        &operand_type,
        &expr_type))
    {
        ut_throw("incompatible operands for binary expression");
        goto error;
    }

    /* Set the expression type */
    ast_Expression_setType(ast_Expression(_this), expr_type);

    /* Set the type the operands should be casted to */
    corto_set_ref(&_this->operand_type, operand_type);

    return corto_super_construct(_this);
error:
    return -1;
}

void ast_Binary_setType(
    ast_Binary _this,
    corto_type type)
{
    /* Propagate type if no type has been set yet for operands. This enables
     * resolving constants from the scope of enumeration types. */
    if (!_this->left->type) {
        ast_Expression_setType(_this->left, type);
    }
    if (!_this->right->type) {
        ast_Expression_setType(_this->right, type);
    }

    safe_ast_Expression_setType_v(_this, type);
}
