/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>

int16_t ast_Expression_serialize(
    ast_Expression _this,
    corto_type target,
    uintptr_t ptr)
{
    uintptr_t srcPtr = ast_Expression_getPtr(_this);
    corto_type srcType = safe_ast_Expression_getTypeForTarget(
        _this, target, NULL);

    /*corto_info("target type = %s [%p], source type = %s [%p]",
        corto_fullpath(NULL, target), ptr, corto_fullpath(NULL, srcType), srcPtr);*/

    corto_value
        src = corto_value_value((void*)srcPtr, srcType),
        dst = corto_value_value((void*)ptr, target);

    return corto_value_binaryOp(CORTO_ASSIGN, &dst, &src, NULL);
}

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

    if (!result) {
        if (corto_instanceof(ast_Null_o, _this)) {
            /* If this is a null-expression, type is derived from the target */
            if (target) {
                bool primitive_target = target->kind == CORTO_PRIMITIVE;
                if (target->reference ||
                   (target_expr && target_expr->is_reference))
                {
                    /* If target is a reference, interpret as type of target */
                    result = target;
                } else if (primitive_target) {
                    corto_primitiveKind kind = corto_primitive(target)->kind;
                    if (kind == CORTO_TEXT) {
                        /* If target is a string, interpret null as string */
                        result = corto_type(corto_string_o);
                    } else if (kind == CORTO_BOOLEAN) {
                        /* If target is a bool, interpret null as an object */
                        result = corto_type(corto_object_o);
                    } else {
                        /* Can't assign null to other kinds of primitives */
                        goto error;
                    }
                } else {
                    /* Can't assign null to other values */
                    goto error;
                }
            } else {
                /* This and target don't have a type. Don't know what to do */
                goto error;
            }
        } else if (corto_instanceof(ast_Initializer_o, _this)) {
            /* If expression is initializer, assume type of target */
            result = target;
        } else {
            /* Cannot derive type from target */
            goto error;
        }
    } else if ((target && (target->kind == CORTO_VOID) && target->reference)) {
        result = corto_object_o;
    }

    return result;
error:
    corto_throw("inconsistent usage of references");
    return NULL;
}
