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

    corto_log_push("statements");

    vector< CortoParser::StatementContext *> statementCtx = ctx->statement();

    if (statementCtx.size()) {
        for (unsigned int i = 0; i < statementCtx.size(); i ++) {
            Statement statement = safe_visit<Statement_t>(this, statementCtx[i]);
            ast_Block_addStatement(block, statement);
        }
    }

    corto_log_pop();

    return (Node)block;
}

Any CortoAstVisitor::visitDeclaration(CortoParser::DeclarationContext *ctx) {
    ast_Declaration declaration = corto::declare<Declaration_t>();

    corto_log_push("declaration");

    // Parse type of the declaration
    corto_log_push("declaration-type");
    CortoParser::Object_expressionContext *typeCtx = ctx->object_expression();
    if (typeCtx) {
        declaration->type = safe_visit<Id_t>(this, typeCtx);
    }
    corto_log_pop();

    // Parse identifiers of declaration
    CortoParser::Declaration_identifierContext* declarationCtx =
        ctx->declaration_identifier();

    if (declarationCtx) {
        corto_log_push("declaration-id");
        declaration->identifier = safe_visit<DeclarationIdentifier_t>(
            this,
            declarationCtx);
        corto_log_pop();
    }

    // Parse initializer of declaration
    CortoParser::Initializer_assignmentContext *initializerCtx =
        ctx->initializer_assignment();
    if (initializerCtx) {
        declaration->initializer = safe_visit<Initializer_t>(this, initializerCtx);
    }

    corto_define(declaration);
    corto_log_pop();

    return (Node)declaration;
}

Any CortoAstVisitor::visitDeclaration_identifier(CortoParser::Declaration_identifierContext *ctx) {
    corto_log_push("declaration_identifier");
    DeclarationIdentifier result = corto::declare<DeclarationIdentifier_t>();

    // Identifiers are identifiers without a local initializer
    vector<CortoParser::Object_identifierContext *> idCtx =
        ctx->object_identifier();
    if (idCtx.size()) {
        for (unsigned int i = 0; i < idCtx.size(); i ++) {
            std::string id = visit(idCtx[i]);
            Id id_node = corto::declare<Id_t>();
            id_node->id = corto_strdup(id.c_str());
            corto_define(id_node);
            corto_ll_append(result->identifiers, id_node);
        }
    }

    // Expressions are identifiers with a local initializer
    vector<CortoParser::Object_expressionContext *> exprCtx =
        ctx->object_expression();
    if (exprCtx.size()) {
        for (unsigned int i = 0; i < exprCtx.size(); i ++) {
            Id id = safe_visit<Id_t>(this, exprCtx[i]);
            corto_ll_append(result->identifiers, id);
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

    corto_log_pop();

    return (Node)result;
}

Any CortoAstVisitor::visitObject_expression(CortoParser::Object_expressionContext *ctx) {
    Id type = corto::declare<Id_t>();

    corto_log_push("object_expression");

    CortoParser::Object_identifierContext *idCtx = ctx->object_identifier();
    corto_set_str(&type->id, idCtx->getText().c_str());
    corto_info("id = '%s'", type->id);

    // If type is an anonymous type, obtain initializer
    vector<CortoParser::Initializer_expressionContext*> initCtx =
        ctx->initializer_expression();
    if (initCtx.size() == 1) {
        type->initializer = safe_visit<Initializer_t>(this, initCtx[0]);
    } else if (initCtx.size() != 0) {
        // TODO: handle expressions with multiple initializers
    }

    corto_define(type);

    corto_log_pop();

    return (Node)type;
}

Any CortoAstVisitor::visitObject_identifier(CortoParser::Object_identifierContext *ctx) {
    corto_info("object_identifier '%s'", ctx->getText().c_str());
    return ctx->getText();
}

Any CortoAstVisitor::visitInitializer_composite(CortoParser::Initializer_compositeContext *ctx) {
    Initializer result = NULL;

    corto_log_push("init_composite");

    CortoParser::Initializer_listContext *valueCtx = ctx->initializer_list();
    if (valueCtx) {
        result = safe_visit<Initializer_t>(this, valueCtx);
    }

    corto_log_pop();

    return (Node)result;
}

Any CortoAstVisitor::visitInitializer_collection(CortoParser::Initializer_collectionContext *ctx) {
    Initializer result = NULL;

    corto_log_push("init_collection");

    CortoParser::Initializer_listContext *valueCtx = ctx->initializer_list();
    if (valueCtx) {
        result = safe_visit<Initializer_t>(this, valueCtx);
        result->collection = true;
    }

    corto_log_pop();

    return (Node)result;
}

Any CortoAstVisitor::visitInitializer_list(CortoParser::Initializer_listContext *ctx) {
    Initializer result = corto::declare<Initializer_t>();

    corto_log_push("init_list");

    vector<CortoParser::Initializer_valueContext *> valueCtx =
        ctx->initializer_value();

    if (valueCtx.size()) {
        for (unsigned int i = 0; i < valueCtx.size(); i ++) {
            InitializerValue value = safe_visit<InitializerValue_t>(this, valueCtx[i]);
            corto_ll_append(result->values, value);
        }
    }

    corto_define(result);

    corto_log_pop();

    return (Node)result;
}

Any CortoAstVisitor::visitInitializer_value(CortoParser::Initializer_valueContext *ctx) {
    InitializerValue value = corto::declare<InitializerValue_t>();

    corto_log_push("init_value");

    // Get key of initializer value
    CortoParser::Initializer_keyContext *keyCtx = ctx->initializer_key();
    if (keyCtx) {
        corto_set_str(&value->key, keyCtx->getText().c_str());
    }

    // Get value, which can be either an expression or an initializer
    CortoParser::ExpressionContext *exprCtx = ctx->expression();
    if (exprCtx) {
        value->value = safe_visit<Expression_t>(this, exprCtx);
    } else {
        CortoParser::Initializer_expressionContext *initializerCtx =
            ctx->initializer_expression();
        if (initializerCtx) {
            value->value = safe_visit<Expression_t>(this, initializerCtx);
        }
    }

    corto_define(value);

    corto_log_pop();

    return (Node)value;
}

Any CortoAstVisitor::visitArgument(CortoParser::ArgumentContext *ctx) {
    FunctionArgument argument = corto::declare<FunctionArgument_t>();

    corto_info("begin_argument");

    // Get argument type
    argument->type = safe_visit<Id_t>(this, ctx->object_expression());

    // Get argument name
    corto_set_str(&argument->name, ctx->IDENTIFIER()->getText().c_str());

    corto_define(argument);

    corto_info("visit_arguments");

    return (Node)argument;
}

Any CortoAstVisitor::visitExpression(CortoParser::ExpressionContext *ctx) {
  corto_info("visit_expression");
  return (ast_Node)NULL;
}
