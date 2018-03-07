/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>
uintptr_t ast_Integer_getPtr(
    ast_Integer _this)
{
    return (uintptr_t)&_this->value;
}

int16_t ast_Integer_init(
    ast_Integer _this)
{
    corto_set_ref(&ast_Expression(_this)->type, corto_uint64_o);
    return 0;
}
