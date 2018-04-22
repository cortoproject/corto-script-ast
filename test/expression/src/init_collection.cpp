/* This is a managed file. Do not delete this comment. */

#include <include/test.h>

void test_init_collection_id_0(
    test_init_collection _this)
{
    char *result, *input = "foo[]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_id_0_mixed(
    test_init_collection _this)
{
    char *result, *input = "foo[]()";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: StorageInitializer\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'foo'\n"
        "|   |   |   initializer: Initializer\n"
        "|   |   |   |   collection: 'true'\n"
        "|   |   initializer: Initializer\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_id_0_nested(
    test_init_collection _this)
{
    char *result, *input = "foo[][]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: StorageInitializer\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'foo'\n"
        "|   |   |   initializer: Initializer\n"
        "|   |   |   |   collection: 'true'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_init_collection_id_1(
    test_init_collection _this)
{
    char *result, *input = "foo[10]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_id_1_coll(
    test_init_collection _this)
{
    char *result, *input = "foo[a[10]]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   key: 'a'\n"
        "|   |   |   |   |   value: Initializer\n"
        "|   |   |   |   |   |   collection: 'true'\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_id_1_comp(
    test_init_collection _this)
{
    char *result, *input = "foo[a(10)]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   key: 'a'\n"
        "|   |   |   |   |   value: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_id_1_key(
    test_init_collection _this)
{
    char *result, *input = "foo[a:10]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   key: 'a'\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_id_1_mixed(
    test_init_collection _this)
{
    char *result, *input = "foo[10](20)";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: StorageInitializer\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'foo'\n"
        "|   |   |   initializer: Initializer\n"
        "|   |   |   |   collection: 'true'\n"
        "|   |   |   |   values:\n"
        "|   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   value: '10'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_id_1_nested(
    test_init_collection _this)
{
    char *result, *input = "foo[10][20]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: StorageInitializer\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'foo'\n"
        "|   |   |   initializer: Initializer\n"
        "|   |   |   |   collection: 'true'\n"
        "|   |   |   |   values:\n"
        "|   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   value: '10'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_id_n(
    test_init_collection _this)
{
    char *result, *input = "foo[10, 20]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_id_n_coll(
    test_init_collection _this)
{
    char *result, *input = "foo[a[10], b[20]]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   key: 'a'\n"
        "|   |   |   |   |   value: Initializer\n"
        "|   |   |   |   |   |   collection: 'true'\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   key: 'b'\n"
        "|   |   |   |   |   value: Initializer\n"
        "|   |   |   |   |   |   collection: 'true'\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '20'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_id_n_comp(
    test_init_collection _this)
{
    char *result, *input = "foo[a(10), b(20)]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   key: 'a'\n"
        "|   |   |   |   |   value: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   key: 'b'\n"
        "|   |   |   |   |   value: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '20'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_id_n_key(
    test_init_collection _this)
{
    char *result, *input = "foo[a:10, b:20]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: Identifier\n"
        "|   |   |   id: 'foo'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   key: 'a'\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   key: 'b'\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_id_n_mixed(
    test_init_collection _this)
{
    char *result, *input = "foo[10, 20](30, 40)";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: StorageInitializer\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'foo'\n"
        "|   |   |   initializer: Initializer\n"
        "|   |   |   |   collection: 'true'\n"
        "|   |   |   |   values:\n"
        "|   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   value: '20'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '30'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '40'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_id_n_nested(
    test_init_collection _this)
{
    char *result, *input = "foo[10, 20][30, 40]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: StorageInitializer\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'foo'\n"
        "|   |   |   initializer: Initializer\n"
        "|   |   |   |   collection: 'true'\n"
        "|   |   |   |   values:\n"
        "|   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   value: '20'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '30'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '40'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_init_collection_member_0(
    test_init_collection _this)
{
    char *result, *input = "foo.bar[]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: Member\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'foo'\n"
        "|   |   |   key: 'bar'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_member_0_mixed(
    test_init_collection _this)
{
    char *result, *input = "foo.bar[]()";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: StorageInitializer\n"
        "|   |   |   expr: Member\n"
        "|   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   id: 'foo'\n"
        "|   |   |   |   key: 'bar'\n"
        "|   |   |   initializer: Initializer\n"
        "|   |   |   |   collection: 'true'\n"
        "|   |   initializer: Initializer\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_member_0_nested(
    test_init_collection _this)
{
    char *result, *input = "foo.bar[][]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: StorageInitializer\n"
        "|   |   |   expr: Member\n"
        "|   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   id: 'foo'\n"
        "|   |   |   |   key: 'bar'\n"
        "|   |   |   initializer: Initializer\n"
        "|   |   |   |   collection: 'true'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_init_collection_member_1(
    test_init_collection _this)
{
    char *result, *input = "foo.bar[10]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: Member\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'foo'\n"
        "|   |   |   key: 'bar'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_member_1_coll(
    test_init_collection _this)
{
    char *result, *input = "foo.bar[a[10]]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: Member\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'foo'\n"
        "|   |   |   key: 'bar'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   key: 'a'\n"
        "|   |   |   |   |   value: Initializer\n"
        "|   |   |   |   |   |   collection: 'true'\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_member_1_comp(
    test_init_collection _this)
{
    char *result, *input = "foo.bar[a(10)]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: Member\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'foo'\n"
        "|   |   |   key: 'bar'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   key: 'a'\n"
        "|   |   |   |   |   value: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_member_1_key(
    test_init_collection _this)
{
    char *result, *input = "foo.bar[a:10]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: Member\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'foo'\n"
        "|   |   |   key: 'bar'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   key: 'a'\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_init_collection_member_1_mixed(
    test_init_collection _this)
{
    char *result, *input = "foo.bar[10](20)";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: StorageInitializer\n"
        "|   |   |   expr: Member\n"
        "|   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   id: 'foo'\n"
        "|   |   |   |   key: 'bar'\n"
        "|   |   |   initializer: Initializer\n"
        "|   |   |   |   collection: 'true'\n"
        "|   |   |   |   values:\n"
        "|   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   value: '10'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_member_1_nested(
    test_init_collection _this)
{
    char *result, *input = "foo.bar[10][20]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: StorageInitializer\n"
        "|   |   |   expr: Member\n"
        "|   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   id: 'foo'\n"
        "|   |   |   |   key: 'bar'\n"
        "|   |   |   initializer: Initializer\n"
        "|   |   |   |   collection: 'true'\n"
        "|   |   |   |   values:\n"
        "|   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   value: '10'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_member_n(
    test_init_collection _this)
{
    char *result, *input = "foo.bar[10, 20]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: Member\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'foo'\n"
        "|   |   |   key: 'bar'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_member_n_coll(
    test_init_collection _this)
{
    char *result, *input = "foo.bar[a[10], b[20]]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: Member\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'foo'\n"
        "|   |   |   key: 'bar'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   key: 'a'\n"
        "|   |   |   |   |   value: Initializer\n"
        "|   |   |   |   |   |   collection: 'true'\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   key: 'b'\n"
        "|   |   |   |   |   value: Initializer\n"
        "|   |   |   |   |   |   collection: 'true'\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '20'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_member_n_comp(
    test_init_collection _this)
{
    char *result, *input = "foo.bar[a(10), b(20)]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: Member\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'foo'\n"
        "|   |   |   key: 'bar'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   key: 'a'\n"
        "|   |   |   |   |   value: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   key: 'b'\n"
        "|   |   |   |   |   value: Initializer\n"
        "|   |   |   |   |   |   values:\n"
        "|   |   |   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   |   |   value: '20'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_member_n_key(
    test_init_collection _this)
{
    char *result, *input = "foo.bar[a:10, b:20]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: Member\n"
        "|   |   |   expr: Identifier\n"
        "|   |   |   |   id: 'foo'\n"
        "|   |   |   key: 'bar'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   key: 'a'\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   key: 'b'\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '20'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_member_n_mixed(
    test_init_collection _this)
{
    char *result, *input = "foo.bar[10, 20](30, 40)";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: StorageInitializer\n"
        "|   |   |   expr: Member\n"
        "|   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   id: 'foo'\n"
        "|   |   |   |   key: 'bar'\n"
        "|   |   |   initializer: Initializer\n"
        "|   |   |   |   collection: 'true'\n"
        "|   |   |   |   values:\n"
        "|   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   value: '20'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '30'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '40'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}


void test_init_collection_member_n_nested(
    test_init_collection _this)
{
    char *result, *input = "foo.bar[10, 20][30, 40]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: StorageInitializer\n"
        "|   |   |   expr: Member\n"
        "|   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   id: 'foo'\n"
        "|   |   |   |   key: 'bar'\n"
        "|   |   |   initializer: Initializer\n"
        "|   |   |   |   collection: 'true'\n"
        "|   |   |   |   values:\n"
        "|   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   value: '10'\n"
        "|   |   |   |   |   InitializerValue\n"
        "|   |   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   |   value: '20'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '30'\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '40'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_init_collection_member_id_1(
    test_init_collection _this)
{
    char *result, *input = "foo/bar[10]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: Identifier\n"
        "|   |   |   id: 'foo/bar'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}

void test_init_collection_nested_id_1(
    test_init_collection _this)
{
    char *result, *input = "foo.bar.hello[10]";
    char *expect =
        "statements:\n"
        "|   StorageInitializer\n"
        "|   |   expr: Member\n"
        "|   |   |   expr: Member\n"
        "|   |   |   |   expr: Identifier\n"
        "|   |   |   |   |   id: 'foo'\n"
        "|   |   |   |   key: 'bar'\n"
        "|   |   |   key: 'hello'\n"
        "|   |   initializer: Initializer\n"
        "|   |   |   collection: 'true'\n"
        "|   |   |   values:\n"
        "|   |   |   |   InitializerValue\n"
        "|   |   |   |   |   value: Integer\n"
        "|   |   |   |   |   |   value: '10'\n"
        ;

    result = cortoscript_code_to_string(input);
    test_assert(result != NULL);
    test_assertstr(expect, result);
    free(result);
}
