/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>
#include "CortoAstVisitor.h"
#include "ast.h"

corto_tls ast_PARSER_KEY;

using namespace antlr4;

ast_Node cortoscript_ast_parse(
    const char * string)
{
    ANTLRInputStream input(string);
    CortoLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();
    CortoParser parser(&tokens);
    tree::ParseTree* tree = parser.program();
    CortoAstVisitor visitor;
    return visitor.visit(tree);
}

ast_Node cortoscript_ast_parse_file(
    const char * file)
{
    ANTLRFileStream input(file);
    CortoLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();
    CortoParser parser(&tokens);
    tree::ParseTree* tree = parser.program();
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
