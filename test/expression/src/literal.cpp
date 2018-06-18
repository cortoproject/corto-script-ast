/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_literal_boolean_true(
    test_literal _this)
{
    char *result, *input = "true";
    char *expect =
        "Boolean\n"
        "|   value: 'true'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_boolean_false(
    test_literal _this)
{
    char *result, *input = "false";
    char *expect =
        "Boolean\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_floating_point(
    test_literal _this)
{
    char *result, *input = "10.5";
    char *expect =
        "FloatingPoint\n"
        "|   value: '10.500000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_floating_point_measurement(
    test_literal _this)
{
    char *result, *input = "10.5ft";
    char *expect =
        "FloatingPoint\n"
        "|   unit: 'ft'\n"
        "|   value: '10.500000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_floating_point_scientific_plus_e(
    test_literal _this)
{
    char *result, *input = "10.5e+2";
    char *expect =
        "FloatingPoint\n"
        "|   value: '1050.000000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_floating_point_scientific_plus_e_upper(
    test_literal _this)
{
    char *result, *input = "10.5E+2";
    char *expect =
        "FloatingPoint\n"
        "|   value: '1050.000000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_floating_point_scientific_minus_e(
    test_literal _this)
{
    char *result, *input = "10.5e-2";
    char *expect =
        "FloatingPoint\n"
        "|   value: '0.105000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_floating_point_scientific_minus_e_upper(
    test_literal _this)
{
    char *result, *input = "10.5E-2";
    char *expect =
        "FloatingPoint\n"
        "|   value: '0.105000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_floating_point_signed_scientific_minus_e(
    test_literal _this)
{
    char *result, *input = "-10.5e-2";
    char *expect =
        "FloatingPoint\n"
        "|   value: '-0.105000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_floating_point_signed_scientific_minus_e_upper(
    test_literal _this)
{
    char *result, *input = "-10.5E-2";
    char *expect =
        "FloatingPoint\n"
        "|   value: '-0.105000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_floating_point_signed_scientific_plus_e(
    test_literal _this)
{
    char *result, *input = "10.5e+2";
    char *expect =
        "FloatingPoint\n"
        "|   value: '1050.000000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_floating_point_signed_scientific_plus_e_upper(
    test_literal _this)
{
    char *result, *input = "-10.5E+2";
    char *expect =
        "FloatingPoint\n"
        "|   value: '-1050.000000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_hexadecimal(
    test_literal _this)
{
    char *result, *input = "0xFF";
    char *expect =
        "Integer\n"
        "|   value: '255'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_integer(
    test_literal _this)
{
    char *result, *input = "10";
    char *expect =
        "Integer\n"
        "|   value: '10'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_integer_measurement(
    test_literal _this)
{
    char *result, *input = "10ft";
    char *expect =
        "Integer\n"
        "|   unit: 'ft'\n"
        "|   value: '10'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_null_literal(
    test_literal _this)
{
    char *result, *input = "null";
    char *expect =
        "Null\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_signed_integer_minus(
    test_literal _this)
{
    char *result, *input = "-10";
    char *expect =
        "SignedInteger\n"
        "|   value: '-10'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_signed_integer_minus_measurement(
    test_literal _this)
{
    char *result, *input = "-10ft";
    char *expect =
        "SignedInteger\n"
        "|   unit: 'ft'\n"
        "|   value: '-10'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_signed_integer_plus(
    test_literal _this)
{
    char *result, *input = "+10";
    char *expect =
        "SignedInteger\n"
        "|   value: '10'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_signed_integer_plus_measurement(
    test_literal _this)
{
    char *result, *input = "+10ft";
    char *expect =
        "SignedInteger\n"
        "|   unit: 'ft'\n"
        "|   value: '10'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_string_double_quote(
    test_literal _this)
{
    char *result, *input = "\"Foo\"";
    char *expect =
        "String\n"
        "|   value: 'Foo'\n"
        "|   delim: '\"'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_literal_string_single_quote(
    test_literal _this)
{
    char *result, *input = "'Foo'";
    char *expect =
        "String\n"
        "|   value: 'Foo'\n"
        "|   delim: '\\''\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_integer_scientific_minus_e(
    test_literal _this)
{
    char *result, *input = "10e-2";
    char *expect =
        "FloatingPoint\n"
        "|   value: '0.100000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_integer_scientific_minus_e_upper(
    test_literal _this)
{
    char *result, *input = "10E-2";
    char *expect =
        "FloatingPoint\n"
        "|   value: '0.100000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_integer_scientific_plus_e(
    test_literal _this)
{
    char *result, *input = "10e+2";
    char *expect =
        "FloatingPoint\n"
        "|   value: '1000.000000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_integer_scientific_plus_e_upper(
    test_literal _this)
{
    char *result, *input = "10E+2";
    char *expect =
        "FloatingPoint\n"
        "|   value: '1000.000000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_signed_integer_scientific_minus_e(
    test_literal _this)
{
    char *result, *input = "-10e-2";
    char *expect =
        "FloatingPoint\n"
        "|   value: '-0.100000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_signed_integer_scientific_minus_e_upper(
    test_literal _this)
{
    char *result, *input = "-10E-2";
    char *expect =
        "FloatingPoint\n"
        "|   value: '-0.100000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_signed_integer_scientific_plus_e(
    test_literal _this)
{
    char *result, *input = "-10e+2";
    char *expect =
        "FloatingPoint\n"
        "|   value: '-1000.000000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_signed_integer_scientific_plus_e_upper(
    test_literal _this)
{
    char *result, *input = "-10E+2";
    char *expect =
        "FloatingPoint\n"
        "|   value: '-1000.000000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_floating_point_measurement_scientific_minus_e(
    test_literal _this)
{
    char *result, *input = "10.5e-2ft";
    char *expect =
        "FloatingPoint\n"
        "|   unit: 'ft'\n"
        "|   value: '0.105000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_floating_point_measurement_scientific_plus_e(
    test_literal _this)
{
    char *result, *input = "10.5e+2ft";
    char *expect =
        "FloatingPoint\n"
        "|   unit: 'ft'\n"
        "|   value: '1050.000000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_signed_integer_minus_measurement_scientific_minus_e(
    test_literal _this)
{
    char *result, *input = "-10e-2ft";
    char *expect =
        "FloatingPoint\n"
        "|   unit: 'ft'\n"
        "|   value: '-0.100000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_signed_integer_minus_measurement_scientific_plus_e(
    test_literal _this)
{
    char *result, *input = "-10e+2ft";
    char *expect =
        "FloatingPoint\n"
        "|   unit: 'ft'\n"
        "|   value: '-1000.000000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_signed_integer_plus_measurement_scientific_minus_e(
    test_literal _this)
{
    char *result, *input = "+10e-2ft";
    char *expect =
        "FloatingPoint\n"
        "|   unit: 'ft'\n"
        "|   value: '0.100000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_literal_signed_integer_plus_measurement_scientific_plus_e(
    test_literal _this)
{
    char *result, *input = "+10e+2ft";
    char *expect =
        "FloatingPoint\n"
        "|   unit: 'ft'\n"
        "|   value: '1000.000000'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}
