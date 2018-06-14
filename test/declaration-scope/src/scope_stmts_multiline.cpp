/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_scope_stmts_multiline_nested_decl_collection_1(
    test_scope_stmts_multiline _this)
{
    char *result, *input =
        "foo/bar hello {\n"
        "  type1 stmt1 = [1]\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'type1'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt1'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   collection: 'true'\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmts_multiline_nested_decl_collection_2(
    test_scope_stmts_multiline _this)
{
    char *result, *input =
        "foo/bar hello {\n"
        "  type1 stmt1 = [1]\n"
        "  type2 stmt2 = [2]\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'type1'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt1'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   collection: 'true'\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'type2'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt2'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   collection: 'true'\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '2'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_scope_stmts_multiline_nested_decl_composite_1(
    test_scope_stmts_multiline _this)
{
    char *result, *input =
        "foo/bar hello {\n"
        "  type1 stmt1 = {1}\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'type1'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt1'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmts_multiline_nested_decl_composite_2(
    test_scope_stmts_multiline _this)
{
    char *result, *input =
        "foo/bar hello {\n"
        "  type1 stmt1 = {1}\n"
        "  type2 stmt2 = {2}\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'type1'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt1'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'type2'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt2'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '2'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_scope_stmts_multiline_nested_decl_shorthand_1(
    test_scope_stmts_multiline _this)
{
    char *result, *input =
        "foo/bar hello {\n"
        "  type1 stmt1: 10\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'type1'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt1'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmts_multiline_nested_decl_shorthand_2(
    test_scope_stmts_multiline _this)
{
    char *result, *input =
        "foo/bar hello {\n"
        "  type1 stmt1: 10\n"
        "  type2 stmt2: 20\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'type1'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt1'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'type2'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt2'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '20'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmts_multiline_nested_decl_shorthand_multi_1(
    test_scope_stmts_multiline _this)
{
    char *result, *input =
        "foo/bar hello {\n"
        "  type stmt10, stmt11: 10\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'type'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt10'\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt11'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmts_multiline_nested_decl_shorthand_multi_2(
    test_scope_stmts_multiline _this)
{
    char *result, *input =
        "foo/bar hello {\n"
        "  type1 stmt10, stmt11: 10\n"
        "  type2 stmt20, stmt21: 20\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'type1'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt10'\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt11'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'type2'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt20'\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt21'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '20'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmts_multiline_nested_fwddecl_1(
    test_scope_stmts_multiline _this)
{
    char *result, *input =
        "foo/bar hello {\n"
        "  type stmt\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'type'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmts_multiline_nested_fwddecl_2(
    test_scope_stmts_multiline _this)
{
    char *result, *input =
        "foo/bar hello {\n"
        "  type1 stmt1\n"
        "  type2 stmt2\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'type1'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt1'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'type2'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt2'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_scope_stmts_multiline_nested_fwddecl_multi_1(
    test_scope_stmts_multiline _this)
{
    char *result, *input =
        "foo/bar hello {\n"
        "  type stmt10, stmt11\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'type'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt10'\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt11'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmts_multiline_nested_fwddecl_multi_2(
    test_scope_stmts_multiline _this)
{
    char *result, *input =
        "foo/bar hello {\n"
        "  type1 stmt10, stmt11\n"
        "  type2 stmt20, stmt21\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'type1'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt10'\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt11'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'type2'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt20'\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt21'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmts_multiline_nested_id_1(
    test_scope_stmts_multiline _this)
{
    char *result, *input =
        "foo/bar hello {\n"
        "  stmt\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_scope_stmts_multiline_nested_id_2(
    test_scope_stmts_multiline _this)
{
    char *result, *input =
        "foo/bar hello {\n"
        "  stmt1\n"
        "  stmt2\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt1'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'stmt2'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_scope_stmts_multiline_nested_anonymous_collection_1(
    test_scope_stmts_multiline _this)
{
    char *result, *input =
        "foo/bar hello {\n"
        "  anon = [1, 2]\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'anon'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   collection: 'true'\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '2'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_scope_stmts_multiline_nested_anonymous_collection_2(
    test_scope_stmts_multiline _this)
{
    char *result, *input =
        "foo/bar hello {\n"
        "  anon1 = [1, 2]\n"
        "  anon2 = [3, 4]\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'anon1'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   collection: 'true'\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '2'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'anon2'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   collection: 'true'\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '3'\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '4'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmts_multiline_nested_anonymous_composite_1(
    test_scope_stmts_multiline _this)
{
    char *result, *input =
        "foo/bar hello {\n"
        "  anon = {1, 2}\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'anon'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '2'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_scope_stmts_multiline_nested_anonymous_composite_2(
    test_scope_stmts_multiline _this)
{
    char *result, *input =
        "foo/bar hello {\n"
        "  anon1 = {1, 2}\n"
        "  anon2 = {3, 4}\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'anon1'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '2'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'anon2'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '3'\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '4'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}
