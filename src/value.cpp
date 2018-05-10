
#include <corto/script/ast/ast.h>
#include "CortoAstVisitor.h"
#include "ast.h"

ast_Expression cortoscript_ast_from_value(
    corto_value *value)
{
    corto_type type = corto_value_typeof(value);
    ast_Expression result = NULL;

    if (!type) {
        return ast_Expression(ast_Null__create(NULL, NULL));
    }

    if (value->kind == CORTO_VALUE) {
        if (type->kind == CORTO_PRIMITIVE) {
            corto_primitive primitive_type = corto_primitive(type);
            switch (primitive_type->kind) {
            case CORTO_BOOLEAN: {
                bool val;
                if (corto_value_to_boolean(value, &val)) {
                    corto_throw(NULL);
                    goto error;
                }
                result = ast_Expression(ast_Boolean__create(NULL, NULL, val));
                break;
            }
            case CORTO_CHARACTER: {
                char val;
                if (corto_value_to_character(value, &val)) {
                    corto_throw(NULL);
                    goto error;
                }
                result = ast_Expression(ast_Character__create(NULL, NULL, val));
                break;
            }
            case CORTO_BITMASK:
            case CORTO_BINARY:
            case CORTO_UINTEGER: {
                uint64_t val;
                if (corto_value_to_uint(value, &val)) {
                    corto_throw(NULL);
                    goto error;
                }
                result = ast_Expression(ast_Integer__create(NULL, NULL, NULL, val));
                break;
            }
            case CORTO_ENUM:
            case CORTO_INTEGER: {
                int64_t val;
                if (corto_value_to_int(value, &val)) {
                    corto_throw(NULL);
                    goto error;
                }
                result = ast_Expression(ast_SignedInteger__create(NULL, NULL, NULL, val));
                break;
            }
            case CORTO_FLOAT: {
                double val;
                if (corto_value_to_float(value, &val)) {
                    corto_throw(NULL);
                    goto error;
                }
                result = ast_Expression(ast_FloatingPoint__create(NULL, NULL, NULL, val));
                break;
            }
            case CORTO_TEXT: {
                char* val = NULL;
                if (corto_value_to_string(value, &val)) {
                    corto_throw(NULL);
                    goto error;
                }
                result = ast_Expression(ast_String__create(NULL, NULL, val, '"'));
                break;
            }
            default:
                corto_throw(
                    "cannot convert value to expression: unknown primitive type");
                goto error;
            }
        }
    }

    return result;
error:
    return NULL;
}

static
int16_t cortoscript_ast_literal_to_value(
    ast_Literal literal,
    corto_value *out)
{
    if (corto_instanceof(ast_Boolean_o, literal)) {
        *out = corto_value_bool(ast_Boolean(literal)->value);
    } else
    if (corto_instanceof(ast_Character_o, literal)) {
        *out = corto_value_char(ast_Character(literal)->value);
    } else
    if (corto_instanceof(ast_Integer_o, literal)) {
        *out = corto_value_uint(ast_Integer(literal)->value);
    } else
    if (corto_instanceof(ast_SignedInteger_o, literal)) {
        *out = corto_value_int(ast_SignedInteger(literal)->value);
    } else
    if (corto_instanceof(ast_FloatingPoint_o, literal)) {
        *out = corto_value_float(ast_FloatingPoint(literal)->value);
    } else
    if (corto_instanceof(ast_String_o, literal)) {
        *out = corto_value_string(ast_String(literal)->value);
    } else
    if (corto_instanceof(ast_Null_o, literal)) {
        *out = corto_value_null();
    } else {
        corto_throw("unknown literal of type '%s'",
            corto_fullpath(NULL, corto_typeof(literal)));
        goto error;
    }

    if (corto_instanceof(ast_Number_o, literal)) {
        corto_value_unit(out, ast_Number(literal)->unit);
    }

    return 0;
error:
    return -1;
}

static
int16_t cortoscript_ast_storage_to_value(
    ast_Storage storage,
    corto_value *out)
{
    corto_type type = safe_ast_Expression_getType(storage);

    if (corto_instanceof(ast_Identifier_o, storage) ||
        corto_instanceof(ast_StorageInitializer_o, storage))
    {
        corto_object o = (corto_object)ast_Storage_getPtr(storage);
        if (!o) {
            corto_throw(
                "cannot convert unresolved object in storage of type '%s'",
                corto_fullpath(NULL, corto_typeof(storage)));
            goto error;
        }
        *out = corto_value_object(o, type);
    } else
    if (corto_instanceof(ast_Member_o, storage)) {
        corto_object o;
        void *ptr = NULL;
        ast_Storage base_member_expr = ast_Member(storage)->expr;
        while (corto_instanceof(ast_Member_o, base_member_expr)) {
            base_member_expr = ast_Member(base_member_expr)->expr;
        }

        if (!corto_instanceof(ast_Identifier_o, base_member_expr) ||
            !corto_instanceof(ast_StorageInitializer_o, base_member_expr))
        {
            corto_throw(
                "cannot resolve member expression: base is not an object");
            goto error;
        }

        /* Get base object */
        o = (corto_object)ast_Storage_getPtr(base_member_expr);
        if (!o) {
            corto_throw(
                "cannot convert unresolved object in storage of type '%s'",
                corto_fullpath(NULL, corto_typeof(storage)));
            goto error;
        }

        if (!ast_Member(storage)->member) {
            corto_throw(
                "cannot convert unresolved member expression of type %s",
                corto_fullpath(NULL, corto_typeof(storage)));
            goto error;
        }

        /* Get pointer to member value */
        ptr = (void*)ast_Storage_getPtr(storage);
        if (!ptr) {
            corto_throw(
                "cannot convert unresolved member in storage of type '%s'",
                corto_fullpath(NULL, corto_typeof(storage)));
            goto error;
        }

        *out = corto_value_member(o, ast_Member(storage)->member, ptr);
    }

    return 0;
error:
    return -1;
}

static
int16_t cortoscript_ast_expr_to_value(
    ast_Expression expr,
    corto_value *out)
{
    if (corto_instanceof(ast_Literal_o, expr)) {
        if (cortoscript_ast_literal_to_value(ast_Literal(expr), out)) {
            goto error;
        }
    } else if (corto_instanceof(ast_Storage_o, expr)) {
        if (cortoscript_ast_storage_to_value(ast_Storage(expr), out)) {
            goto error;
        }
    } else {
        corto_throw("cannot convert expression of type '%s' to value",
            corto_fullpath(NULL, corto_typeof(expr)));
        goto error;
    }

    return 0;
error:
    return -1;
}

int16_t cortoscript_ast_to_value(
    ast_Node root,
    corto_value *out)
{
    ast_Expression expr = NULL;

    if (corto_instanceof(ast_Expression_o, root)) {
        expr = ast_Expression(root);
    } else if (corto_instanceof(ast_Scope_o, root)) {
        ast_Node last_node = ast_Node(
            corto_ll_last(ast_Scope(root)->statements));

        if (corto_instanceof(ast_Expression_o, last_node)) {
            expr = ast_Expression(last_node);
        } else {
            corto_throw("last statement is not an expression");
            goto error;
        }
    } else {
        corto_throw("node does not contain a valid expression");
        goto error;
    }

    if (expr) {
        if (cortoscript_ast_expr_to_value(expr, out)) {
            goto error;
        }
    }

    return 0;
error:
    return -1;
}
