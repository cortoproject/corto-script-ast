/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_postfix_call_arg_1(
    test_postfix _this)
{
    char *result, *input = "foo.bar[10]";
    char *expect =
        "StorageInitializer\n"
        "|   expr: Identifier\n"
        "|   |   id: 'foo.bar'\n"
        "|   initializer: Initializer\n"
        "|   |   values:\n"
        "|   |   |   InitializerValue\n"
        "|   |   |   |   value: Integer\n"
        "|   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_postfix_call_arg_n(
    test_postfix _this)
{
    char *result, *input = "foo.bar[10, 20]";
    char *expect =
        "StorageInitializer\n"
        "|   expr: Identifier\n"
        "|   |   id: 'foo.bar'\n"
        "|   initializer: Initializer\n"
        "|   |   values:\n"
        "|   |   |   InitializerValue\n"
        "|   |   |   |   value: Integer\n"
        "|   |   |   |   |   value: '10'\n"
        "|   |   |   InitializerValue\n"
        "|   |   |   |   value: Integer\n"
        "|   |   |   |   |   value: '20'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_postfix_call_arg_1_collection(
    test_postfix _this)
{
    char *result, *input = "foo.bar[a:[10]]";
    char *expect =
        "StorageInitializer\n"
        "|   expr: Identifier\n"
        "|   |   id: 'foo.bar'\n"
        "|   initializer: Initializer\n"
        "|   |   values:\n"
        "|   |   |   InitializerValue\n"
        "|   |   |   |   key: 'a'\n"
        "|   |   |   |   value: Initializer\n"
        "|   |   |   |   |   collection: 'true'\n"
        "|   |   |   |   |   values:\n"
        "|   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_postfix_call_arg_1_composite(
    test_postfix _this)
{
    char *result, *input = "foo.bar[a:{10}]";
    char *expect =
        "StorageInitializer\n"
        "|   expr: Identifier\n"
        "|   |   id: 'foo.bar'\n"
        "|   initializer: Initializer\n"
        "|   |   values:\n"
        "|   |   |   InitializerValue\n"
        "|   |   |   |   key: 'a'\n"
        "|   |   |   |   value: Initializer\n"
        "|   |   |   |   |   values:\n"
        "|   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_postfix_call_arg_1_key(
    test_postfix _this)
{
    char *result, *input = "foo.bar[a:10]";
    char *expect =
        "StorageInitializer\n"
        "|   expr: Identifier\n"
        "|   |   id: 'foo.bar'\n"
        "|   initializer: Initializer\n"
        "|   |   values:\n"
        "|   |   |   InitializerValue\n"
        "|   |   |   |   key: 'a'\n"
        "|   |   |   |   value: Integer\n"
        "|   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_postfix_call_arg_n_collection(
    test_postfix _this)
{
    char *result, *input = "foo.bar[a:[10], b:[20]]";
    char *expect =
        "StorageInitializer\n"
        "|   expr: Identifier\n"
        "|   |   id: 'foo.bar'\n"
        "|   initializer: Initializer\n"
        "|   |   values:\n"
        "|   |   |   InitializerValue\n"
        "|   |   |   |   key: 'a'\n"
        "|   |   |   |   value: Initializer\n"
        "|   |   |   |   |   collection: 'true'\n"
        "|   |   |   |   |   values:\n"
        "|   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   value: '10'\n"
        "|   |   |   InitializerValue\n"
        "|   |   |   |   key: 'b'\n"
        "|   |   |   |   value: Initializer\n"
        "|   |   |   |   |   collection: 'true'\n"
        "|   |   |   |   |   values:\n"
        "|   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   value: '20'\n"
        ;

        result = cortoscript_expr_to_string(input);
        test_assert(result != NULL);
        test_assertstr(expect, result);
        free(result);
}

void test_postfix_call_arg_n_composite(
    test_postfix _this)
{
    char *result, *input = "foo.bar[a:{10}, b:{20}]";
    char *expect =
        "StorageInitializer\n"
        "|   expr: Identifier\n"
        "|   |   id: 'foo.bar'\n"
        "|   initializer: Initializer\n"
        "|   |   values:\n"
        "|   |   |   InitializerValue\n"
        "|   |   |   |   key: 'a'\n"
        "|   |   |   |   value: Initializer\n"
        "|   |   |   |   |   values:\n"
        "|   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   value: '10'\n"
        "|   |   |   InitializerValue\n"
        "|   |   |   |   key: 'b'\n"
        "|   |   |   |   value: Initializer\n"
        "|   |   |   |   |   values:\n"
        "|   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   value: '20'\n"
        ;

        result = cortoscript_expr_to_string(input);
        test_assert(result != NULL);
        test_assertstr(expect, result);
        free(result);
}

void test_postfix_call_arg_n_key(
    test_postfix _this)
{
    char *result, *input = "foo.bar[a:10, b:20]";
    char *expect =
        "StorageInitializer\n"
        "|   expr: Identifier\n"
        "|   |   id: 'foo.bar'\n"
        "|   initializer: Initializer\n"
        "|   |   values:\n"
        "|   |   |   InitializerValue\n"
        "|   |   |   |   key: 'a'\n"
        "|   |   |   |   value: Integer\n"
        "|   |   |   |   |   value: '10'\n"
        "|   |   |   InitializerValue\n"
        "|   |   |   |   key: 'b'\n"
        "|   |   |   |   value: Integer\n"
        "|   |   |   |   |   value: '20'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_postfix_inc(
    test_postfix _this)
{
    char *result, *input = "foo ++";
    char *expect =
        "Unary\n"
        "|   expr: Identifier\n"
        "|   |   id: 'foo'\n"
        "|   operator: 'INC'\n"
        "|   postfix: 'true'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_postfix_dec(
    test_postfix _this)
{
    char *result, *input = "foo --";
    char *expect =
        "Unary\n"
        "|   expr: Identifier\n"
        "|   |   id: 'foo'\n"
        "|   operator: 'DEC'\n"
        "|   postfix: 'true'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}
