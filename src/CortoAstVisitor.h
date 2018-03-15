
#include <corto/script/ast/ast.h>

class  CortoAstVisitor : public CortoBaseVisitor {
public:
    antlrcpp::Any visitScope(CortoParser::ScopeContext *ctx) override;
    antlrcpp::Any visitDeclaration(CortoParser::DeclarationContext *ctx) override;
    antlrcpp::Any visitDeclaration_identifier(CortoParser::Declaration_identifierContext *ctx) override;
    antlrcpp::Any visitStorage_expression(CortoParser::Storage_expressionContext *ctx) override;
    antlrcpp::Any visitStorage_identifier(CortoParser::Storage_identifierContext *ctx) override;
    antlrcpp::Any visitInitializer_composite(CortoParser::Initializer_compositeContext *ctx) override;
    antlrcpp::Any visitInitializer_collection(CortoParser::Initializer_collectionContext *ctx) override;
    antlrcpp::Any visitInitializer_list(CortoParser::Initializer_listContext *ctx) override;
    antlrcpp::Any visitInitializer_value(CortoParser::Initializer_valueContext *ctx) override;
    antlrcpp::Any visitArgument(CortoParser::ArgumentContext *ctx) override;
    antlrcpp::Any visitStatements(CortoParser::StatementsContext *ctx) override;
    antlrcpp::Any visitStatement(CortoParser::StatementContext *ctx) override;
    antlrcpp::Any visitLiteral(CortoParser::LiteralContext *ctx) override;

    antlrcpp::Any visitAssignment_expression(CortoParser::Assignment_expressionContext *ctx) override;
    antlrcpp::Any visitAssignment_operator(CortoParser::Assignment_operatorContext *ctx) override;
    antlrcpp::Any visitConditional_expression(CortoParser::Conditional_expressionContext *ctx) override;
    antlrcpp::Any visitLogical_or_expression(CortoParser::Logical_or_expressionContext *ctx) override;
    antlrcpp::Any visitLogical_and_expression(CortoParser::Logical_and_expressionContext *ctx) override;
    antlrcpp::Any visitOr_expression(CortoParser::Or_expressionContext *ctx) override;
    antlrcpp::Any visitXor_expression(CortoParser::Xor_expressionContext *ctx) override;
    antlrcpp::Any visitAnd_expression(CortoParser::And_expressionContext *ctx) override;
    antlrcpp::Any visitEquality_expression(CortoParser::Equality_expressionContext *ctx) override;
    antlrcpp::Any visitEquality_operator(CortoParser::Equality_operatorContext *ctx) override;
    antlrcpp::Any visitRelational_expression(CortoParser::Relational_expressionContext *ctx) override;
    antlrcpp::Any visitRelational_operator(CortoParser::Relational_operatorContext *ctx) override;
    antlrcpp::Any visitShift_expression(CortoParser::Shift_expressionContext *ctx) override;
    antlrcpp::Any visitShift_operator(CortoParser::Shift_operatorContext *ctx) override;
    antlrcpp::Any visitAdditive_expression(CortoParser::Additive_expressionContext *ctx) override;
    antlrcpp::Any visitAdditive_operator(CortoParser::Additive_operatorContext *ctx) override;
    antlrcpp::Any visitMultiplicative_expression(CortoParser::Multiplicative_expressionContext *ctx) override;
    antlrcpp::Any visitMultiplicative_operator(CortoParser::Multiplicative_operatorContext *ctx) override;
    antlrcpp::Any visitCast_expression(CortoParser::Cast_expressionContext *ctx) override;
    antlrcpp::Any visitUnary_expression(CortoParser::Unary_expressionContext *ctx) override;
    antlrcpp::Any visitUnary_operator(CortoParser::Unary_operatorContext *ctx) override;
    antlrcpp::Any visitPostfix_expression(CortoParser::Postfix_expressionContext *ctx) override;
    antlrcpp::Any visitInc_operator(CortoParser::Inc_operatorContext *ctx) override;
    antlrcpp::Any visitPrimary_expression(CortoParser::Primary_expressionContext *ctx) override;
};
