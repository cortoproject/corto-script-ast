/* This is a managed file. Do not delete this comment. */

#include <corto.script.ast>

uintptr_t ast_Expression_getPtr_v(
    ast_Expression _this)
{
    return 0;
}

corto_type ast_Expression_getType(
    ast_Expression _this)
{
    return _this->type;
}

corto_type ast_Expression_getTypeForTarget(
    ast_Expression _this,
    corto_type target,
    ast_Expression target_expr)
{
    corto_type result = ast_Expression_getType(_this);

    if (!target && target_expr) {
        target = ast_Expression_getType(target_expr);
    }

    if (corto_instanceof(ast_Initializer_o, _this)) {
        result = target;
    } else {
        ut_try(corto_expr_typeof(
            result,
            target,
            ast_Expression_isReference(_this),
            target_expr ? ast_Expression_isReference(target_expr) : false,
            &result), NULL);
    }

    return result;
error:
    ut_raise();
    return NULL;
}

ast_Expression ast_Expression_fold_v(
    ast_Expression _this)
{
    /* If function is not overridden, there's nothing to fold & just return this
     * expression. */
    return _this;
}

void ast_Expression_setType_v(
    ast_Expression _this,
    corto_type type)
{
    /* Never set the type of a null literal */
    if (!corto_instanceof(ast_Null_o, _this)) {
        corto_set_ref(&_this->type, type);
    }
}

bool ast_Expression_isReference(
    ast_Expression _this)
{
    corto_value_kind kind = CORTO_POINTER;

    if (corto_instanceof(ast_Storage_o, _this)) {
        if (ast_Storage_get_object(ast_Storage(_this))) {
            kind = CORTO_OBJECT;
        }
    } else if (corto_instanceof(ast_Literal_o, _this)) {
        kind = CORTO_LITERAL;
    }

    bool result = false;

    ut_try(
      corto_expr_is_ref(kind, _this->ref_kind, _this->type, &result), NULL);

    return result;
error:
    ut_raise();
    return false;
}
