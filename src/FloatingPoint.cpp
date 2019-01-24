/* This is a managed file. Do not delete this comment. */

#include <corto.script.ast>

uintptr_t ast_FloatingPoint_getPtr(
    ast_FloatingPoint _this)
{
    return (uintptr_t)&_this->value;
}

int16_t ast_FloatingPoint_init(
    ast_FloatingPoint _this)
{
    corto_set_ref(&ast_Expression(_this)->type, corto_float64_o);
    return 0;
}
