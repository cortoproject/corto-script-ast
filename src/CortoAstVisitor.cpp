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

Any CortoAstVisitor::visitStatements(CortoParser::StatementsContext *ctx) {
    Block block = corto::declare<Block_t>();

    vector< CortoParser::StatementContext *> statementCtx = ctx->statement();

    if (statementCtx.size()) {
        for (unsigned int i = 0; i < statementCtx.size(); i ++) {
            Statement statement = safe_visit<Statement_t>(this, statementCtx[i]);
            ast_Block_addStatement(block, statement);
        }
    }

    corto_define(block);

    return (Node)block;
}

Any CortoAstVisitor::visitStatement(CortoParser::StatementContext *ctx) {
    Node node = NULL;

    CortoParser::DeclarationContext *decl_ctx = ctx->declaration();
    CortoParser::ExpressionContext *expr_ctx = ctx->expression();

    if (decl_ctx) {
        node = safe_visit<Node_t>(this, decl_ctx);
    } else if (expr_ctx) {
        node = safe_visit<Node_t>(this, expr_ctx);
    }

    return node;
}

Any CortoAstVisitor::visitScope(CortoParser::ScopeContext *ctx) {
    Block block = NULL;

    CortoParser::StatementsContext *statements_ctx = ctx->statements();
    if (statements_ctx) {
        block = safe_visit<Block_t>(this, statements_ctx);
    }

    return (Node)block;
}

Any CortoAstVisitor::visitDeclaration(CortoParser::DeclarationContext *ctx) {
    ast_Declaration declaration = corto::declare<Declaration_t>();

    // Parse type of the declaration
    CortoParser::Storage_expressionContext *typeCtx = ctx->storage_expression();
    if (typeCtx) {
        declaration->type = safe_visit<Storage_t>(this, typeCtx);
    }

    // Parse identifiers of declaration
    CortoParser::Declaration_identifierContext* declarationCtx =
        ctx->declaration_identifier();

    if (declarationCtx) {
        declaration->id = safe_visit<DeclarationIdentifier_t>(
            this,
            declarationCtx);
    }

    // Parse initializer of declaration
    CortoParser::Initializer_assignmentContext *initializerCtx =
        ctx->initializer_assignment();
    if (initializerCtx) {
        declaration->initializer = safe_visit<Initializer_t>(this, initializerCtx);
    }

    // Parse scope of declaration
    CortoParser::ScopeContext *scope_ctx = ctx->scope();
    if (scope_ctx) {
        declaration->scope = safe_visit<Block_t>(this, scope_ctx);
        printf("declaration_scope_ctx = %p\n", declaration->scope);
    }

    corto_define(declaration);

    return (Node)declaration;
}

Any CortoAstVisitor::visitDeclaration_identifier(CortoParser::Declaration_identifierContext *ctx) {
    DeclarationIdentifier result = corto::declare<DeclarationIdentifier_t>();

    // Identifiers are identifiers without a local initializer
    vector<CortoParser::Storage_identifierContext *> idCtx =
        ctx->storage_identifier();
    if (idCtx.size()) {
        for (unsigned int i = 0; i < idCtx.size(); i ++) {
            std::string id = visit(idCtx[i]);
            Identifier id_node = corto::declare<Identifier_t>();
            if (id == "/root") {
                id_node->id = corto_strdup("/");
            } else {
                id_node->id = corto_strdup(id.c_str());
            }
            corto_define(id_node);
            corto_ll_append(result->ids, id_node);
        }
    }

    // Expressions are identifiers with a local initializer
    vector<CortoParser::Storage_expressionContext *> exprCtx =
        ctx->storage_expression();
    if (exprCtx.size()) {
        for (unsigned int i = 0; i < exprCtx.size(); i ++) {
            Storage id = safe_visit<Storage_t>(this, exprCtx[i]);
            corto_ll_append(result->ids, id);
        }
    }

    // Parse argument list, if specified
    CortoParser::Argument_declarationContext *argumentsCtx =
        ctx->argument_declaration();
    if (argumentsCtx) {
        vector<CortoParser::ArgumentContext*> argumentCtx =
            argumentsCtx->argument();
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
    CortoParser::Initializer_expressionContext* initCtx =
        ctx->initializer_expression();
    antlr4::tree::TerminalNode *memberCtx = ctx->IDENTIFIER();

    if (idCtx) {
        Identifier id = corto::declare<Identifier_t>();
        std::string id_str = idCtx->getText();
        if (id_str == "root/") {
            corto_set_str(&id->id, "/");
        } else {
            corto_set_str(&id->id, idCtx->getText().c_str());
        }
        result = (Node)id;
    } else
    if (memberCtx) {
        Member member = corto::declare<Member_t>();
        member->expr = safe_visit<Storage_t>(this, storageCtx);
        member->key = corto_strdup(memberCtx->getText().c_str());
        result = (Node)member;
    } else
    if (initCtx) {
        StorageInitializer member = corto::declare<StorageInitializer_t>();
        member->expr = safe_visit<Storage_t>(this, storageCtx);
        member->initializer = safe_visit<Initializer_t>(this, initCtx);
        result = (Node)member;
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
    CortoParser::ExpressionContext *exprCtx = ctx->expression();
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
    corto_set_str(&argument->name, ctx->IDENTIFIER()->getText().c_str());

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
    }

    return result;
}

Any CortoAstVisitor::visitPostfix_expression(CortoParser::Postfix_expressionContext *ctx) {
    Expression result = NULL;

    CortoParser::Primary_expressionContext *primary_ctx = ctx->primary_expression();
    CortoParser::Storage_expressionContext *storage_ctx = ctx->storage_expression();
    CortoParser::Postfix_expressionContext *postfix_ctx = ctx->postfix_expression();
    CortoParser::Initializer_expressionContext *initializer_ctx = ctx->initializer_expression();

    if (primary_ctx) {
        result = safe_visit<Expression_t>(this, primary_ctx);
    } else
    if (storage_ctx) {
        result = safe_visit<Expression_t>(this, storage_ctx);
    } else
    if (initializer_ctx) {
        result = safe_visit<Expression_t>(this, initializer_ctx);
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

Any CortoAstVisitor::visitPrimary_expression(CortoParser::Primary_expressionContext *ctx) {
    Expression result = NULL;

    CortoParser::LiteralContext *literal_ctx = ctx->literal();
    CortoParser::ExpressionContext *expr_ctx = ctx->expression();

    if (expr_ctx) {
        result = safe_visit<Expression_t>(this, expr_ctx);
    } else
    if (literal_ctx) {
        result = safe_visit<Expression_t>(this, literal_ctx);
    }

    return (Node)result;
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
        double value = strtof(str, &ptr);
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
