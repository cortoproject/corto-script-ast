/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_cast_identifier(
    test_cast _this)
{
    char *result, *input = "(foo)bar";
    char *expect =
        "statements:\n"
        "|   Cast\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   expr: Identifier\n"
        "|   |   |   id: 'bar'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_cast_nested_identifier(
    test_cast _this)
{
    char *result, *input = "(foo)(bar)helloworld";
    char *expect =
        "statements:\n"
        "|   Cast\n"
        "|   |   type: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   expr: Cast\n"
        "|   |   |   type: Identifier\n"
        "|   |   |   |   id: 'bar'\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'helloworld'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}
