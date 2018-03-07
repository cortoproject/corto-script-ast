/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>

void ast_Block_addStatement(
    ast_Block _this,
    ast_Statement node)
{
    ast_StatementList__append(_this->statements, node);
}

int16_t ast_Block_visit_v(
    ast_Block _this,
    ast_Visitor visitor)
{
    corto_iter it = corto_ll_iter(_this->statements);
    while (corto_iter_hasNext(&it)) {
        ast_Node statement = (ast_Node)corto_iter_next(&it);
        if (ast_Visitor_visit(visitor, statement)) {
            goto error;
        }
    }

    return 0;
error:
    return -1;
}
