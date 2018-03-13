/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_binary_add(
    test_binary _this)
{
    char *result, *input = "10 + 20";
    char *expect =
        "statements:\n"
        "|   BinaryExpression\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '20'\n"
        "|   |   operator: 'ADD'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_add_nested(
    test_binary _this)
{
    char *result, *input = "10 + 20 + 30";
    char *expect =
        "statements:\n"
        "|   BinaryExpression\n"
        "|   |   left: BinaryExpression\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'ADD'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'ADD'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_div(
    test_binary _this)
{
    char *result, *input = "10 / 20";
    char *expect =
        "statements:\n"
        "|   BinaryExpression\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '20'\n"
        "|   |   operator: 'DIV'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_div_nested(
    test_binary _this)
{
    char *result, *input = "10 / 20 / 30";
    char *expect =
        "statements:\n"
        "|   BinaryExpression\n"
        "|   |   left: BinaryExpression\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'DIV'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'DIV'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_mod(
    test_binary _this)
{
    char *result, *input = "10 % 20";
    char *expect =
        "statements:\n"
        "|   BinaryExpression\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '20'\n"
        "|   |   operator: 'MOD'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_mod_nested(
    test_binary _this)
{
    char *result, *input = "10 % 20 % 30";
    char *expect =
        "statements:\n"
        "|   BinaryExpression\n"
        "|   |   left: BinaryExpression\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'MOD'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'MOD'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_mul(
    test_binary _this)
{
    char *result, *input = "10 * 20";
    char *expect =
        "statements:\n"
        "|   BinaryExpression\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '20'\n"
        "|   |   operator: 'MUL'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_mul_nested(
    test_binary _this)
{
    char *result, *input = "10 * 20 * 30";
    char *expect =
        "statements:\n"
        "|   BinaryExpression\n"
        "|   |   left: BinaryExpression\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'MUL'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'MUL'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_sub(
    test_binary _this)
{
    char *result, *input = "10 - 20";
    char *expect =
        "statements:\n"
        "|   BinaryExpression\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '20'\n"
        "|   |   operator: 'SUB'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_sub_nested(
    test_binary _this)
{
    char *result, *input = "10 - 20 - 30";
    char *expect =
        "statements:\n"
        "|   BinaryExpression\n"
        "|   |   left: BinaryExpression\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'SUB'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'SUB'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_add_mul(
    test_binary _this)
{
    char *result, *input = "10 + 20 * 30";
    char *expect =
        "statements:\n"
        "|   BinaryExpression\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: BinaryExpression\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '30'\n"
        "|   |   |   operator: 'MUL'\n"
        "|   |   operator: 'ADD'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_add_mul_paren(
    test_binary _this)
{
    char *result, *input = "(10 + 20) * 30";
    char *expect =
        "statements:\n"
        "|   BinaryExpression\n"
        "|   |   left: BinaryExpression\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'ADD'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'MUL'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}
