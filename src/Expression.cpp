/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>

int16_t ast_Expression_serialize(
    ast_Expression _this,
    corto_type target,
    uintptr_t ptr)
{
    uintptr_t srcPtr = ast_Expression_getPtr(_this);
    corto_type srcType = safe_ast_Expression_getTypeForTarget(
        _this, target);

    corto_info("target type = %s [%p], source type = %s [%p]",
        corto_fullpath(NULL, target), ptr, corto_fullpath(NULL, srcType), srcPtr);

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
    corto_type target)
{
    return _this->type;
}
