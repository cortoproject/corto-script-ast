/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_member_member(
    test_member _this)
{
    char *result, *input = "foo.bar";
    char *expect =
        "Identifier\n"
        "|   id: 'foo.bar'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_member_member_nested_1(
    test_member _this)
{
    char *result, *input = "foo.bar.hello";
    char *expect =
        "Identifier\n"
        "|   id: 'foo.bar.hello'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_member_member_nested_n(
    test_member _this)
{
    char *result, *input = "foo.bar.hello.world";
    char *expect =
        "Identifier\n"
        "|   id: 'foo.bar.hello.world'\n"
        ;

    result = cortoscript_expr_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}
