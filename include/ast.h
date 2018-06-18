/* ast.h
 * This is the main package file. Include this file in other projects.
 * Only modify inside the header-end and body-end sections.
 */

#ifndef CORTO_SCRIPT_AST_H
#define CORTO_SCRIPT_AST_H

#include <corto/corto.h>
#include <corto/script/ast/_project.h>
#include <corto/c/c.h>

/* Private dependencies */
#ifdef CORTO_SCRIPT_AST_IMPL
#include <antlr4/cpp/cpp.h>
#include <corto/script/parser/parser.h>
#endif

/* $header() */
/* $end */

#include <corto/script/ast/_type.h>
#include <corto/script/ast/_interface.h>
#include <corto/script/ast/_load.h>
#include <corto/script/ast/_binding.h>
#include <corto/script/ast/c/_api.h>
#ifdef __cplusplus
#include <corto/script/ast/cpp/cpp.h>
#endif

/* $body() */
#ifdef __cplusplus
extern "C" {
#endif

ast_Node cortoscript_ast_parse(
    const char * string,
    bool as_expression);

ast_Node cortoscript_ast_parse_file(
    const char * file,
    bool as_expression);

void cortoscript_ast_visit(
    ast_Node node,
    void *ctx);

ast_Expression cortoscript_ast_from_value(
    corto_value *value);

int16_t cortoscript_ast_to_value(
    ast_Node root,
    corto_value *value_out);

#ifdef __cplusplus
}
#endif
/* $end */

#endif
