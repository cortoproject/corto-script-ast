/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_scope_stmts_nested_decl_collection_1(
    test_scope_stmts _this)
{
    char *result, *input = "foo/bar hello = [10, 20] { type1 stmt1 = [1]; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
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


void test_scope_stmts_nested_decl_collection_2(
    test_scope_stmts _this)
{
    char *result, *input = "foo/bar hello = [10, 20] { type1 stmt1 = [1]; type2 stmt2 = [2]; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
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

void test_scope_stmts_nested_decl_composite_1(
    test_scope_stmts _this)
{
    char *result, *input = "foo/bar hello = [10, 20] { type1 stmt1 = {1}; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
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


void test_scope_stmts_nested_decl_composite_2(
    test_scope_stmts _this)
{
    char *result, *input = "foo/bar hello = [10, 20] { type1 stmt1 = {1}; type2 stmt2 = {2}; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
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

void test_scope_stmts_nested_decl_shorthand_1(
    test_scope_stmts _this)
{
    char *result, *input = "foo/bar hello = [10, 20] { type1 stmt1: 10; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
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


void test_scope_stmts_nested_decl_shorthand_2(
    test_scope_stmts _this)
{
    char *result, *input = "foo/bar hello = [10, 20] { type1 stmt1: 10; type2 stmt2: 20; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
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


void test_scope_stmts_nested_decl_shorthand_multi_1(
    test_scope_stmts _this)
{
    char *result, *input = "foo/bar hello = [10, 20] { type stmt10, stmt11: 10; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
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


void test_scope_stmts_nested_decl_shorthand_multi_2(
    test_scope_stmts _this)
{
    char *result, *input = "foo/bar hello = [10, 20] { type1 stmt10, stmt11: 10; type2 stmt20, stmt21: 20; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
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


void test_scope_stmts_nested_fwddecl_1(
    test_scope_stmts _this)
{
    char *result, *input = "foo/bar hello = [10, 20] { type stmt; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
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


void test_scope_stmts_nested_fwddecl_2(
    test_scope_stmts _this)
{
    char *result, *input = "foo/bar hello = [10, 20] { type1 stmt1; type2 stmt2; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
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

void test_scope_stmts_nested_fwddecl_multi_1(
    test_scope_stmts _this)
{
    char *result, *input = "foo/bar hello = [10, 20] { type stmt10, stmt11; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
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


void test_scope_stmts_nested_fwddecl_multi_2(
    test_scope_stmts _this)
{
    char *result, *input = "foo/bar hello = [10, 20] { type1 stmt10, stmt11; type2 stmt20, stmt21; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
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


void test_scope_stmts_nested_id_1(
    test_scope_stmts _this)
{
    char *result, *input = "foo/bar hello = [10, 20] { stmt; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
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

void test_scope_stmts_nested_id_2(
    test_scope_stmts _this)
{
    char *result, *input = "foo/bar hello = [10, 20] { stmt1; stmt2; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
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
