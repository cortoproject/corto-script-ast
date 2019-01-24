/* This is a managed file. Do not delete this comment. */

#include <corto.script.ast>

int16_t ast_Visitor_visit(
    ast_Visitor _this,
    ast_Node node)
{
    if (!node) {
        ut_throw("NULL passed to ast_Visitor_visit");
        goto error;
    }
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
    if (corto_instanceof(ast_Unary_o, node)) {
        if (ast_Visitor_visitUnary(_this, node)) {
            goto error;
        }
    } else
    if (corto_instanceof(ast_Expression_o, node)) {
        if (ast_Visitor_visitExpression(_this, node)) {
            goto error;
        }
    } else
    if (corto_instanceof(ast_Use_o, node)) {
       if (ast_Visitor_visitUse(_this, node)) {
           goto error;
       }
    } else
    if (corto_instanceof(ast_Statement_o, node)) {
        if (ast_Visitor_visitStatement(_this, node)) {
            goto error;
        }
    } else
    if (corto_instanceof(ast_FunctionArgument_o, node)) {
        if (ast_Visitor_visitFunctionArgument(_this, node)) {
            goto error;
        }
    }

    return 0;
error:
    if (corto_instanceof(ast_Statement_o, node)) {
        /* If parsing a file, print errors to command line. Otherwise let errors
         * be handled by application. */
        if (_this->file) {
            const char *fmt = "%v %m";

            /* When debugging parser, show more information */
            if (ut_log_verbosityGet() != UT_INFO) {
                fmt = NULL;
            }

            ut_raise_ext(
              fmt,
              "#[bold]%s:%d:%d#[normal] ",
              _this->file,
              ast_Statement(node)->line,
              ast_Statement(node)->column + 1);
        }
        _this->errors ++;
    }
    return -1;
}

int16_t ast_Visitor_visitScope_v(
    ast_Visitor _this,
    ast_Scope node)
{
    bool error = false;
    ut_debug("parser: visit scope");

    ut_iter it = ut_ll_iter(node->statements);
    while (ut_iter_hasNext(&it)) {
        if (ast_Visitor_visit(_this, ast_Node( ut_iter_next(&it)))) {
            /* Continue parsing, in case there are more errors */
            error = true;
        }
    }

    return error ? -1 : 0;
}

int16_t ast_Visitor_visitDeclaration_v(
    ast_Visitor _this,
    ast_Declaration node)
{
    ut_iter it;
    ut_debug("parser: visit declaration");

    if (node->type) {
        if (safe_ast_Visitor_visit(_this, node->type)) {
            goto error;
        }
    }

    if (node->id->arguments) {
        ut_try(
          ast_Visitor_visitFunctionArguments(_this, node->id->arguments), NULL);
    }

    it = ut_ll_iter(node->id->ids);
    while (ut_iter_hasNext(&it)) {
        ast_Storage storage = ast_Storage(ut_iter_next(&it));
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
    ut_debug("parser: visit expression");
    return 0;
}

int16_t ast_Visitor_visitUnary_v(
    ast_Visitor _this,
    ast_Unary node)
{
    if (node->expr) {
        ut_try (ast_Visitor_visit(_this, ast_Node(node->expr)), NULL);
    }

    return 0;
error:
    return -1;
}

int16_t ast_Visitor_visitBinary_v(
    ast_Visitor _this,
    ast_Binary node)
{
    if (node->left) {
        ut_try (ast_Visitor_visit(_this, ast_Node(node->left)), NULL);
    }
    if (node->right) {
        ut_try (ast_Visitor_visit(_this, ast_Node(node->right)), NULL);
    }

    return 0;
error:
    return -1;
}

int16_t ast_Visitor_visitTernary_v(
    ast_Visitor _this,
    ast_Ternary node)
{
    if (node->cond) {
        ut_try (ast_Visitor_visit(_this, ast_Node(node->cond)), NULL);
    }
    if (node->_true) {
        ut_try (ast_Visitor_visit(_this, ast_Node(node->_true)), NULL);
    }
    if (node->_false) {
        ut_try (ast_Visitor_visit(_this, ast_Node(node->_false)), NULL);
    }

    return 0;
error:
    return -1;
}

int16_t ast_Visitor_visitId_v(
    ast_Visitor _this,
    ast_Storage node)
{
    ut_debug("parser: visit id");
    return 0;
}

int16_t ast_Visitor_visitStatement_v(
    ast_Visitor _this,
    ast_Statement node)
{
    ut_debug("parser: visit statement");
    return 0;
}

int16_t ast_Visitor_visitStorage_v(
    ast_Visitor _this,
    ast_Storage node)
{
    ut_debug("parser: visit object");

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
    ut_debug("parser: visit initializer");

    ut_iter it = ut_ll_iter(node->values);

    /* Visit the values in the initializer, pre-set their type */
    while (ut_iter_hasNext(&it)) {
        ast_InitializerValue arg = (ast_InitializerValue)ut_iter_next(&it);

        if (ast_Visitor_visit(_this, ast_Node(arg->value))) {
            goto error;
        }
    }

    return 0;
error:
    return -1;
}

int16_t ast_Visitor_visitFunctionArgument_v(
    ast_Visitor _this,
    ast_FunctionArgument argument)
{
    ut_try(safe_ast_Visitor_visit(_this, argument->type), NULL);
    return 0;
error:
    return -1;
}

int16_t ast_Visitor_visitFunctionArguments_v(
    ast_Visitor _this,
    ast_FunctionArgumentList arguments)
{
    ut_iter it = ut_ll_iter(arguments);

    while (ut_iter_hasNext(&it)) {
        ast_FunctionArgument arg = ast_FunctionArgument(ut_iter_next(&it));
        ut_try (safe_ast_Visitor_visit(_this, arg), NULL);
    }

    return 0;
error:
    return -1;
}

int16_t ast_Visitor_visitUse_v(
    ast_Visitor _this,
    ast_Use node)
{
    return 0;
}
