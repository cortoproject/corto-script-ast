/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>
int16_t ast_Object_construct(
    ast_Object _this)
{
    corto_set_ref(&ast_Expression(_this)->type, corto_typeof(_this->value));
    return 0;
}

uintptr_t ast_Object_getPtr(
    ast_Object _this)
{
    return (uintptr_t)_this->value;
}
