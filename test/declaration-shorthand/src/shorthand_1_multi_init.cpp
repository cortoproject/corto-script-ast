/* This is a managed file. Do not delete this comment. */

#include <include/test.h>



void test_shorthand_1_multi_init_anonymous_type_full_id(
    test_shorthand_1_multi_init _this)
{
    char *result, *input = "foo(bar) /hello(1), /world(2): 10";
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
        "|   |   |   |   StorageInitializer\n"
        "|   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   id: '/hello'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   StorageInitializer\n"
        "|   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   id: '/world'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '2'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_shorthand_1_multi_init_anonymous_type_full_nested_id(
    test_shorthand_1_multi_init _this)
{
    char *result, *input = "foo(bar) /hello/world(1), /world/hello(2): 10";
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
        "|   |   |   |   StorageInitializer\n"
        "|   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   id: '/hello/world'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   StorageInitializer\n"
        "|   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   id: '/world/hello'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '2'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_shorthand_1_multi_init_anonymous_type_id(
    test_shorthand_1_multi_init _this)
{
    char *result, *input = "foo(bar) hello(1), world(2): 10";
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
        "|   |   |   |   StorageInitializer\n"
        "|   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   id: 'hello'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   StorageInitializer\n"
        "|   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   id: 'world'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '2'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_shorthand_1_multi_init_anonymous_type_nested_id(
    test_shorthand_1_multi_init _this)
{
    char *result, *input = "foo(bar) hello/world(1), world/hello(2): 10";
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
        "|   |   |   |   StorageInitializer\n"
        "|   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   id: 'hello/world'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   StorageInitializer\n"
        "|   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   id: 'world/hello'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '2'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_shorthand_1_multi_init_named_type_full_id(
    test_shorthand_1_multi_init _this)
{
    char *result, *input = "foo /hello(1), /world(2): 10";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   StorageInitializer\n"
        "|   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   id: '/hello'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   StorageInitializer\n"
        "|   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   id: '/world'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '2'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_shorthand_1_multi_init_named_type_full_nested_id(
    test_shorthand_1_multi_init _this)
{
    char *result, *input = "foo /hello/world(1), /world/hello(2): 10";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   StorageInitializer\n"
        "|   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   id: '/hello/world'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   StorageInitializer\n"
        "|   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   id: '/world/hello'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '2'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_shorthand_1_multi_init_named_type_id(
    test_shorthand_1_multi_init _this)
{
    char *result, *input = "foo hello(1), world(2): 10";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   StorageInitializer\n"
        "|   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   id: 'hello'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   StorageInitializer\n"
        "|   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   id: 'world'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '2'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_shorthand_1_multi_init_named_type_nested_id(
    test_shorthand_1_multi_init _this)
{
    char *result, *input = "foo hello/world(1), world/hello(2): 10";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   StorageInitializer\n"
        "|   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   id: 'hello/world'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '1'\n"
        "|   |   |   |   StorageInitializer\n"
        "|   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   id: 'world/hello'\n"
        "|   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '2'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}