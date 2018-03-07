/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>

uintptr_t ast_Boolean_getPtr(
    ast_Boolean _this)
{
    return (uintptr_t)&_this->value;
}

int16_t ast_Boolean_init(
    ast_Boolean _this)
{
    corto_set_ref(&ast_Expression(_this)->type, corto_bool_o);
    return 0;
}
