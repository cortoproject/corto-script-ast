/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>

uintptr_t ast_Character_getPtr(
    ast_Character _this)
{
    return (uintptr_t)&_this->value;
}

int16_t ast_Character_init(
    ast_Character _this)
{
    corto_set_ref(&ast_Expression(_this)->type, corto_char_o);
    return 0;
}
