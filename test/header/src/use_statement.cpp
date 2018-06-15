/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_use_statement_tc_use_dot_id(
    test_use_statement _this)
{
    char *result, *input = "use foo.bar";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: 'foo.bar'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_dot_id_as_dot_id(
    test_use_statement _this)
{
    char *result, *input = "use foo.bar as hello.world";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: 'foo.bar'\n"
        "|   |   alias: 'hello.world'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_dot_id_typesystem(
    test_use_statement _this)
{
    char *result, *input = "use typesystem foo.bar";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: 'foo.bar'\n"
        "|   |   as_typesystem: 'true'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_dot_nested_id(
    test_use_statement _this)
{
    char *result, *input = "use root.foo.bar";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: 'root.foo.bar'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_dot_nested_id_as_dot_nested_id(
    test_use_statement _this)
{
    char *result, *input = "use root.foo.bar as root.hello.world";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: 'root.foo.bar'\n"
        "|   |   alias: 'root.hello.world'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_dot_nested_id_typesystem(
    test_use_statement _this)
{
    char *result, *input = "use typesystem root.foo.bar";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: 'root.foo.bar'\n"
        "|   |   as_typesystem: 'true'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_full_id(
    test_use_statement _this)
{
    char *result, *input = "use /foo";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: '/foo'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_full_id_as_full_id(
    test_use_statement _this)
{
    char *result, *input = "use /foo as /bar";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: '/foo'\n"
        "|   |   alias: '/bar'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_full_id_typesystem(
    test_use_statement _this)
{
    char *result, *input = "use typesystem /foo";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: '/foo'\n"
        "|   |   as_typesystem: 'true'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_full_nested_id(
    test_use_statement _this)
{
    char *result, *input = "use /foo/bar";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: '/foo/bar'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_full_nested_id_as_full_nested_id(
    test_use_statement _this)
{
    char *result, *input = "use /foo/bar as /hello/world";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: '/foo/bar'\n"
        "|   |   alias: '/hello/world'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_full_nested_id_typesystem(
    test_use_statement _this)
{
    char *result, *input = "use typesystem /foo/bar";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: '/foo/bar'\n"
        "|   |   as_typesystem: 'true'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_id(
    test_use_statement _this)
{
    char *result, *input = "use foo";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: 'foo'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_id_as_id(
    test_use_statement _this)
{
    char *result, *input = "use foo as bar";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: 'foo'\n"
        "|   |   alias: 'bar'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_id_as_literal(
    test_use_statement _this)
{
    char *result, *input = "use foo as <1>";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: 'foo'\n"
        "|   |   alias: '<1>'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_id_typesystem(
    test_use_statement _this)
{
    char *result, *input = "use typesystem foo";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: 'foo'\n"
        "|   |   as_typesystem: 'true'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_literal(
    test_use_statement _this)
{
    char *result, *input = "use <1>";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: '<1>'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_literal_as_id(
    test_use_statement _this)
{
    char *result, *input = "use <1> as foo";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: '<1>'\n"
        "|   |   alias: 'foo'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_literal_as_typesystem(
    test_use_statement _this)
{
    char *result, *input = "use typesystem <1>";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: '<1>'\n"
        "|   |   as_typesystem: 'true'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_nested_id(
    test_use_statement _this)
{
    char *result, *input = "use foo/bar";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: 'foo/bar'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_nested_id_as_nested_id(
    test_use_statement _this)
{
    char *result, *input = "use foo/bar as hello/world";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: 'foo/bar'\n"
        "|   |   alias: 'hello/world'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_use_statement_tc_use_nested_id_typesystem(
    test_use_statement _this)
{
    char *result, *input = "use typesystem foo/bar";
    char *expect =
        "statements:\n"
        "|   Use\n"
        "|   |   package: 'foo/bar'\n"
        "|   |   as_typesystem: 'true'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}
