#include "corto/script/ast/ast.h"
#include "CortoAstVisitor.h"

using namespace std;
using namespace antlrcpp;
using namespace corto::script::ast;

Any CortoAstVisitor::visitDeclaration(CortoParser::DeclarationContext *ctx) {
    Declaration declaration = corto::declare<Declaration_t>();

    // Parse type of the declaration
    CortoParser::Object_expressionContext *typeCtx = ctx->object_expression();
    if (typeCtx) {
        declaration->type = visit(typeCtx);
    }

    // Parse identifiers of declaration
    CortoParser::Declaration_identifierContext* declarationCtx =
        ctx->declaration_identifier();

    if (declarationCtx) {
        vector<CortoParser::Object_expressionContext *> idCtx =
            declarationCtx->object_expression();
        if (idCtx.size()) {
            for (unsigned int i = 0; i < idCtx.size(); i ++) {
                Id *id = visit(idCtx[i]);
                corto_ll_append(declaration->ids, id);
            }
        }

        // Parse argument list, if specified
        CortoParser::Argument_declarationContext *argumentsCtx =
            declarationCtx->argument_declaration();
        if (argumentsCtx) {
            vector<CortoParser::ArgumentContext*> argumentCtx =
                argumentsCtx->argument();
            for (unsigned int i = 0; i < argumentCtx.size(); i ++) {
                FunctionArgument *argument = visit(argumentCtx[i]);
                corto_ll_append(declaration->argumentspec, argument);
            }
        }
    }

    // Parse initializer of declaration
    CortoParser::Initializer_assignmentContext *initializerCtx =
        ctx->initializer_assignment();
    if (initializerCtx) {
        declaration->initializer = visit(initializerCtx);
    }

    corto_define(declaration);

    return declaration;
}

Any CortoAstVisitor::visitObject_expression(CortoParser::Object_expressionContext *ctx) {
    Id type = corto::declare<Id_t>();

    CortoParser::Object_identifierContext *idCtx = ctx->object_identifier();
    corto_set_str(&type->id, idCtx->getText().c_str());

    // If type is an anonymous type, obtain initializer
    vector<CortoParser::Initializer_expressionContext*> initCtx =
        ctx->initializer_expression();
    if (initCtx.size() == 1) {
        type->initializer = visit(initCtx[0]);
    } else if (initCtx.size() != 0) {
        // TODO: handle expressions with multiple initializers
    }

    corto_define(type);

    return type;
}

Any CortoAstVisitor::visitObject_identifier(CortoParser::Object_identifierContext *ctx) {
    return ctx->getText();
}

Any CortoAstVisitor::visitInitializer_composite(CortoParser::Initializer_compositeContext *ctx) {
    Initializer initializer = corto::declare<Initializer_t>();

    initializer->collection = false;

    CortoParser::Initializer_listContext *valueCtx = ctx->initializer_list();
    if (valueCtx) {
        corto_ll values = visit(valueCtx);

        /* Replace list in initalizer object with list obtained from valueCtx */
        corto_ll_free(initializer->values);
        initializer->values = values;
    }

    corto_define(initializer);

    return initializer;
}

Any CortoAstVisitor::visitInitializer_collection(CortoParser::Initializer_collectionContext *ctx) {
    Initializer initializer = corto::declare<Initializer_t>();

    initializer->collection = true;

    CortoParser::Initializer_listContext *valueCtx = ctx->initializer_list();
    if (valueCtx) {
        corto_ll values = visit(valueCtx);

        /* Replace list in initalizer object with list obtained from valueCtx */
        corto_ll_free(initializer->values);
        initializer->values = values;
    }

    corto_define(initializer);

    return initializer;
}

Any CortoAstVisitor::visitInitializer_list(CortoParser::Initializer_listContext *ctx) {
    corto_ll values = corto_ll_new();

    vector<CortoParser::Initializer_valueContext *> valueCtx =
        ctx->initializer_value();

    if (valueCtx.size()) {
        for (unsigned int i = 0; i < valueCtx.size(); i ++) {
            InitializerValue value = visit(valueCtx[i]);
            corto_ll_append(values, value);
        }
    }

    return values;
}

Any CortoAstVisitor::visitInitializer_value(CortoParser::Initializer_valueContext *ctx) {
    InitializerValue value = corto::declare<InitializerValue_t>();

    // Get key of initializer value
    CortoParser::Initializer_keyContext *keyCtx = ctx->initializer_key();
    if (keyCtx) {
        corto_set_str(&value->key, keyCtx->getText().c_str());
    }

    /* Get value, which can be either an expression or an initializer */
    CortoParser::ExpressionContext *exprCtx = ctx->expression();
    if (exprCtx) {
        value->value = visit(exprCtx);
    } else {
        CortoParser::Initializer_expressionContext *initializerCtx =
            ctx->initializer_expression();
        if (initializerCtx) {
            value->value = visit(initializerCtx);
        }
    }

    return value;
}

Any CortoAstVisitor::visitArgument(CortoParser::ArgumentContext *ctx) {
    FunctionArgument argument = corto::declare<FunctionArgument_t>();

    // Get argument type
    argument->type = visit ( ctx->object_expression() );

    // Get argument name
    corto_set_str(&argument->name, ctx->IDENTIFIER()->getText().c_str());

    corto_define(argument);

    return argument;
}
