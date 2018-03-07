/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>

int16_t ast_Node_visit_v(
    ast_Node _this,
    ast_Visitor visitor)
{
    return safe_ast_Visitor_visit(visitor, _this);
}
