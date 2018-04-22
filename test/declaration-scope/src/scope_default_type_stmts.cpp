/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_scope_default_type_stmts_implicit_type_anonymous_id(
    test_scope_default_type_stmts _this)
{
    char *result, *input = "foo bar {|hello(world)| p: 1; q: 2; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'bar'\n"
        "|   |   scope: Scope\n"
        "|   |   |   default_type: StorageInitializer\n"
        "|   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   values:\n"
        "|   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'world'\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'p'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'q'\n"
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

void test_scope_default_type_stmts_implicit_type_full_id(
    test_scope_default_type_stmts _this)
{
    char *result, *input = "foo bar {|/hello| p: 1; q: 2; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'bar'\n"
        "|   |   scope: Scope\n"
        "|   |   |   default_type: Identifier\n"
        "|   |   |   |   id: '/hello'\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'p'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'q'\n"
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

void test_scope_default_type_stmts_implicit_type_full_nested_id(
    test_scope_default_type_stmts _this)
{
    char *result, *input = "foo bar {|/hello/world| p: 1; q: 2; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'bar'\n"
        "|   |   scope: Scope\n"
        "|   |   |   default_type: Identifier\n"
        "|   |   |   |   id: '/hello/world'\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'p'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'q'\n"
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

void test_scope_default_type_stmts_implicit_type_id(
    test_scope_default_type_stmts _this)
{
    char *result, *input = "foo bar {|hello| p: 1; q: 2; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'bar'\n"
        "|   |   scope: Scope\n"
        "|   |   |   default_type: Identifier\n"
        "|   |   |   |   id: 'hello'\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'p'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'q'\n"
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

void test_scope_default_type_stmts_implicit_type_nested_id(
    test_scope_default_type_stmts _this)
{
    char *result, *input = "foo bar {|hello/world| p: 1; q: 2; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'bar'\n"
        "|   |   scope: Scope\n"
        "|   |   |   default_type: Identifier\n"
        "|   |   |   |   id: 'hello/world'\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'p'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'q'\n"
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

void test_scope_default_type_stmts_anonymous_type_full_id(
    test_scope_default_type_stmts _this)
{
    char *result, *input = "foo bar {|/hello| t1(v1) p: 1; t2(v2) q: 2; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'bar'\n"
        "|   |   scope: Scope\n"
        "|   |   |   default_type: Identifier\n"
        "|   |   |   |   id: '/hello'\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: StorageInitializer\n"
        "|   |   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   |   id: 't1'\n"
        "|   |   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   |   |   |   id: 'v1'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'p'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: StorageInitializer\n"
        "|   |   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   |   id: 't2'\n"
        "|   |   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   |   |   |   id: 'v2'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'q'\n"
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

void test_scope_default_type_stmts_anonymous_type_full_nested_id(
    test_scope_default_type_stmts _this)
{
    char *result, *input = "foo bar {|/hello/world| t1(v1) p: 1; t2(v2) q: 2; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'bar'\n"
        "|   |   scope: Scope\n"
        "|   |   |   default_type: Identifier\n"
        "|   |   |   |   id: '/hello/world'\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: StorageInitializer\n"
        "|   |   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   |   id: 't1'\n"
        "|   |   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   |   |   |   id: 'v1'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'p'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: StorageInitializer\n"
        "|   |   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   |   id: 't2'\n"
        "|   |   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   |   |   |   id: 'v2'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'q'\n"
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

void test_scope_default_type_stmts_anonymous_type_id(
    test_scope_default_type_stmts _this)
{
    char *result, *input = "foo bar {|hello| t1(v1) p: 1; t2(v2) q: 2; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'bar'\n"
        "|   |   scope: Scope\n"
        "|   |   |   default_type: Identifier\n"
        "|   |   |   |   id: 'hello'\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: StorageInitializer\n"
        "|   |   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   |   id: 't1'\n"
        "|   |   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   |   |   |   id: 'v1'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'p'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: StorageInitializer\n"
        "|   |   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   |   id: 't2'\n"
        "|   |   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   |   |   |   id: 'v2'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'q'\n"
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

void test_scope_default_type_stmts_anonymous_type_nested_id(
    test_scope_default_type_stmts _this)
{
    char *result, *input = "foo bar {|hello/world| t1(v1) p: 1; t2(v2) q: 2; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'bar'\n"
        "|   |   scope: Scope\n"
        "|   |   |   default_type: Identifier\n"
        "|   |   |   |   id: 'hello/world'\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: StorageInitializer\n"
        "|   |   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   |   id: 't1'\n"
        "|   |   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   |   |   |   id: 'v1'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'p'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: StorageInitializer\n"
        "|   |   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   |   id: 't2'\n"
        "|   |   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   |   |   |   id: 'v2'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'q'\n"
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

void test_scope_default_type_stmts_named_type_full_id(
    test_scope_default_type_stmts _this)
{
    char *result, *input = "foo bar {|/hello| t1 p: 1; t2 q: 2; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'bar'\n"
        "|   |   scope: Scope\n"
        "|   |   |   default_type: Identifier\n"
        "|   |   |   |   id: '/hello'\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 't1'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'p'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 't2'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'q'\n"
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

void test_scope_default_type_stmts_named_type_full_nested_id(
    test_scope_default_type_stmts _this)
{
    char *result, *input = "foo bar {|/hello/world| t1 p: 1; t2 q: 2; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'bar'\n"
        "|   |   scope: Scope\n"
        "|   |   |   default_type: Identifier\n"
        "|   |   |   |   id: '/hello/world'\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 't1'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'p'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 't2'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'q'\n"
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

void test_scope_default_type_stmts_named_type_id(
    test_scope_default_type_stmts _this)
{
    char *result, *input = "foo bar {|hello| t1 p: 1; t2 q: 2; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'bar'\n"
        "|   |   scope: Scope\n"
        "|   |   |   default_type: Identifier\n"
        "|   |   |   |   id: 'hello'\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 't1'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'p'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 't2'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'q'\n"
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

void test_scope_default_type_stmts_named_type_nested_id(
    test_scope_default_type_stmts _this)
{
    char *result, *input = "foo bar {|hello/world| t1 p: 1; t2 q: 2; }";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'bar'\n"
        "|   |   scope: Scope\n"
        "|   |   |   default_type: Identifier\n"
        "|   |   |   |   id: 'hello/world'\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 't1'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'p'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   Declaration\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 't2'\n"
        "|   |   |   |   |   id: DeclarationIdentifier\n"
        "|   |   |   |   |   |   ids:\n"
        "|   |   |   |   |   |   |   Identifier\n"
        "|   |   |   |   |   |   |   |   id: 'q'\n"
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
