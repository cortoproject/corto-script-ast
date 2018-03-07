/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>

ast_Storage ast_Storage_fromAst(
    ast_Id identifier,
    ast_Context ctx)
{
    ast_Storage result = NULL;
    corto_object anonymousType = NULL;
    ast_StaticInitializerHelper helper = NULL;

    corto_object type = corto_resolve(ctx->scope, identifier->id);
    if (!type) {
        corto_throw("unresolved identifier '%s'", identifier->id);
        goto error;
    }

    if (!corto_instanceof(corto_type_o, type)) {
        corto_throw("'%s' is not a type", identifier->id);
        goto error;
    }

    /* If initializer is set, this is an anonymous type */
    if (identifier->initializer) {
        anonymousType = corto_declare(NULL, NULL, corto_type(type));
        if (!anonymousType) {
            goto error_declare;
        }

        helper = (ast_StaticInitializerHelper)corto_declare(NULL, NULL, ast_StaticInitializerHelper_o);
        if (!helper) {
            goto error_StaticInitializerDeclare;
        }

        corto_ll_append(
          ast_InitializerHelper(helper)->expressions,
          corto_create(NULL, NULL, anonymousType));

        if (corto_define(helper)) {
            goto error_define;
        }

        if (safe_ast_Initializer_populateHelper(identifier->initializer, helper))
        {
            goto error_populateHelper;
        }

        if (ast_InitializerHelper_define_object(helper)) {
            goto error_InitializerHelper_define;
        }

        if (corto_delete(helper)) {
            helper = NULL;
            goto error_delete;
        }

        corto_release(type);
        type = anonymousType;
    }

    result = ast_Storage(ast_Object__create(NULL, NULL, type));
    safe_ast_Statement_setData(identifier, result);

    return result;
error_InitializerHelper_define:
error_populateHelper:
error_define:
    corto_delete(helper);
error_delete:
error_StaticInitializerDeclare:
    corto_delete(anonymousType);
error_declare:
    corto_release(type);
error:
    return NULL;
}
