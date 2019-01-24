/* ast.h
 * This is the main package file. Include this file in other projects.
 * Only modify inside the header-end and body-end sections.
 */

#ifndef CORTO_SCRIPT_AST_H
#define CORTO_SCRIPT_AST_H

#include "bake_config.h"

#define CORTO_SCRIPT_AST_ETC ut_locate("corto.script.ast", NULL, UT_LOCATE_ETC)

/* $header() */
/* $end */

#include "_type.h"
#include "_interface.h"
#include "_load.h"
#include "_binding.h"

#include <corto.script.ast.c>
#ifdef __cplusplus
#include <corto.script.ast.cpp>
#endif

/* $body() */
#ifdef __cplusplus
extern "C" {
#endif

CORTO_SCRIPT_AST_EXPORT
ast_Node cortoscript_ast_parse(
    const char * string,
    bool as_expression);

CORTO_SCRIPT_AST_EXPORT
ast_Node cortoscript_ast_parse_file(
    const char * file,
    bool as_expression);

CORTO_SCRIPT_AST_EXPORT
void cortoscript_ast_visit(
    ast_Node node,
    void *ctx);

CORTO_SCRIPT_AST_EXPORT
ast_Expression cortoscript_ast_from_value(
    corto_value *value);

CORTO_SCRIPT_AST_EXPORT
int16_t cortoscript_ast_to_value(
    ast_Node root,
    corto_value *value_out);

#ifdef __cplusplus
}
#endif
/* $end */

#endif

