/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>
uintptr_t ast_SignedInteger_getPtr(
    ast_SignedInteger _this)
{
    return (uintptr_t)&_this->value;
}

int16_t ast_SignedInteger_init(
    ast_SignedInteger _this)
{
    corto_set_ref(&ast_Expression(_this)->type, corto_int64_o);
    return 0;
}
