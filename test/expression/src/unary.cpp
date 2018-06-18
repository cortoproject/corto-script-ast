/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_unary_literal(
    test_unary _this)
{
    char *result, *input = "!true";
    char *expect =
        "Unary\n"
        "|   expr: Boolean\n"
        "|   |   value: 'true'\n"
        "|   operator: 'COND_NOT'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_unary_literal_nested(
    test_unary _this)
{
    char *result, *input = "++!true";
    char *expect =
        "Unary\n"
        "|   expr: Unary\n"
        "|   |   expr: Boolean\n"
        "|   |   |   value: 'true'\n"
        "|   |   operator: 'COND_NOT'\n"
        "|   operator: 'INC'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_unary_precedence(
    test_unary _this)
{
    char *result, *input = "!(int32)foo";
    char *expect =
        "Unary\n"
        "|   expr: Cast\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'int32'\n"
        "|   |   expr: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   operator: 'COND_NOT'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}
