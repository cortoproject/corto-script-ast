/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_args_tc_full_id(
    test_args _this)
{
    char *result, *input = "hello(/foo arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: '/foo'\n"
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


void test_args_tc_full_id_nested(
    test_args _this)
{
    char *result, *input = "hello(/foo/bar arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: '/foo/bar'\n"
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


void test_args_tc_id(
    test_args _this)
{
    char *result, *input = "hello(foo arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'foo'\n"
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


void test_args_tc_id_nested(
    test_args _this)
{
    char *result, *input = "hello(foo/bar arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'foo/bar'\n"
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


void test_args_tc_in(
    test_args _this)
{
    char *result, *input = "hello(in foo arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'foo'\n"
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


void test_args_tc_inout(
    test_args _this)
{
    char *result, *input = "hello(inout foo arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'foo'\n"
        "|   |   |   |   |   inout: 'INOUT'\n"
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


void test_args_tc_inout_mixed(
    test_args _this)
{
    char *result, *input = "hello(in foo arg1, out bar arg2, inout foo/bar arg3): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg1'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'foo'\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg2'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'bar'\n"
        "|   |   |   |   |   inout: 'OUT'\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg3'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'foo/bar'\n"
        "|   |   |   |   |   inout: 'INOUT'\n"
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


void test_args_tc_out(
    test_args _this)
{
    char *result, *input = "hello(out foo arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'foo'\n"
        "|   |   |   |   |   inout: 'OUT'\n"
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


void test_args_tc_type_anonymous(
    test_args _this)
{
    char *result, *input = "hello(list(int32) arg1): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg1'\n"
        "|   |   |   |   |   type: StorageInitializer\n"
        "|   |   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   |   id: 'list'\n"
        "|   |   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   |   |   |   id: 'int32'\n"
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


void test_args_tc_type_mixed_anonymous(
    test_args _this)
{
    char *result, *input = "hello(list(int32) arg1, string arg2): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg1'\n"
        "|   |   |   |   |   type: StorageInitializer\n"
        "|   |   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   |   id: 'list'\n"
        "|   |   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   |   |   |   id: 'int32'\n"
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

void test_args_tc_in_anonymous(
    test_args _this)
{
    char *result, *input = "hello(in list(int32) arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: StorageInitializer\n"
        "|   |   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   |   id: 'list'\n"
        "|   |   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   |   |   |   id: 'int32'\n"
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

void test_args_tc_inout_anonymous(
    test_args _this)
{
    char *result, *input = "hello(inout list(int32) arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: StorageInitializer\n"
        "|   |   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   |   id: 'list'\n"
        "|   |   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   |   |   |   id: 'int32'\n"
        "|   |   |   |   |   inout: 'INOUT'\n"
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

void test_args_tc_out_anonymous(
    test_args _this)
{
    char *result, *input = "hello(out list(int32) arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: StorageInitializer\n"
        "|   |   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   |   id: 'list'\n"
        "|   |   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   |   |   |   id: 'int32'\n"
        "|   |   |   |   |   inout: 'OUT'\n"
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

void test_args_tc_ref(
    test_args _this)
{
    char *result, *input = "hello(float32& arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'float32'\n"
        "|   |   |   |   |   is_reference: 'true'\n"
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

void test_args_tc_ref_in(
    test_args _this)
{
    char *result, *input = "hello(in float32& arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'float32'\n"
        "|   |   |   |   |   is_reference: 'true'\n"
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

void test_args_tc_ref_in_anonymous(
    test_args _this)
{
    char *result, *input = "hello(in list(int32)& arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: StorageInitializer\n"
        "|   |   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   |   id: 'list'\n"
        "|   |   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   |   |   |   id: 'int32'\n"
        "|   |   |   |   |   is_reference: 'true'\n"
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

void test_args_tc_ref_inout(
    test_args _this)
{
    char *result, *input = "hello(inout float32& arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'float32'\n"
        "|   |   |   |   |   inout: 'INOUT'\n"
        "|   |   |   |   |   is_reference: 'true'\n"
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

void test_args_tc_ref_inout_anonymous(
    test_args _this)
{
    char *result, *input = "hello(inout list(int32)& arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: StorageInitializer\n"
        "|   |   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   |   id: 'list'\n"
        "|   |   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   |   |   |   id: 'int32'\n"
        "|   |   |   |   |   inout: 'INOUT'\n"
        "|   |   |   |   |   is_reference: 'true'\n"
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

void test_args_tc_ref_mixed(
    test_args _this)
{
    char *result, *input = "hello(float32& arg1, string arg2): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg1'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'float32'\n"
        "|   |   |   |   |   is_reference: 'true'\n"
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

void test_args_tc_ref_out(
    test_args _this)
{
    char *result, *input = "hello(out float32& arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: Identifier\n"
        "|   |   |   |   |   |   id: 'float32'\n"
        "|   |   |   |   |   inout: 'OUT'\n"
        "|   |   |   |   |   is_reference: 'true'\n"
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

void test_args_tc_ref_out_anonymous(
    test_args _this)
{
    char *result, *input = "hello(out list(int32)& arg): int32";
    char *expect =
        "statements:\n"
        "|   Declaration\n"
        "|   |   id: DeclarationIdentifier\n"
        "|   |   |   ids:\n"
        "|   |   |   |   Identifier\n"
        "|   |   |   |   |   id: 'hello'\n"
        "|   |   |   arguments:\n"
        "|   |   |   |   FunctionArgument\n"
        "|   |   |   |   |   name: 'arg'\n"
        "|   |   |   |   |   type: StorageInitializer\n"
        "|   |   |   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   |   |   id: 'list'\n"
        "|   |   |   |   |   |   initializer: Initializer\n"
        "|   |   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   |   value: Identifier\n"
        "|   |   |   |   |   |   |   |   |   |   id: 'int32'\n"
        "|   |   |   |   |   inout: 'OUT'\n"
        "|   |   |   |   |   is_reference: 'true'\n"
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
