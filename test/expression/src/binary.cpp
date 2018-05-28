/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_binary_add(
    test_binary _this)
{
    char *result, *input = "10 + 20";
    char *expect =
        "statements:\n"
        "|   Binary\n"
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
        "|   Binary\n"
        "|   |   left: Binary\n"
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
        "|   Binary\n"
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
        "|   Binary\n"
        "|   |   left: Binary\n"
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
        "|   Binary\n"
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
        "|   Binary\n"
        "|   |   left: Binary\n"
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
        "|   Binary\n"
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
        "|   Binary\n"
        "|   |   left: Binary\n"
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
        "|   Binary\n"
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
        "|   Binary\n"
        "|   |   left: Binary\n"
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

void test_binary_gt(
    test_binary _this)
{
    char *result, *input = "10 > 20";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '20'\n"
        "|   |   operator: 'COND_GT'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_gt_nested(
    test_binary _this)
{
    char *result, *input = "10 > 20 > 30";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Binary\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'COND_GT'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'COND_GT'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_gteq(
    test_binary _this)
{
    char *result, *input = "10 >= 20";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '20'\n"
        "|   |   operator: 'COND_GTEQ'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_gteq_nested(
    test_binary _this)
{
    char *result, *input = "10 >= 20 >= 30";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Binary\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'COND_GTEQ'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'COND_GTEQ'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_lt(
    test_binary _this)
{
    char *result, *input = "10 < 20";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '20'\n"
        "|   |   operator: 'COND_LT'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_lt_nested(
    test_binary _this)
{
    char *result, *input = "10 < 20 < 30";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Binary\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'COND_LT'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'COND_LT'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_lteq(
    test_binary _this)
{
    char *result, *input = "10 <= 20";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '20'\n"
        "|   |   operator: 'COND_LTEQ'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_lteq_nested(
    test_binary _this)
{
    char *result, *input = "10 <= 20 <= 30";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Binary\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'COND_LTEQ'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'COND_LTEQ'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_shift(
    test_binary _this)
{
    char *result, *input = "10 << 20";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '20'\n"
        "|   |   operator: 'SHIFT_LEFT'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_shift_nested(
    test_binary _this)
{
    char *result, *input = "10 << 20 >> 30";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Binary\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'SHIFT_LEFT'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'SHIFT_RIGHT'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_bitwise_and(
    test_binary _this)
{
    char *result, *input = "10 & 20";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '20'\n"
        "|   |   operator: 'AND'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_bitwise_and_nested(
    test_binary _this)
{
    char *result, *input = "10 & 20 & 30";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Binary\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'AND'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'AND'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_bitwise_or(
    test_binary _this)
{
    char *result, *input = "10 | 20";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '20'\n"
        "|   |   operator: 'OR'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_bitwise_or_nested(
    test_binary _this)
{
    char *result, *input = "10 | 20 | 30";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Binary\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'OR'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'OR'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_bitwise_xor(
    test_binary _this)
{
    char *result, *input = "10 ^ 20";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '20'\n"
        "|   |   operator: 'XOR'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_bitwise_xor_nested(
    test_binary _this)
{
    char *result, *input = "10 ^ 20 ^ 30";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Binary\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'XOR'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'XOR'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_eq(
    test_binary _this)
{
    char *result, *input = "10 == 20";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '20'\n"
        "|   |   operator: 'COND_EQ'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_eq_nested(
    test_binary _this)
{
    char *result, *input = "10 == 20 == 30";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Binary\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'COND_EQ'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'COND_EQ'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_neq(
    test_binary _this)
{
    char *result, *input = "10 != 20";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '20'\n"
        "|   |   operator: 'COND_NEQ'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_neq_nested(
    test_binary _this)
{
    char *result, *input = "10 != 20 != 30";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Binary\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'COND_NEQ'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'COND_NEQ'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_cond_and(
    test_binary _this)
{
    char *result, *input = "10 && 20";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '20'\n"
        "|   |   operator: 'COND_AND'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_cond_and_nested(
    test_binary _this)
{
    char *result, *input = "10 && 20 && 30";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Binary\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'COND_AND'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'COND_AND'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_cond_or(
    test_binary _this)
{
    char *result, *input = "10 || 20";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '20'\n"
        "|   |   operator: 'COND_OR'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_cond_or_nested(
    test_binary _this)
{
    char *result, *input = "10 || 20 || 30";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Binary\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'COND_OR'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'COND_OR'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_cond_and_kw(
    test_binary _this)
{
    char *result, *input = "10 and 20";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '20'\n"
        "|   |   operator: 'COND_AND'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_cond_and_kw_nested(
    test_binary _this)
{
    char *result, *input = "10 and 20 and 30";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Binary\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'COND_AND'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'COND_AND'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_cond_or_kw(
    test_binary _this)
{
    char *result, *input = "10 or 20";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '20'\n"
        "|   |   operator: 'COND_OR'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_cond_or_kw_nested(
    test_binary _this)
{
    char *result, *input = "10 or 20 or 30";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Binary\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'COND_OR'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'COND_OR'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_assign(
    test_binary _this)
{
    char *result, *input = "foo = 10";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_assign_nested(
    test_binary _this)
{
    char *result, *input = "foo = bar = 30";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   right: Binary\n"
        "|   |   |   left: Identifier\n"
        "|   |   |   |   id: 'bar'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '30'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_assign_add(
    test_binary _this)
{
    char *result, *input = "foo += 10";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   operator: 'ASSIGN_ADD'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_assign_and(
    test_binary _this)
{
    char *result, *input = "foo &= 10";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   operator: 'ASSIGN_AND'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_assign_div(
    test_binary _this)
{
    char *result, *input = "foo /= 10";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   operator: 'ASSIGN_DIV'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_assign_mod(
    test_binary _this)
{
    char *result, *input = "foo %= 10";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   operator: 'ASSIGN_MOD'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_assign_mul(
    test_binary _this)
{
    char *result, *input = "foo *= 10";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   operator: 'ASSIGN_MUL'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_assign_or(
    test_binary _this)
{
    char *result, *input = "foo |= 10";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   operator: 'ASSIGN_OR'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_assign_shiftleft(
    test_binary _this)
{
    char *result, *input = "foo <<= 10";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   operator: 'ASSIGN_SHIFT_LEFT'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_assign_shiftright(
    test_binary _this)
{
    char *result, *input = "foo >>= 10";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   operator: 'ASSIGN_SHIFT_RIGHT'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_assign_sub(
    test_binary _this)
{
    char *result, *input = "foo -= 10";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   operator: 'ASSIGN_SUB'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_assign_xor(
    test_binary _this)
{
    char *result, *input = "foo ^= 10";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   operator: 'ASSIGN_XOR'\n"
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
        "|   Binary\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Binary\n"
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
        "|   Binary\n"
        "|   |   left: Binary\n"
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

void test_binary_add_shift(
    test_binary _this)
{
    char *result, *input = "10 << 20 + 30";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Integer\n"
        "|   |   |   value: '10'\n"
        "|   |   right: Binary\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '30'\n"
        "|   |   |   operator: 'ADD'\n"
        "|   |   operator: 'SHIFT_LEFT'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_binary_add_shift_paren(
    test_binary _this)
{
    char *result, *input = "(10 << 20) + 30";
    char *expect =
        "statements:\n"
        "|   Binary\n"
        "|   |   left: Binary\n"
        "|   |   |   left: Integer\n"
        "|   |   |   |   value: '10'\n"
        "|   |   |   right: Integer\n"
        "|   |   |   |   value: '20'\n"
        "|   |   |   operator: 'SHIFT_LEFT'\n"
        "|   |   right: Integer\n"
        "|   |   |   value: '30'\n"
        "|   |   operator: 'ADD'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}
