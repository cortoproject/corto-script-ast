/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>

uintptr_t ast_String_getPtr(
    ast_String _this)
{
    return (uintptr_t)&_this->value;
}

int16_t ast_String_init(
    ast_String _this)
{
    corto_set_ref(&ast_Expression(_this)->type, corto_string_o);
    return 0;
}
