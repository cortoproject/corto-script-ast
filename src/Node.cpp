/* This is a managed file. Do not delete this comment. */

#include <corto.script.ast>

int16_t ast_Node_visit_v(
    ast_Node _this,
    ast_Visitor visitor)
{
    return safe_ast_Visitor_visit(visitor, _this);
}

corto_object ast_Node_getData(
    ast_Node _this,
    const char *key)
{
    return ut_rb_find(_this->data, key);
}

void ast_Node_setData(
    ast_Node _this,
    const char *key,
    corto_object value)
{
    ut_rb_set(_this->data, key, value);
}
