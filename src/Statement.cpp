/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>

ast_Node ast_Statement_getData(
    ast_Statement _this)
{
    if (_this->data) {
        return _this->data;
    } else {
        return ast_Node(_this);
    }
}

void ast_Statement_setData(
    ast_Statement _this,
    ast_Node data)
{
    corto_set_ref(&_this->data, data);
}
