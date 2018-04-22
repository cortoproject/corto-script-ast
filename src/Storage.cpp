/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>

void ast_Storage_set_object(
    ast_Storage _this,
    corto_object obj)
{
    _this->value = (uintptr_t)obj;
    corto_set_ref(&ast_Expression(_this)->type, corto_typeof(obj));
    ast_Expression(_this)->is_reference = true;
}

corto_object ast_Storage_get_object(
    ast_Storage _this)
{
    if (ast_Expression(_this)->is_reference) {
        return (corto_object)_this->value;
    } else {
        return NULL;
    }
}

uintptr_t ast_Storage_getPtr_v(
    ast_Storage _this)
{
    return _this->value;
}
