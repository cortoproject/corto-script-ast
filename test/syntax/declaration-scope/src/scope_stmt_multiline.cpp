/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_scope_stmt_multiline_anonymous_type_full_id(
    test_scope_stmt_multiline _this)
{
    char *result, *input =
        "foo(bar) /hello {\n"
        "  stmt\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: StorageInitializer\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'foo'\n"
        "|   |   |   initializer: Initializer\n"
        "|   |   |   |   values:\n"
        "|   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   id: 'bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: '/hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'stmt'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmt_multiline_anonymous_type_full_nested_id(
    test_scope_stmt_multiline _this)
{
    char *result, *input =
        "foo(bar) /hello/world {\n"
        "  stmt\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: StorageInitializer\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'foo'\n"
        "|   |   |   initializer: Initializer\n"
        "|   |   |   |   values:\n"
        "|   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   id: 'bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: '/hello/world'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'stmt'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmt_multiline_anonymous_type_id(
    test_scope_stmt_multiline _this)
{
    char *result, *input =
        "foo(bar) /hello {\n"
        "  stmt\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: StorageInitializer\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'foo'\n"
        "|   |   |   initializer: Initializer\n"
        "|   |   |   |   values:\n"
        "|   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   id: 'bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: '/hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'stmt'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmt_multiline_anonymous_type_nested_id(
    test_scope_stmt_multiline _this)
{
    char *result, *input =
        "foo(bar) hello/world {\n"
        "  stmt\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: StorageInitializer\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'foo'\n"
        "|   |   |   initializer: Initializer\n"
        "|   |   |   |   values:\n"
        "|   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   id: 'bar'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello/world'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'stmt'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmt_multiline_implicit_type_full_id(
    test_scope_stmt_multiline _this)
{
    char *result, *input =
        "/hello {\n"
        "  stmt\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: '/hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'stmt'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmt_multiline_implicit_type_full_nested_id(
    test_scope_stmt_multiline _this)
{
    char *result, *input =
        "hello/world {\n"
        "  stmt\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello/world'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'stmt'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmt_multiline_implicit_type_id(
    test_scope_stmt_multiline _this)
{
    char *result, *input =
        "hello {\n"
        "  stmt\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'stmt'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmt_multiline_implicit_type_nested_id(
    test_scope_stmt_multiline _this)
{
    char *result, *input =
        "hello/world {\n"
        "  stmt\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello/world'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'stmt'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmt_multiline_named_type_full_id(
    test_scope_stmt_multiline _this)
{
    char *result, *input =
        "foo /hello {\n"
        "  stmt\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: '/hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'stmt'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmt_multiline_named_type_full_nested_id(
    test_scope_stmt_multiline _this)
{
    char *result, *input =
        "foo hello/world {\n"
        "  stmt\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello/world'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'stmt'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmt_multiline_named_type_id(
    test_scope_stmt_multiline _this)
{
    char *result, *input =
        "foo hello {\n"
        "  stmt\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'stmt'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_scope_stmt_multiline_named_type_nested_id(
    test_scope_stmt_multiline _this)
{
    char *result, *input =
        "foo hello/world {\n"
        "  stmt\n"
        "}"
        ;
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello/world'\n"
        "|   |   scope: Scope\n"
        "|   |   |   statements:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'stmt'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}
