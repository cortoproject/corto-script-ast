/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>

int16_t ast_Expression_serialize(
    ast_Expression _this,
    corto_type target,
    uintptr_t ptr)
{
    uintptr_t srcPtr = ast_Expression_getPtr(_this);
    corto_type srcType = safe_ast_Expression_getTypeForTarget(
        _this, target, NULL);

    /*corto_info("target type = %s [%p], source type = %s [%p]",
        corto_fullpath(NULL, target), ptr, corto_fullpath(NULL, srcType), srcPtr);*/

    corto_value
        src = corto_value_value((void*)srcPtr, srcType),
        dst = corto_value_value((void*)ptr, target);

    return corto_value_binaryOp(CORTO_ASSIGN, &dst, &src, NULL);
}

uintptr_t ast_Expression_getPtr_v(
    ast_Expression _this)
{
    return 0;
}

corto_type ast_Expression_getType(
    ast_Expression _this)
{
    return _this->type;
}

corto_type ast_Expression_getTypeForTarget(
    ast_Expression _this,
    corto_type target,
    ast_Expression target_expr)
{
    corto_type result = ast_Expression_getType(_this);

    if (!target && target_expr) {
        target = ast_Expression_getType(target_expr);
    }

    if (corto_instanceof(ast_Initializer_o, _this)) {
        result = target;
    } else {
        result = corto_expr_typeof(
            result, target, target_expr ? target_expr->is_reference : false);
    }

    return result;
}

void ast_Expression_setType(
    ast_Expression _this,
    corto_type type)
{
    corto_set_ref(&_this->type, type);
}

ast_Expression ast_Expression_fold_v(
    ast_Expression _this)
{
    /* If function is not overridden, there's nothing to fold & just return this
     * expression. */
    return _this;
}
