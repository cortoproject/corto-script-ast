/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_member_member(
    test_member _this)
{
    char *result, *input = "foo.bar";
    char *expect =
        "statements:\n"
        "|   Member\n"
        "|   |   expr: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   key: 'bar'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_member_member_nested_1(
    test_member _this)
{
    char *result, *input = "foo.bar.hello";
    char *expect =
        "statements:\n"
        "|   Member\n"
        "|   |   expr: Member\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'foo'\n"
        "|   |   |   key: 'bar'\n"
        "|   |   key: 'hello'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_member_member_nested_n(
    test_member _this)
{
    char *result, *input = "foo.bar.hello.world";
    char *expect =
        "statements:\n"
        "|   Member\n"
        "|   |   expr: Member\n"
        "|   |   |   expr: Member\n"
        "|   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   id: 'foo'\n"
        "|   |   |   |   key: 'bar'\n"
        "|   |   |   key: 'hello'\n"
        "|   |   key: 'world'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}
