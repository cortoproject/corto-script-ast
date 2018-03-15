/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_identifier_identifier(
    test_identifier _this)
{
    char *result, *input = "foo";
    char *expect =
        "statements:\n"
        "|   Identifier\n"
        "|   |   id: 'foo'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_identifier_full_identifier(
    test_identifier _this)
{
    char *result, *input = "/foo";
    char *expect =
        "statements:\n"
        "|   Identifier\n"
        "|   |   id: '/foo'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_identifier_nested_identifier(
    test_identifier _this)
{
    char *result, *input = "foo/bar";
    char *expect =
        "statements:\n"
        "|   Identifier\n"
        "|   |   id: 'foo/bar'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_identifier_full_nested_identifier(
    test_identifier _this)
{
    char *result, *input = "/foo/bar";
    char *expect =
        "statements:\n"
        "|   Identifier\n"
        "|   |   id: '/foo/bar'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_identifier_root_identifier(
    test_identifier _this)
{
    char *result, *input = "root/";
    char *expect =
        "statements:\n"
        "|   Identifier\n"
        "|   |   id: '/'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}
