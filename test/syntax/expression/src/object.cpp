/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_object_identifier(
    test_object _this)
{
    char *result, *input = "foo";
    char *expect =
        "statements:\n"
        "|   Object\n"
        "|   |   id: 'foo'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_object_full_identifier(
    test_object _this)
{
    char *result, *input = "/foo";
    char *expect =
        "statements:\n"
        "|   Object\n"
        "|   |   id: '/foo'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_object_nested_identifier(
    test_object _this)
{
    char *result, *input = "foo/bar";
    char *expect =
        "statements:\n"
        "|   Object\n"
        "|   |   id: 'foo/bar'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_object_full_nested_identifier(
    test_object _this)
{
    char *result, *input = "/foo/bar";
    char *expect =
        "statements:\n"
        "|   Object\n"
        "|   |   id: '/foo/bar'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_object_root_identifier(
    test_object _this)
{
    char *result, *input = "root/";
    char *expect =
        "statements:\n"
        "|   Object\n"
        "|   |   id: '/'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}
