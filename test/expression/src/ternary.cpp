/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_ternary_literal(
    test_ternary _this)
{
    char *result, *input = "10 ? 20 : 30";
    char *expect =
        "Ternary\n"
        "|   cond: Integer\n"
        "|   |   value: '10'\n"
        "|   true: Integer\n"
        "|   |   value: '20'\n"
        "|   false: Integer\n"
        "|   |   value: '30'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_ternary_literal_nested_true(
    test_ternary _this)
{
    char *result, *input = "10 ? 20 ? 30 : 40 : 50";
    char *expect =
        "Ternary\n"
        "|   cond: Integer\n"
        "|   |   value: '10'\n"
        "|   true: Ternary\n"
        "|   |   cond: Integer\n"
        "|   |   |   value: '20'\n"
        "|   |   true: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   false: Integer\n"
        "|   |   |   value: '40'\n"
        "|   false: Integer\n"
        "|   |   value: '50'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_ternary_literal_nested_false(
    test_ternary _this)
{
    char *result, *input = "10 ? 20 : 30 ? 40 : 50";
    char *expect =
        "Ternary\n"
        "|   cond: Integer\n"
        "|   |   value: '10'\n"
        "|   true: Integer\n"
        "|   |   value: '20'\n"
        "|   false: Ternary\n"
        "|   |   cond: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   true: Integer\n"
        "|   |   |   value: '40'\n"
        "|   |   false: Integer\n"
        "|   |   |   value: '50'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}
