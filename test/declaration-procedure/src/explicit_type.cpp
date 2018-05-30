/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_explicit_type_tc_no_args_full_id(
    test_explicit_type _this)
{
    char *result, *input = "function /hello(): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'function'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: '/hello'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   id: 'int32'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_explicit_type_tc_no_args_full_nested_id(
    test_explicit_type _this)
{
    char *result, *input = "function /hello/world(): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'function'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: '/hello/world'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   id: 'int32'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_explicit_type_tc_no_args_id(
    test_explicit_type _this)
{
    char *result, *input = "function hello(): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'function'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   id: 'int32'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_explicit_type_tc_no_args_nested_id(
    test_explicit_type _this)
{
    char *result, *input = "function hello/world(): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'function'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello/world'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   id: 'int32'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_explicit_type_tc_one_arg_full_id(
    test_explicit_type _this)
{
    char *result, *input = "function /hello(float32 arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'function'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: '/hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'float32'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   id: 'int32'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_explicit_type_tc_one_arg_full_nested_id(
    test_explicit_type _this)
{
    char *result, *input = "function /hello/world(float32 arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'function'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: '/hello/world'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'float32'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   id: 'int32'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_explicit_type_tc_one_arg_id(
    test_explicit_type _this)
{
    char *result, *input = "function hello(float32 arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'function'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'float32'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   id: 'int32'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_explicit_type_tc_one_arg_nested_id(
    test_explicit_type _this)
{
    char *result, *input = "function hello/world(float32 arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'function'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello/world'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'float32'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   id: 'int32'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_explicit_type_tc_two_args_full_id(
    test_explicit_type _this)
{
    char *result, *input = "function /hello(float32 arg1, string arg2): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'function'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: '/hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg1'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'float32'\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg2'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'string'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   id: 'int32'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_explicit_type_tc_two_args_full_nested_id(
    test_explicit_type _this)
{
    char *result, *input = "function /hello/world(float32 arg1, string arg2): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'function'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: '/hello/world'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg1'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'float32'\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg2'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'string'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   id: 'int32'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_explicit_type_tc_two_args_id(
    test_explicit_type _this)
{
    char *result, *input = "function hello(float32 arg1, string arg2): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'function'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg1'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'float32'\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg2'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'string'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   id: 'int32'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_explicit_type_tc_two_args_nested_id(
    test_explicit_type _this)
{
    char *result, *input = "function hello/world(float32 arg1, string arg2): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'function'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello/world'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg1'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'float32'\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg2'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'string'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   id: 'int32'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_explicit_type_tc_return_type_anonymous(
    test_explicit_type _this)
{
    char *result, *input = "function hello(float32 arg): list(int32)";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'function'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'float32'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: StorageInitializer\n"
        "|   |   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   |   id: 'list'\n"
        "|   |   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   |   |   |   id: 'int32'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_explicit_type_tc_return_type_anonymous_no_args(
    test_explicit_type _this)
{
    char *result, *input = "function hello(): list(int32)";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'function'\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: StorageInitializer\n"
        "|   |   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   |   id: 'list'\n"
        "|   |   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   |   |   |   id: 'int32'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}
