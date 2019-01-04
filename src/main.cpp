/* This is a managed file. Do not delete this comment. */

#include <corto.script.ast>
#include "CortoAstVisitor.h"
#include "ast.h"

ut_tls ast_PARSER_KEY;

using namespace antlr4;

ast_Node cortoscript_ast_parse(
    const char * string,
    bool as_expression)
{
    ANTLRInputStream input(string);
    CortoLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();
    CortoParser parser(&tokens);
    tree::ParseTree* tree = NULL;
    if (as_expression) {
        tree = parser.expression();
    } else {
        tree = parser.program();
    }

    if (parser.getNumberOfSyntaxErrors()) {
        return NULL;
    }

    CortoAstVisitor visitor;
    return visitor.visit(tree);
}

ast_Node cortoscript_ast_parse_file(
    const char * file,
    bool as_expression)
{
    ANTLRFileStream input(file);
    CortoLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();
    CortoParser parser(&tokens);
    tree::ParseTree* tree = NULL;
    if (as_expression) {
        tree = parser.expression();
    } else {
        tree = parser.program();
    }

    if (parser.getNumberOfSyntaxErrors()) {
        return NULL;
    }

    CortoAstVisitor visitor;
    return visitor.visit(tree);
}

void cortoscript_ast_visit(
    ast_Node node,
    ast_Visitor visitor)
{
    ast_Node_visit(node, visitor);
}

extern "C"
int cortomain(int argc, char *argv[]) {

    /* Insert implementation */

    return 0;
}
