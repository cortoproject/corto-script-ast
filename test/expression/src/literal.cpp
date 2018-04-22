/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_literal_boolean_true(
    test_literal _this)
{
    char *result, *input = "true";
    char *expect =
        "statements:\n"
        "|   Boolean\n"
        "|   |   value: 'true'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_boolean_false(
    test_literal _this)
{
    char *result, *input = "false";
    char *expect =
        "statements:\n"
        "|   Boolean\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_floating_point(
    test_literal _this)
{
    char *result, *input = "10.5";
    char *expect =
        "statements:\n"
        "|   FloatingPoint\n"
        "|   |   value: '10.500000'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_floating_point_measurement(
    test_literal _this)
{
    char *result, *input = "10.5ft";
    char *expect =
        "statements:\n"
        "|   FloatingPoint\n"
        "|   |   unit: 'ft'\n"
        "|   |   value: '10.500000'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_hexadecimal(
    test_literal _this)
{
    char *result, *input = "0xFF";
    char *expect =
        "statements:\n"
        "|   Integer\n"
        "|   |   value: '255'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_integer(
    test_literal _this)
{
    char *result, *input = "10";
    char *expect =
        "statements:\n"
        "|   Integer\n"
        "|   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_integer_measurement(
    test_literal _this)
{
    char *result, *input = "10ft";
    char *expect =
        "statements:\n"
        "|   Integer\n"
        "|   |   unit: 'ft'\n"
        "|   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_null_literal(
    test_literal _this)
{
    char *result, *input = "null";
    char *expect =
        "statements:\n"
        "|   Null\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_signed_integer_minus(
    test_literal _this)
{
    char *result, *input = "-10";
    char *expect =
        "statements:\n"
        "|   SignedInteger\n"
        "|   |   value: '-10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_signed_integer_minus_measurement(
    test_literal _this)
{
    char *result, *input = "-10ft";
    char *expect =
        "statements:\n"
        "|   SignedInteger\n"
        "|   |   unit: 'ft'\n"
        "|   |   value: '-10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_signed_integer_plus(
    test_literal _this)
{
    char *result, *input = "+10";
    char *expect =
        "statements:\n"
        "|   SignedInteger\n"
        "|   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_signed_integer_plus_measurement(
    test_literal _this)
{
    char *result, *input = "+10ft";
    char *expect =
        "statements:\n"
        "|   SignedInteger\n"
        "|   |   unit: 'ft'\n"
        "|   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_string_double_quote(
    test_literal _this)
{
    char *result, *input = "\"Foo\"";
    char *expect =
        "statements:\n"
        "|   String\n"
        "|   |   value: 'Foo'\n"
        "|   |   delim: '\"'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_string_single_quote(
    test_literal _this)
{
    char *result, *input = "'Foo'";
    char *expect =
        "statements:\n"
        "|   String\n"
        "|   |   value: 'Foo'\n"
        "|   |   delim: '\\''\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}
