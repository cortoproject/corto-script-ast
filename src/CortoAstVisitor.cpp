#include "corto/script/ast/ast.h"
#include "CortoAstVisitor.h"

using namespace std;
using namespace antlrcpp;
using namespace corto::script::ast;

template <typename T>
typename T::_ref safe_visit(CortoAstVisitor *visitor, antlr4::ParserRuleContext *ctx) {
    Any a = visitor->visit(ctx);
    corto_object result = NULL;
    if (!a.isNull()) {
        Node node = a; // can't assign directly to result because any is strict
        result = node;
        if (result && !corto_instanceof(T::_o, result)) {
            corto_error("object '%s' is not of type '%s'",
                corto_fullpath(NULL, result),
                corto_fullpath(NULL, T::_o));
            return NULL;
        }
    }
    return static_cast<typename T::_ref>(result);
}

ast_Identifier to_identifier(CortoParser::Storage_identifierContext *idCtx) {
    Identifier id = corto::declare<Identifier_t>();
    std::string id_str = idCtx->getText();
    if (id_str == "root/") {
        corto_set_str(&id->id, "/");
    } else {
        corto_set_str(&id->id, idCtx->getText().c_str());
    }
    corto_define(id);
    return id;
}

Any CortoAstVisitor::visitProgram(CortoParser::ProgramContext *ctx) {
    Scope block = NULL;
    ast_Declaration declaration = NULL;

    CortoParser::In_statementContext *inCtx = ctx->in_statement();

    /* "IN" declaration */
    if (inCtx) {
        declaration =
          safe_visit<Declaration_t>(this, inCtx);

        declaration->set_scope = true;
    }

    if (ctx->statements()) {
        block = safe_visit<Scope_t>(this, ctx->statements());
    } else {
        block = corto::declare<Scope_t>();
    }

    if (declaration) {
        /* Add declaration to beginning of list */
        ast_StatementList__insert(block->statements, ast_Statement(declaration));
    }

    return (Node)block;
}

Any CortoAstVisitor::visitIn_statement(CortoParser::In_statementContext *ctx) {
    ast_Declaration declaration = corto::declare<Declaration_t>();

    // Parse type of the declaration
    CortoParser::Storage_expressionContext *typeCtx = ctx->storage_expression();
    if (typeCtx) {
        declaration->type = safe_visit<Storage_t>(this, typeCtx);
    }

    // Parse identifier of declaration
    CortoParser::Storage_identifierContext* idCtx =
        ctx->storage_identifier();

    declaration->id = corto::declare<DeclarationIdentifier_t>();
    corto_ll_append(declaration->id->ids, to_identifier(idCtx));

    // Parse initializer of declaration
    CortoParser::Initializer_assignmentContext *initializerCtx =
        ctx->initializer_assignment();

    if (initializerCtx) {
        declaration->initializer = safe_visit<Initializer_t>(this, initializerCtx);
    }

    corto_define(declaration);

    return (Node)declaration;
}

Any CortoAstVisitor::visitStatements(CortoParser::StatementsContext *ctx) {
    Scope block = corto::declare<Scope_t>();

    vector< CortoParser::StatementContext *> statementCtx = ctx->statement();

    if (statementCtx.size()) {
        for (unsigned int i = 0; i < statementCtx.size(); i ++) {
            Statement statement = safe_visit<Statement_t>(this, statementCtx[i]);
            if (statement) {
                ast_Scope_addStatement(block, statement);
            }
        }
    }

    CortoParser::Simple_statementContext *simpleCtx = ctx->simple_statement();

    if (simpleCtx) {
        Statement statement = safe_visit<Statement_t>(this, simpleCtx);
        if (statement) {
            ast_Scope_addStatement(block, statement);
        }
    }

    corto_define(block);

    return (Node)block;
}

Any CortoAstVisitor::visitStatement(CortoParser::StatementContext *ctx) {
    Node node = NULL;

    CortoParser::Simple_statementContext *stmtCtx = ctx->simple_statement();
    CortoParser::Identifier_statementContext *idCtx = ctx->identifier_statement();

    if (stmtCtx) {
        node = safe_visit<Node_t>(this, stmtCtx);
    } else if (idCtx) {
        node = safe_visit<Node_t>(this, idCtx);
    }

    return node;
}

Any CortoAstVisitor::visitSimple_statement(CortoParser::Simple_statementContext *ctx) {
    Node node = NULL;

    CortoParser::Use_statementContext *use_ctx = ctx->use_statement();
    CortoParser::DeclarationContext *decl_ctx = ctx->declaration();

    if (decl_ctx) {
        node = safe_visit<Node_t>(this, decl_ctx);
    } else if (use_ctx) {
        node = safe_visit<Node_t>(this, use_ctx);
    }

    if (node) {
        Statement(node)->line = ctx->start->getLine();
        Statement(node)->column = ctx->start->getCharPositionInLine();
    }

    return node;
}

Any CortoAstVisitor::visitScope(CortoParser::ScopeContext *ctx) {
    Scope block = NULL;

    if (ctx->statements()) {
        block = safe_visit<Scope_t>(this, ctx->statements());
    } else {
        block = corto::declare<Scope_t>();
    }

    return (Node)block;
}

Any CortoAstVisitor::visitUse_statement(CortoParser::Use_statementContext *ctx) {
    ast_Use use = corto::declare<Use_t>();

    vector<CortoParser::Storage_identifierContext*> ids = ctx->storage_identifier();

    /* should always be at least one identifier, at most two */
    corto_set_str(&use->package, ids[0]->getText().c_str());

    if (ctx->AS()) {
        corto_set_str(&use->alias, ids[1]->getText().c_str());
    }

    if (ctx->TYPESYSTEM()) {
        use->as_typesystem = true;
    }

    return (Node)use;
}

Any CortoAstVisitor::visitIdentifier_statement(CortoParser::Identifier_statementContext *ctx) {
    ast_Declaration declaration = corto::declare<Declaration_t>();

    CortoParser::Storage_identifierContext *idCtx = ctx->storage_identifier();
    if (idCtx) {
        declaration->id = corto::declare<DeclarationIdentifier_t>();
        corto_ll_append(declaration->id->ids, to_identifier(idCtx));
        corto_define(declaration->id);
    }

    corto_define(declaration);

    return (Node)declaration;
}

Any CortoAstVisitor::visitDeclaration(CortoParser::DeclarationContext *ctx) {
    ast_Declaration declaration = corto::declare<Declaration_t>();

    // Parse type of the declaration
    CortoParser::Storage_expressionContext *typeCtx = ctx->storage_expression();
    if (typeCtx) {
        declaration->type = safe_visit<Storage_t>(this, typeCtx);
    }

    CortoParser::Declaration_identifierContext* idCtx =
        ctx->declaration_identifier();

    CortoParser::Declaration_identifier_listContext* idListCtx =
        ctx->declaration_identifier_list();

    CortoParser::Storage_identifierContext* storageIdCtx =
        ctx->storage_identifier();

    CortoParser::Function_identifierContext* funcCtx =
        ctx->function_identifier();

    // Identifier list or identifier
    if (idCtx) {
        declaration->id = safe_visit<DeclarationIdentifier_t>(this, idCtx);
    } else

    // Identifier list only
    if (idListCtx) {
        declaration->id = safe_visit<DeclarationIdentifier_t>(this, idListCtx);
    } else

    // Identifier only
    if (storageIdCtx) {
        declaration->id = corto::declare<DeclarationIdentifier_t>();
        corto_ll_append(declaration->id->ids, to_identifier(storageIdCtx));
        corto_define(declaration->id);
    } else

    // Function identifier
    if (funcCtx) {
        declaration->id = safe_visit<DeclarationIdentifier_t>(this, funcCtx);
    }

    // Parse initializer of declaration
    CortoParser::Initializer_assignmentContext *initializerCtx =
        ctx->initializer_assignment();
    CortoParser::Initializer_listContext *initializerListCtx =
        ctx->initializer_list();

    if (initializerCtx) {
        declaration->initializer = safe_visit<Initializer_t>(this, initializerCtx);
    } else
    if (initializerListCtx) {
        declaration->initializer = safe_visit<Initializer_t>(this, initializerListCtx);
    }

    // Parse scope of declaration
    CortoParser::ScopeContext *scope_ctx = ctx->scope();
    if (scope_ctx) {
        declaration->scope = safe_visit<Scope_t>(this, scope_ctx);
    }

    corto_define(declaration);

    return (Node)declaration;
}

Any CortoAstVisitor::visitDeclaration_identifier_list(CortoParser::Declaration_identifier_listContext *ctx) {
    DeclarationIdentifier result = corto::declare<DeclarationIdentifier_t>();

    // Identifiers are identifiers without a local initializer
    vector<CortoParser::Storage_identifierContext *> idCtx =
        ctx->storage_identifier();
    if (idCtx.size()) {
        for (unsigned int i = 0; i < idCtx.size(); i ++) {
            Identifier id_node = to_identifier(idCtx[i]);
            corto_ll_append(result->ids, id_node);
        }
    }

    corto_define(result);

    return (Node)result;
}

Any CortoAstVisitor::visitDeclaration_identifier(CortoParser::Declaration_identifierContext *ctx) {
    DeclarationIdentifier result = NULL;

    CortoParser::Storage_identifierContext *idCtx = ctx->storage_identifier();
    if (idCtx) {
        result = corto::declare<DeclarationIdentifier_t>();
        corto_ll_append(result->ids, to_identifier(idCtx));
        corto_define(result);
    }

    CortoParser::Declaration_identifier_listContext *idListCtx = ctx->declaration_identifier_list();
    if (idListCtx) {
        result = safe_visit<DeclarationIdentifier_t>(this, idListCtx);
    }

    return (Node)result;
}

Any CortoAstVisitor::visitFunction_identifier(CortoParser::Function_identifierContext *ctx) {
    DeclarationIdentifier result = corto::declare<DeclarationIdentifier_t>();

    // Identifiers are identifiers without a local initializer
    CortoParser::Storage_identifierContext *idCtx =
        ctx->storage_identifier();
    if (idCtx) {
        Identifier id_node = to_identifier(idCtx);
        corto_ll_append(result->ids, id_node);
    }

    // Parse argument list, if specified
    CortoParser::Argument_declarationContext *argumentsCtx =
        ctx->argument_declaration();
    if (argumentsCtx) {
        vector<CortoParser::ArgumentContext*> argumentCtx =
            argumentsCtx->argument();
        if (!result->arguments) {
            result->arguments = corto_ll_new();
        }
        for (unsigned int i = 0; i < argumentCtx.size(); i ++) {
            FunctionArgument argument = safe_visit<FunctionArgument_t>(this, argumentCtx[i]);
            corto_ll_append(result->arguments, argument);
        }
    }

    corto_define(result);

    return (Node)result;
}

Any CortoAstVisitor::visitStorage_expression(CortoParser::Storage_expressionContext *ctx) {
    Node result = NULL;

    CortoParser::Storage_identifierContext *idCtx = ctx->storage_identifier();
    CortoParser::Storage_expressionContext *storageCtx =
        ctx->storage_expression();
    CortoParser::Initializer_collectionContext* collectionInit =
        ctx->initializer_collection();

    if (idCtx) {
        Identifier id_node = to_identifier(idCtx);
        result = (Node)id_node;
    } else
    if (collectionInit) {
        StorageInitializer init = corto::declare<StorageInitializer_t>();
        init->expr = safe_visit<Storage_t>(this, storageCtx);
        init->initializer = safe_visit<Initializer_t>(this, collectionInit);

        /* StorageExpression initializers use collection initializer
         * syntax, but don't enforce their contents to be collections */
        init->initializer->collection = false;
        corto_define(init);
        result = (Node)init;
    }

    corto_define(result);

    return result;
}

Any CortoAstVisitor::visitStorage_identifier(CortoParser::Storage_identifierContext *ctx) {
    return ctx->getText();
}

Any CortoAstVisitor::visitInitializer_composite(CortoParser::Initializer_compositeContext *ctx) {
    Initializer result = NULL;

    CortoParser::Initializer_listContext *valueCtx = ctx->initializer_list();
    if (valueCtx) {
        result = safe_visit<Initializer_t>(this, valueCtx);
    } else {
        result = corto::declare<Initializer_t>();
    }

    return (Node)result;
}

Any CortoAstVisitor::visitInitializer_collection(CortoParser::Initializer_collectionContext *ctx) {
    Initializer result = NULL;

    CortoParser::Initializer_listContext *valueCtx = ctx->initializer_list();
    if (valueCtx) {
        result = safe_visit<Initializer_t>(this, valueCtx);
    } else {
        result = corto::declare<Initializer_t>();
    }

    result->collection = true;

    return (Node)result;
}

Any CortoAstVisitor::visitInitializer_list(CortoParser::Initializer_listContext *ctx) {
    Initializer result = corto::declare<Initializer_t>();

    vector<CortoParser::Initializer_valueContext *> valueCtx =
        ctx->initializer_value();

    if (valueCtx.size()) {
        for (unsigned int i = 0; i < valueCtx.size(); i ++) {
            InitializerValue value = safe_visit<InitializerValue_t>(this, valueCtx[i]);
            if (value) {
                corto_ll_append(result->values, value);
            }
        }
    }

    corto_define(result);

    return (Node)result;
}

Any CortoAstVisitor::visitInitializer_value(CortoParser::Initializer_valueContext *ctx) {
    InitializerValue value = NULL;

    // Get value, which can be either an expression or an initializer
    CortoParser::Conditional_expressionContext *exprCtx = ctx->conditional_expression();
    CortoParser::Initializer_expressionContext *initializerCtx =
        ctx->initializer_expression();

    if (exprCtx || initializerCtx) {
        value = corto::declare<InitializerValue_t>();

        // Get key of initializer value
        CortoParser::Initializer_keyContext *keyCtx = ctx->initializer_key();
        if (keyCtx) {
            corto_set_str(&value->key, keyCtx->getText().c_str());
        }
        if (exprCtx) {
            value->value = safe_visit<Expression_t>(this, exprCtx);
        } else {
            value->value = safe_visit<Expression_t>(this, initializerCtx);
        }

        corto_define(value);
    }

    return (Node)value;
}

Any CortoAstVisitor::visitArgument(CortoParser::ArgumentContext *ctx) {
    FunctionArgument argument = corto::declare<FunctionArgument_t>();

    // Get argument type
    argument->type = safe_visit<Storage_t>(this, ctx->storage_expression());

    // Get argument name
    if (ctx->IDENTIFIER()) {
        corto_set_str(&argument->name, ctx->IDENTIFIER()->getText().c_str());
    }

    // Check if argument is inout
    if (ctx->inout()) {
        std::string inout = ctx->inout()->getText();
        if (inout == "in") {
            argument->inout = CORTO_IN;
        } else if (inout == "out") {
            argument->inout = CORTO_OUT;
        } else if (inout == "inout") {
            argument->inout = CORTO_INOUT;
        }
    } else {
        argument->inout = CORTO_IN;
    }

    // Check if argument is reference
    if (ctx->REF()) {
        argument->is_reference = true;
    }

    corto_define(argument);

    return (Node)argument;
}

Any CortoAstVisitor::visitAssignment_expression(CortoParser::Assignment_expressionContext *ctx) {
    Expression result = NULL;

    /* Pass through expression */
    CortoParser::Conditional_expressionContext *cond_ctx = ctx->conditional_expression();
    if (cond_ctx) {
        result = safe_visit<Expression_t>(this, cond_ctx);
    }

    /* Binary expression */
    CortoParser::Storage_expressionContext *storage_ctx = ctx->storage_expression();
    CortoParser::Assignment_expressionContext *assign_ctx = ctx->assignment_expression();
    if (storage_ctx && assign_ctx) {
        Binary bExpr = corto::declare<Binary_t>();
        bExpr->left = safe_visit<Expression_t>(this, storage_ctx);
        bExpr->right = safe_visit<Expression_t>(this, assign_ctx);
        bExpr->_operator = visit(ctx->assignment_operator());
        corto_define(bExpr);
        result = (Expression)bExpr;
    }

    return (Node)result;
}

Any CortoAstVisitor::visitAssignment_operator(CortoParser::Assignment_operatorContext *ctx) {
    std::string oper = ctx->getText();
    corto_operatorKind result;

    if (oper == "=") {
        result = CORTO_ASSIGN;
    } else
    if (oper == "*=") {
        result = CORTO_ASSIGN_MUL;
    } else
    if (oper == "/=") {
        result = CORTO_ASSIGN_DIV;
    } else
    if (oper == "%=") {
        result = CORTO_ASSIGN_MOD;
    } else
    if (oper == "+=") {
        result = CORTO_ASSIGN_ADD;
    } else
    if (oper == "-=") {
        result = CORTO_ASSIGN_SUB;
    } else
    if (oper == "<<=") {
        result = CORTO_ASSIGN_SHIFT_LEFT;
    } else
    if (oper == ">>=") {
        result = CORTO_ASSIGN_SHIFT_RIGHT;
    } else
    if (oper == "&=") {
        result = CORTO_ASSIGN_AND;
    } else
    if (oper == "^=") {
        result = CORTO_ASSIGN_XOR;
    } else
    if (oper == "|=") {
        result = CORTO_ASSIGN_OR;
    } else {
        corto_error("not an assignment operator '%s'", oper.c_str());
    }

    return result;
}

Any CortoAstVisitor::visitConditional_expression(CortoParser::Conditional_expressionContext *ctx) {
    Expression result = NULL;

    CortoParser::Logical_or_expressionContext *cond_ctx = ctx->logical_or_expression();
    CortoParser::ExpressionContext *true_ctx = ctx->expression();
    CortoParser::Conditional_expressionContext *false_ctx = ctx->conditional_expression();

    if (!true_ctx || !false_ctx) {
        result = safe_visit<Expression_t>(this, cond_ctx);
    } else {
        Ternary tern = corto::declare<Ternary_t>();
        tern->cond = safe_visit<Expression_t>(this, cond_ctx);
        tern->_true = safe_visit<Expression_t>(this, true_ctx);
        tern->_false = safe_visit<Expression_t>(this, false_ctx);
        corto_define(tern);
        result = (Expression)tern;
    }

    return (Node)result;
}

Any CortoAstVisitor::visitLogical_or_expression(CortoParser::Logical_or_expressionContext *ctx) {
    Expression result = NULL;

    CortoParser::Logical_or_expressionContext *left_ctx = ctx->logical_or_expression();
    CortoParser::Logical_and_expressionContext *right_ctx = ctx->logical_and_expression();

    if (right_ctx && !left_ctx) {
        result = safe_visit<Expression_t>(this, right_ctx);
    } else {
        Binary bExpr = corto::declare<Binary_t>();
        bExpr->left = safe_visit<Expression_t>(this, left_ctx);
        bExpr->right = safe_visit<Expression_t>(this, right_ctx);
        bExpr->_operator = CORTO_COND_OR;
        corto_define(bExpr);
        result = (Expression)bExpr;
    }

    return (Node)result;
}

Any CortoAstVisitor::visitLogical_and_expression(CortoParser::Logical_and_expressionContext *ctx) {
    Expression result = NULL;

    CortoParser::Logical_and_expressionContext *left_ctx = ctx->logical_and_expression();
    CortoParser::Or_expressionContext *right_ctx = ctx->or_expression();

    if (right_ctx && !left_ctx) {
        result = safe_visit<Expression_t>(this, right_ctx);
    } else {
        Binary bExpr = corto::declare<Binary_t>();
        bExpr->left = safe_visit<Expression_t>(this, left_ctx);
        bExpr->right = safe_visit<Expression_t>(this, right_ctx);
        bExpr->_operator = CORTO_COND_AND;
        corto_define(bExpr);
        result = (Expression)bExpr;
    }

    return (Node)result;
}

Any CortoAstVisitor::visitOr_expression(CortoParser::Or_expressionContext *ctx) {
    Expression result = NULL;

    CortoParser::Or_expressionContext *left_ctx = ctx->or_expression();
    CortoParser::Xor_expressionContext *right_ctx = ctx->xor_expression();

    if (right_ctx && !left_ctx) {
        result = safe_visit<Expression_t>(this, right_ctx);
    } else {
        Binary bExpr = corto::declare<Binary_t>();
        bExpr->left = safe_visit<Expression_t>(this, left_ctx);
        bExpr->right = safe_visit<Expression_t>(this, right_ctx);
        bExpr->_operator = CORTO_OR;
        corto_define(bExpr);
        result = (Expression)bExpr;
    }

    return (Node)result;
}

Any CortoAstVisitor::visitXor_expression(CortoParser::Xor_expressionContext *ctx) {
    Expression result = NULL;

    CortoParser::Xor_expressionContext *left_ctx = ctx->xor_expression();
    CortoParser::And_expressionContext *right_ctx = ctx->and_expression();

    if (right_ctx && !left_ctx) {
        result = safe_visit<Expression_t>(this, right_ctx);
    } else {
        Binary bExpr = corto::declare<Binary_t>();
        bExpr->left = safe_visit<Expression_t>(this, left_ctx);
        bExpr->right = safe_visit<Expression_t>(this, right_ctx);
        bExpr->_operator = CORTO_XOR;
        corto_define(bExpr);
        result = (Expression)bExpr;
    }

    return (Node)result;
}

Any CortoAstVisitor::visitAnd_expression(CortoParser::And_expressionContext *ctx) {
    Expression result = NULL;

    CortoParser::And_expressionContext *left_ctx = ctx->and_expression();
    CortoParser::Equality_expressionContext *right_ctx = ctx->equality_expression();

    if (right_ctx && !left_ctx) {
        result = safe_visit<Expression_t>(this, right_ctx);
    } else {
        Binary bExpr = corto::declare<Binary_t>();
        bExpr->left = safe_visit<Expression_t>(this, left_ctx);
        bExpr->right = safe_visit<Expression_t>(this, right_ctx);
        bExpr->_operator = CORTO_AND;
        corto_define(bExpr);
        result = (Expression)bExpr;
    }
    return (Node)result;
}

Any CortoAstVisitor::visitEquality_expression(CortoParser::Equality_expressionContext *ctx) {
    Expression result = NULL;

    CortoParser::Equality_expressionContext *left_ctx = ctx->equality_expression();
    CortoParser::Relational_expressionContext *right_ctx = ctx->relational_expression();

    if (right_ctx && !left_ctx) {
        result = safe_visit<Expression_t>(this, right_ctx);
    } else {
        Binary bExpr = corto::declare<Binary_t>();
        bExpr->left = safe_visit<Expression_t>(this, left_ctx);
        bExpr->right = safe_visit<Expression_t>(this, right_ctx);
        bExpr->_operator = visit(ctx->equality_operator());
        corto_define(bExpr);
        result = (Expression)bExpr;
    }

    return (Node)result;
}

Any CortoAstVisitor::visitEquality_operator(CortoParser::Equality_operatorContext *ctx) {
    std::string oper = ctx->getText();
    corto_operatorKind result;

    if (oper == "==") {
        result = CORTO_COND_EQ;
    } else
    if (oper == "!=") {
        result = CORTO_COND_NEQ;
    }

    return result;
}

Any CortoAstVisitor::visitRelational_expression(CortoParser::Relational_expressionContext *ctx) {
    Expression result = NULL;

    CortoParser::Relational_expressionContext *left_ctx = ctx->relational_expression();
    CortoParser::Shift_expressionContext *right_ctx = ctx->shift_expression();

    if (right_ctx && !left_ctx) {
        result = safe_visit<Expression_t>(this, right_ctx);
    } else {
        Binary bExpr = corto::declare<Binary_t>();
        bExpr->left = safe_visit<Expression_t>(this, left_ctx);
        bExpr->right = safe_visit<Expression_t>(this, right_ctx);
        bExpr->_operator = visit(ctx->relational_operator());
        corto_define(bExpr);
        result = (Expression)bExpr;
    }

    return (Node)result;
}

Any CortoAstVisitor::visitRelational_operator(CortoParser::Relational_operatorContext *ctx) {
    std::string oper = ctx->getText();
    corto_operatorKind result;

    if (oper == "<") {
        result = CORTO_COND_LT;
    } else
    if (oper == ">") {
        result = CORTO_COND_GT;
    } else
    if (oper == ">=") {
        result = CORTO_COND_GTEQ;
    } else
    if (oper == "<=") {
        result = CORTO_COND_LTEQ;
    }

    return result;
}

Any CortoAstVisitor::visitShift_expression(CortoParser::Shift_expressionContext *ctx) {
    Expression result = NULL;

    CortoParser::Shift_expressionContext *left_ctx = ctx->shift_expression();
    CortoParser::Additive_expressionContext *right_ctx = ctx->additive_expression();

    if (right_ctx && !left_ctx) {
        result = safe_visit<Expression_t>(this, right_ctx);
    } else {
        Binary bExpr = corto::declare<Binary_t>();
        bExpr->left = safe_visit<Expression_t>(this, left_ctx);
        bExpr->right = safe_visit<Expression_t>(this, right_ctx);
        bExpr->_operator = visit(ctx->shift_operator());
        corto_define(bExpr);
        result = (Expression)bExpr;
    }

    return (Node)result;
}

Any CortoAstVisitor::visitShift_operator(CortoParser::Shift_operatorContext *ctx) {
    std::string oper = ctx->getText();
    corto_operatorKind result;

    if (oper == "<<") {
        result = CORTO_SHIFT_LEFT;
    } else
    if (oper == ">>") {
        result = CORTO_SHIFT_RIGHT;
    }

    return result;
}

Any CortoAstVisitor::visitAdditive_expression(CortoParser::Additive_expressionContext *ctx) {
    Expression result = NULL;

    CortoParser::Additive_expressionContext *left_ctx = ctx->additive_expression();
    CortoParser::Multiplicative_expressionContext *right_ctx = ctx->multiplicative_expression();

    if (right_ctx && !left_ctx) {
        result = safe_visit<Expression_t>(this, right_ctx);
    } else {
        Binary bExpr = corto::declare<Binary_t>();
        bExpr->left = safe_visit<Expression_t>(this, left_ctx);
        bExpr->right = safe_visit<Expression_t>(this, right_ctx);
        bExpr->_operator = visit(ctx->additive_operator());
        corto_define(bExpr);
        result = (Expression)bExpr;
    }

    return (Node)result;
}

Any CortoAstVisitor::visitAdditive_operator(CortoParser::Additive_operatorContext *ctx) {
    std::string oper = ctx->getText();
    corto_operatorKind result;

    if (oper == "+") {
        result = CORTO_ADD;
    } else
    if (oper == "-") {
        result = CORTO_SUB;
    }

    return result;
}

Any CortoAstVisitor::visitMultiplicative_expression(CortoParser::Multiplicative_expressionContext *ctx) {
    Expression result = NULL;

    CortoParser::Multiplicative_expressionContext *left_ctx = ctx->multiplicative_expression();
    CortoParser::Cast_expressionContext *right_ctx = ctx->cast_expression();

    if (right_ctx && !left_ctx) {
        result = safe_visit<Expression_t>(this, right_ctx);
    } else {
        Binary bExpr = corto::declare<Binary_t>();
        bExpr->left = safe_visit<Expression_t>(this, left_ctx);
        bExpr->right = safe_visit<Expression_t>(this, right_ctx);
        bExpr->_operator = visit(ctx->multiplicative_operator());
        corto_define(bExpr);
        result = (Expression)bExpr;
    }

    return (Node)result;
}

Any CortoAstVisitor::visitMultiplicative_operator(CortoParser::Multiplicative_operatorContext *ctx) {
    std::string oper = ctx->getText();
    corto_operatorKind result;

    if (oper == "*") {
        result = CORTO_MUL;
    } else
    if (oper == "/") {
        result = CORTO_DIV;
    } else
    if (oper == "%") {
        result = CORTO_MOD;
    }

    return result;
}

Any CortoAstVisitor::visitCast_expression(CortoParser::Cast_expressionContext *ctx) {
    Expression result = NULL;

    CortoParser::Unary_expressionContext *unary_ctx = ctx->unary_expression();
    CortoParser::Storage_expressionContext *type_ctx = ctx->storage_expression();
    CortoParser::Cast_expressionContext *cast_ctx = ctx->cast_expression();

    if (unary_ctx) {
        result = safe_visit<Expression_t>(this, unary_ctx);
    } else {
        Cast cExpr = corto::declare<Cast_t>();
        cExpr->type = safe_visit<Storage_t>(this, type_ctx);
        cExpr->expr = safe_visit<Expression_t>(this, cast_ctx);
        corto_define(cExpr);
        result = (Expression)cExpr;
    }

    return (Node)result;
}

Any CortoAstVisitor::visitUnary_expression(CortoParser::Unary_expressionContext *ctx) {
    Expression result = NULL;

    CortoParser::Postfix_expressionContext *postfix_ctx = ctx->postfix_expression();
    CortoParser::Unary_expressionContext *unary_ctx = ctx->unary_expression();
    CortoParser::Cast_expressionContext *cast_ctx = ctx->cast_expression();

    if (postfix_ctx) {
        result = safe_visit<Expression_t>(this, postfix_ctx);
    } else
    if (unary_ctx) {
        Unary uExpr = corto::declare<Unary_t>();
        uExpr->expr = safe_visit<Expression_t>(this, unary_ctx);
        uExpr->_operator = visit(ctx->inc_operator());
        corto_define(uExpr);
        result = (Expression)uExpr;
    } else
    if (cast_ctx) {
        Unary uExpr = corto::declare<Unary_t>();
        uExpr->expr = safe_visit<Expression_t>(this, cast_ctx);
        uExpr->_operator = visit(ctx->unary_operator());
        corto_define(uExpr);
        result = (Expression)uExpr;
    }

    return (Node)result;
}

Any CortoAstVisitor::visitUnary_operator(CortoParser::Unary_operatorContext *ctx) {
    std::string oper = ctx->getText();
    corto_operatorKind result;

    if (oper == "&") {
        result = CORTO_AND;
    } else
    if (oper == "*") {
        result = CORTO_MUL;
    } else
    if (oper == "+") {
        result = CORTO_ADD;
    } else
    if (oper == "-") {
        result = CORTO_SUB;
    } else
    if (oper == "~") {
        result = CORTO_NOT;
    } else
    if (oper == "!") {
        result = CORTO_COND_NOT;
    } else
    if (oper == "not") {
        result = CORTO_COND_NOT;
    }

    return result;
}

Any CortoAstVisitor::visitPostfix_expression(CortoParser::Postfix_expressionContext *ctx) {
    Expression result = NULL;

    CortoParser::LiteralContext *primary_ctx = ctx->literal();
    CortoParser::Storage_expressionContext *storage_ctx = ctx->storage_expression();
    CortoParser::Postfix_expressionContext *postfix_ctx = ctx->postfix_expression();
    CortoParser::ExpressionContext *expr_ctx = ctx->expression();

    if (expr_ctx) {
        result = safe_visit<Expression_t>(this, expr_ctx);
    } else
    if (primary_ctx) {
        result = safe_visit<Expression_t>(this, primary_ctx);
    } else
    if (storage_ctx) {
        result = safe_visit<Expression_t>(this, storage_ctx);
    } else
    if (postfix_ctx) {
        CortoParser::Inc_operatorContext *inc_oper = ctx->inc_operator();

        if (inc_oper) {
            Unary uExpr = corto::declare<Unary_t>();
            uExpr->expr = safe_visit<Expression_t>(this, postfix_ctx);
            uExpr->_operator = visit(inc_oper);
            uExpr->postfix = true;
            corto_define(uExpr);
            result = (Expression)uExpr;
        }
    }

    return (Node)result;
}

Any CortoAstVisitor::visitInc_operator(CortoParser::Inc_operatorContext *ctx) {
    std::string oper = ctx->getText();
    corto_operatorKind result;

    if (oper == "++") {
        result = CORTO_INC;
    } else
    if (oper == "--") {
        result = CORTO_DEC;
    }

    return result;
}

Any CortoAstVisitor::visitLiteral(CortoParser::LiteralContext *ctx) {
    Node result = NULL;
    antlr4::tree::TerminalNode *node;

    if ((node = ctx->BOOLEAN())) {
        if (node->getText() == "true" || node->getText() == "TRUE") {
            result = (Node)ast_Boolean__create(NULL, NULL, true);
        } else {
            result = (Node)ast_Boolean__create(NULL, NULL, false);
        }
    } else
    if ((node = ctx->INTEGER())) {
        uint64_t value = strtoul(node->getText().c_str(), NULL, 10);
        result = (Node)ast_Integer__create(NULL, NULL, NULL, value);
    } else
    if ((node = ctx->SIGNED_INTEGER())) {
        int64_t value = strtoll(node->getText().c_str(), NULL, 10);
        result = (Node)ast_SignedInteger__create(NULL, NULL, NULL, value);
    } else
    if ((node = ctx->HEXADECIMAL())) {
        uint64_t value = strtoull(node->getText().c_str(), NULL, 16);
        result = (Node)ast_Integer__create(NULL, NULL, NULL, value);
    } else
    if ((node = ctx->FLOATING_POINT())) {
        double value = atof(node->getText().c_str());
        result = (Node)ast_FloatingPoint__create(NULL, NULL, NULL, value);
    } else
    if ((node = ctx->INTEGER_MEASUREMENT())) {
        char *str = strdup(node->getText().c_str());
        char *ptr = NULL;
        uint64_t value = strtoul(str, &ptr, 10);
        result = (Node)ast_Integer__create(NULL, NULL, ptr, value);
        free(str);
    } else
    if ((node = ctx->SIGNED_INTEGER_MEASUREMENT())) {
        char *str = strdup(node->getText().c_str());
        char *ptr = NULL;
        int64_t value = strtol(str, &ptr, 10);
        result = (Node)ast_SignedInteger__create(NULL, NULL, ptr, value);
        free(str);
    } else
    if ((node = ctx->FLOATING_POINT_MEASUREMENT())) {
        char *str = strdup(node->getText().c_str());
        char *ptr = NULL;
        strtof(str, &ptr);
        double value = atof(str); /* Use double precision */
        result = (Node)ast_FloatingPoint__create(NULL, NULL, ptr, value);
        free(str);
    } else
    if ((node = ctx->STRING())) {
        char *str = strdup(node->getText().c_str());
        char *value = (char*)malloc(strlen(str) - 2 + 1);

        const char *in_ptr = str + 1;
        char *out_ptr = value;
        char ch;
        while((ch = *in_ptr) && (ch != str[0])) {
            in_ptr = chrparse(in_ptr, out_ptr);
            if(!in_ptr) {
                corto_raise();
            }
            out_ptr++;
        }
        *out_ptr = '\0';
        result = (Node)ast_String__create(NULL, NULL, value, str[0]);
        free(value);
    } else
    if ((node = ctx->NULL_LITERAL())) {
        result = (Node)ast_Null__create(NULL, NULL);
    }

    return result;
}
