/* This is a managed file. Do not delete this comment. */

#include <corto.script.ast>

void ast_Scope_addStatement(
    ast_Scope _this,
    ast_Statement node)
{
    ast_StatementList__append(_this->statements, node);
}

int16_t ast_Scope_visit_v(
    ast_Scope _this,
    ast_Visitor visitor)
{
    ut_iter it = ut_ll_iter(_this->statements);
    while (ut_iter_hasNext(&it)) {
        ast_Node statement = (ast_Node)ut_iter_next(&it);
        if (ast_Visitor_visit(visitor, statement)) {
            goto error;
        }
    }

    return 0;
error:
    return -1;
}
