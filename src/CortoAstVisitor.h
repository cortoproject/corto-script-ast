
#include <corto/script/ast/ast.h>

class  CortoAstVisitor : public CortoBaseVisitor {
public:
    antlrcpp::Any visitDeclaration(CortoParser::DeclarationContext *ctx) override;
    antlrcpp::Any visitDeclaration_identifier(CortoParser::Declaration_identifierContext *ctx) override;
    antlrcpp::Any visitObject_expression(CortoParser::Object_expressionContext *ctx) override;
    antlrcpp::Any visitObject_identifier(CortoParser::Object_identifierContext *ctx) override;
    antlrcpp::Any visitInitializer_composite(CortoParser::Initializer_compositeContext *ctx) override;
    antlrcpp::Any visitInitializer_collection(CortoParser::Initializer_collectionContext *ctx) override;
    antlrcpp::Any visitInitializer_list(CortoParser::Initializer_listContext *ctx) override;
    antlrcpp::Any visitInitializer_value(CortoParser::Initializer_valueContext *ctx) override;
    antlrcpp::Any visitArgument(CortoParser::ArgumentContext *ctx) override;
    antlrcpp::Any visitStatements(CortoParser::StatementsContext *ctx) override;
    antlrcpp::Any visitExpression(CortoParser::ExpressionContext *ctx) override;
};
