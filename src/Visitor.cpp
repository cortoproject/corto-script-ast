/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>

int16_t ast_Visitor_visit(
    ast_Visitor _this,
    ast_Node node)
{
    if (corto_instanceof(ast_Scope_o, node)) {
        if (ast_Visitor_visitScope(_this, node)) {
            goto error;
        }
    } else
    if (corto_instanceof(ast_Declaration_o, node)) {
        if (ast_Visitor_visitDeclaration(_this, node)) {
            goto error;
        }
    } else
    if (corto_instanceof(ast_Initializer_o, node)) {
        if (ast_Visitor_visitInitializer(_this, node)) {
            goto error;
        }
    } else
    if (corto_instanceof(ast_Storage_o, node)) {
        if (ast_Visitor_visitStorage(_this, node)) {
            goto error;
        }
    } else
    if (corto_instanceof(ast_Binary_o, node)) {
        if (ast_Visitor_visitBinary(_this, node)) {
            goto error;
        }
    } else
    if (corto_instanceof(ast_Expression_o, node)) {
        if (ast_Visitor_visitExpression(_this, node)) {
            goto error;
        }
    } else
    if (corto_instanceof(ast_Statement_o, node)) {
        if (ast_Visitor_visitStatement(_this, node)) {
            goto error;
        }
    }

    return 0;
error:
    return -1;
}

int16_t ast_Visitor_visitScope_v(
    ast_Visitor _this,
    ast_Scope node)
{
    corto_debug("parser: visit scope");

    corto_iter it = corto_ll_iter(node->statements);
    while (corto_iter_hasNext(&it)) {
        if (ast_Visitor_visit(_this, ast_Node( corto_iter_next(&it)))) {
            goto error;
        }
    }

    return 0;
error:
    return -1;
}

int16_t ast_Visitor_visitDeclaration_v(
    ast_Visitor _this,
    ast_Declaration node)
{
    corto_iter it;
    corto_debug("parser: visit declaration");

    if (node->type) {
        if (safe_ast_Visitor_visit(_this, node->type)) {
            goto error;
        }
    }

    it = corto_ll_iter(node->id->ids);
    while (corto_iter_hasNext(&it)) {
        ast_Storage storage = ast_Storage(corto_iter_next(&it));
        if (safe_ast_Visitor_visit(_this, storage)) {
            goto error;
        }
    }

    if (node->initializer) {
        if (safe_ast_Visitor_visit(_this, node->initializer)) {
            goto error;
        }
    }

    if (node->scope) {
        if (safe_ast_Visitor_visit(_this, node->scope)) {
            goto error;
        }
    }

    return 0;
error:
    return -1;
}

int16_t ast_Visitor_visitExpression_v(
    ast_Visitor _this,
    ast_Expression node)
{
    corto_debug("parser: visit expression");
    return 0;
}

int16_t ast_Visitor_visitBinary_v(
    ast_Visitor _this,
    ast_Binary node)
{
    corto_debug("parser: visit binary expression");
    return 0;
}

int16_t ast_Visitor_visitId_v(
    ast_Visitor _this,
    ast_Storage node)
{
    corto_debug("parser: visit id");
    return 0;
}

int16_t ast_Visitor_visitStatement_v(
    ast_Visitor _this,
    ast_Statement node)
{
    corto_debug("parser: visit statement");
    return 0;
}

int16_t ast_Visitor_visitStorage_v(
    ast_Visitor _this,
    ast_Storage node)
{
    corto_debug("parser: visit object");

    if (corto_instanceof(ast_StorageInitializer_o, node)) {
        ast_StorageInitializer s = ast_StorageInitializer(node);
        if (safe_ast_Visitor_visit(_this, s->expr)) {
            goto error;
        }
        if (safe_ast_Visitor_visit(_this, s->initializer)) {
            goto error;
        }
    }

    return 0;
error:
    return -1;
}

int16_t ast_Visitor_visitInitializer_v(
    ast_Visitor _this,
    ast_Initializer node)
{
    corto_debug("parser: visit initializer");

    if (ast_Initializer_visit(node, _this)) {
        goto error;
    }

    return 0;
error:
    return -1;
}
