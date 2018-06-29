/* _api.cpp
 *
 * API convenience functions for C-language.
 * This file contains generated code. Do not modify!
 */

#include <corto/script/ast/c/c.h>

static corto_dl _package;
corto_type _corto_script_ast_Binary_o;
#define corto_script_ast_Binary_o _corto_script_ast_Binary_o ? _corto_script_ast_Binary_o : (_corto_script_ast_Binary_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Binary_o"))

corto_type _corto_script_ast_Boolean_o;
#define corto_script_ast_Boolean_o _corto_script_ast_Boolean_o ? _corto_script_ast_Boolean_o : (_corto_script_ast_Boolean_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Boolean_o"))

corto_type _corto_script_ast_Cast_o;
#define corto_script_ast_Cast_o _corto_script_ast_Cast_o ? _corto_script_ast_Cast_o : (_corto_script_ast_Cast_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Cast_o"))

corto_type _corto_script_ast_Character_o;
#define corto_script_ast_Character_o _corto_script_ast_Character_o ? _corto_script_ast_Character_o : (_corto_script_ast_Character_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Character_o"))

corto_type _corto_script_ast_Declaration_o;
#define corto_script_ast_Declaration_o _corto_script_ast_Declaration_o ? _corto_script_ast_Declaration_o : (_corto_script_ast_Declaration_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Declaration_o"))

corto_type _corto_script_ast_DeclarationIdentifier_o;
#define corto_script_ast_DeclarationIdentifier_o _corto_script_ast_DeclarationIdentifier_o ? _corto_script_ast_DeclarationIdentifier_o : (_corto_script_ast_DeclarationIdentifier_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_DeclarationIdentifier_o"))

corto_type _corto_script_ast_Expression_o;
#define corto_script_ast_Expression_o _corto_script_ast_Expression_o ? _corto_script_ast_Expression_o : (_corto_script_ast_Expression_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Expression_o"))

corto_type _corto_script_ast_FloatingPoint_o;
#define corto_script_ast_FloatingPoint_o _corto_script_ast_FloatingPoint_o ? _corto_script_ast_FloatingPoint_o : (_corto_script_ast_FloatingPoint_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_FloatingPoint_o"))

corto_type _corto_script_ast_FunctionArgument_o;
#define corto_script_ast_FunctionArgument_o _corto_script_ast_FunctionArgument_o ? _corto_script_ast_FunctionArgument_o : (_corto_script_ast_FunctionArgument_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_FunctionArgument_o"))

corto_type _corto_script_ast_FunctionArgumentList_o;
#define corto_script_ast_FunctionArgumentList_o _corto_script_ast_FunctionArgumentList_o ? _corto_script_ast_FunctionArgumentList_o : (_corto_script_ast_FunctionArgumentList_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_FunctionArgumentList_o"))

corto_type _corto_script_ast_Identifier_o;
#define corto_script_ast_Identifier_o _corto_script_ast_Identifier_o ? _corto_script_ast_Identifier_o : (_corto_script_ast_Identifier_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Identifier_o"))

corto_type _corto_script_ast_Initializer_o;
#define corto_script_ast_Initializer_o _corto_script_ast_Initializer_o ? _corto_script_ast_Initializer_o : (_corto_script_ast_Initializer_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Initializer_o"))

corto_type _corto_script_ast_InitializerValue_o;
#define corto_script_ast_InitializerValue_o _corto_script_ast_InitializerValue_o ? _corto_script_ast_InitializerValue_o : (_corto_script_ast_InitializerValue_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_InitializerValue_o"))

corto_type _corto_script_ast_InitializerValueList_o;
#define corto_script_ast_InitializerValueList_o _corto_script_ast_InitializerValueList_o ? _corto_script_ast_InitializerValueList_o : (_corto_script_ast_InitializerValueList_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_InitializerValueList_o"))

corto_type _corto_script_ast_Integer_o;
#define corto_script_ast_Integer_o _corto_script_ast_Integer_o ? _corto_script_ast_Integer_o : (_corto_script_ast_Integer_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Integer_o"))

corto_type _corto_script_ast_Literal_o;
#define corto_script_ast_Literal_o _corto_script_ast_Literal_o ? _corto_script_ast_Literal_o : (_corto_script_ast_Literal_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Literal_o"))

corto_type _corto_script_ast_Member_o;
#define corto_script_ast_Member_o _corto_script_ast_Member_o ? _corto_script_ast_Member_o : (_corto_script_ast_Member_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Member_o"))

corto_type _corto_script_ast_Node_o;
#define corto_script_ast_Node_o _corto_script_ast_Node_o ? _corto_script_ast_Node_o : (_corto_script_ast_Node_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Node_o"))

corto_type _corto_script_ast_Null_o;
#define corto_script_ast_Null_o _corto_script_ast_Null_o ? _corto_script_ast_Null_o : (_corto_script_ast_Null_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Null_o"))

corto_type _corto_script_ast_Number_o;
#define corto_script_ast_Number_o _corto_script_ast_Number_o ? _corto_script_ast_Number_o : (_corto_script_ast_Number_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Number_o"))

corto_type _corto_script_ast_Scope_o;
#define corto_script_ast_Scope_o _corto_script_ast_Scope_o ? _corto_script_ast_Scope_o : (_corto_script_ast_Scope_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Scope_o"))

corto_type _corto_script_ast_SignedInteger_o;
#define corto_script_ast_SignedInteger_o _corto_script_ast_SignedInteger_o ? _corto_script_ast_SignedInteger_o : (_corto_script_ast_SignedInteger_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_SignedInteger_o"))

corto_type _corto_script_ast_Statement_o;
#define corto_script_ast_Statement_o _corto_script_ast_Statement_o ? _corto_script_ast_Statement_o : (_corto_script_ast_Statement_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Statement_o"))

corto_type _corto_script_ast_StatementList_o;
#define corto_script_ast_StatementList_o _corto_script_ast_StatementList_o ? _corto_script_ast_StatementList_o : (_corto_script_ast_StatementList_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_StatementList_o"))

corto_type _corto_script_ast_Storage_o;
#define corto_script_ast_Storage_o _corto_script_ast_Storage_o ? _corto_script_ast_Storage_o : (_corto_script_ast_Storage_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Storage_o"))

corto_type _corto_script_ast_StorageList_o;
#define corto_script_ast_StorageList_o _corto_script_ast_StorageList_o ? _corto_script_ast_StorageList_o : (_corto_script_ast_StorageList_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_StorageList_o"))

corto_type _corto_script_ast_StorageInitializer_o;
#define corto_script_ast_StorageInitializer_o _corto_script_ast_StorageInitializer_o ? _corto_script_ast_StorageInitializer_o : (_corto_script_ast_StorageInitializer_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_StorageInitializer_o"))

corto_type _corto_script_ast_String_o;
#define corto_script_ast_String_o _corto_script_ast_String_o ? _corto_script_ast_String_o : (_corto_script_ast_String_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_String_o"))

corto_type _corto_script_ast_Ternary_o;
#define corto_script_ast_Ternary_o _corto_script_ast_Ternary_o ? _corto_script_ast_Ternary_o : (_corto_script_ast_Ternary_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Ternary_o"))

corto_type _corto_script_ast_Unary_o;
#define corto_script_ast_Unary_o _corto_script_ast_Unary_o ? _corto_script_ast_Unary_o : (_corto_script_ast_Unary_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Unary_o"))

corto_type _corto_script_ast_Use_o;
#define corto_script_ast_Use_o _corto_script_ast_Use_o ? _corto_script_ast_Use_o : (_corto_script_ast_Use_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Use_o"))

corto_type _corto_script_ast_Visitor_o;
#define corto_script_ast_Visitor_o _corto_script_ast_Visitor_o ? _corto_script_ast_Visitor_o : (_corto_script_ast_Visitor_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_script_ast_Visitor_o"))

corto_type _corto_objectMap_o;
#define corto_objectMap_o _corto_objectMap_o ? _corto_objectMap_o : (_corto_objectMap_o = *(corto_type*)corto_load_sym("/corto/script/ast", &_package, "corto_objectMap_o"))

corto_script_ast_Binary _corto_script_ast_Binary__create(corto_object _parent, const char *_id, corto_script_ast_Expression left, corto_script_ast_Expression right, corto_operatorKind _operator) {
    corto_script_ast_Binary _this;
    _this = (corto_script_ast_Binary)corto_declare(_parent, _id, corto_script_ast_Binary_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        corto_set_ref(&((corto_script_ast_Binary)_this)->left, left);
        corto_set_ref(&((corto_script_ast_Binary)_this)->right, right);
        ((corto_script_ast_Binary)_this)->_operator = _operator;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Binary__update(corto_script_ast_Binary _this, corto_script_ast_Expression left, corto_script_ast_Expression right, corto_operatorKind _operator) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_set_ref(&((corto_script_ast_Binary)((corto_script_ast_Binary)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Binary_o)->size)))->left, left);
            corto_set_ref(&((corto_script_ast_Binary)((corto_script_ast_Binary)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Binary_o)->size)))->right, right);
            ((corto_script_ast_Binary)((corto_script_ast_Binary)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Binary_o)->size)))->_operator = _operator;
        } else {
            corto_set_ref(&((corto_script_ast_Binary)_this)->left, left);
            corto_set_ref(&((corto_script_ast_Binary)_this)->right, right);
            ((corto_script_ast_Binary)_this)->_operator = _operator;
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Binary _corto_script_ast_Binary__assign(corto_script_ast_Binary _this, corto_script_ast_Expression left, corto_script_ast_Expression right, corto_operatorKind _operator) {
    CORTO_UNUSED(_this);
    corto_set_ref(&((corto_script_ast_Binary)_this)->left, left);
    corto_set_ref(&((corto_script_ast_Binary)_this)->right, right);
    ((corto_script_ast_Binary)_this)->_operator = _operator;
    return _this;
}

corto_script_ast_Boolean _corto_script_ast_Boolean__create(corto_object _parent, const char *_id, bool value) {
    corto_script_ast_Boolean _this;
    _this = (corto_script_ast_Boolean)corto_declare(_parent, _id, corto_script_ast_Boolean_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        ((corto_script_ast_Boolean)_this)->value = value;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Boolean__update(corto_script_ast_Boolean _this, bool value) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            ((corto_script_ast_Boolean)((corto_script_ast_Boolean)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Boolean_o)->size)))->value = value;
        } else {
            ((corto_script_ast_Boolean)_this)->value = value;
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Boolean _corto_script_ast_Boolean__assign(corto_script_ast_Boolean _this, bool value) {
    CORTO_UNUSED(_this);
    ((corto_script_ast_Boolean)_this)->value = value;
    return _this;
}

corto_script_ast_Cast _corto_script_ast_Cast__create(corto_object _parent, const char *_id, corto_script_ast_Storage type, corto_script_ast_Expression expr) {
    corto_script_ast_Cast _this;
    _this = (corto_script_ast_Cast)corto_declare(_parent, _id, corto_script_ast_Cast_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        corto_set_ref(&((corto_script_ast_Cast)_this)->type, type);
        corto_set_ref(&((corto_script_ast_Cast)_this)->expr, expr);
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Cast__update(corto_script_ast_Cast _this, corto_script_ast_Storage type, corto_script_ast_Expression expr) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_set_ref(&((corto_script_ast_Cast)((corto_script_ast_Cast)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Cast_o)->size)))->type, type);
            corto_set_ref(&((corto_script_ast_Cast)((corto_script_ast_Cast)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Cast_o)->size)))->expr, expr);
        } else {
            corto_set_ref(&((corto_script_ast_Cast)_this)->type, type);
            corto_set_ref(&((corto_script_ast_Cast)_this)->expr, expr);
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Cast _corto_script_ast_Cast__assign(corto_script_ast_Cast _this, corto_script_ast_Storage type, corto_script_ast_Expression expr) {
    CORTO_UNUSED(_this);
    corto_set_ref(&((corto_script_ast_Cast)_this)->type, type);
    corto_set_ref(&((corto_script_ast_Cast)_this)->expr, expr);
    return _this;
}

corto_script_ast_Character _corto_script_ast_Character__create(corto_object _parent, const char *_id, char value) {
    corto_script_ast_Character _this;
    _this = (corto_script_ast_Character)corto_declare(_parent, _id, corto_script_ast_Character_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        ((corto_script_ast_Character)_this)->value = value;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Character__update(corto_script_ast_Character _this, char value) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            ((corto_script_ast_Character)((corto_script_ast_Character)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Character_o)->size)))->value = value;
        } else {
            ((corto_script_ast_Character)_this)->value = value;
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Character _corto_script_ast_Character__assign(corto_script_ast_Character _this, char value) {
    CORTO_UNUSED(_this);
    ((corto_script_ast_Character)_this)->value = value;
    return _this;
}

corto_script_ast_Declaration _corto_script_ast_Declaration__create(corto_object _parent, const char *_id, corto_script_ast_Storage type, corto_script_ast_DeclarationIdentifier id, bool set_scope, bool is_var, corto_script_ast_Initializer initializer, corto_script_ast_Scope scope) {
    corto_script_ast_Declaration _this;
    _this = (corto_script_ast_Declaration)corto_declare(_parent, _id, corto_script_ast_Declaration_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        corto_set_ref(&((corto_script_ast_Declaration)_this)->type, type);
        corto_set_ref(&((corto_script_ast_Declaration)_this)->id, id);
        ((corto_script_ast_Declaration)_this)->set_scope = set_scope;
        ((corto_script_ast_Declaration)_this)->is_var = is_var;
        corto_set_ref(&((corto_script_ast_Declaration)_this)->initializer, initializer);
        corto_set_ref(&((corto_script_ast_Declaration)_this)->scope, scope);
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Declaration__update(corto_script_ast_Declaration _this, corto_script_ast_Storage type, corto_script_ast_DeclarationIdentifier id, bool set_scope, bool is_var, corto_script_ast_Initializer initializer, corto_script_ast_Scope scope) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_set_ref(&((corto_script_ast_Declaration)((corto_script_ast_Declaration)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Declaration_o)->size)))->type, type);
            corto_set_ref(&((corto_script_ast_Declaration)((corto_script_ast_Declaration)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Declaration_o)->size)))->id, id);
            ((corto_script_ast_Declaration)((corto_script_ast_Declaration)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Declaration_o)->size)))->set_scope = set_scope;
            ((corto_script_ast_Declaration)((corto_script_ast_Declaration)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Declaration_o)->size)))->is_var = is_var;
            corto_set_ref(&((corto_script_ast_Declaration)((corto_script_ast_Declaration)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Declaration_o)->size)))->initializer, initializer);
            corto_set_ref(&((corto_script_ast_Declaration)((corto_script_ast_Declaration)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Declaration_o)->size)))->scope, scope);
        } else {
            corto_set_ref(&((corto_script_ast_Declaration)_this)->type, type);
            corto_set_ref(&((corto_script_ast_Declaration)_this)->id, id);
            ((corto_script_ast_Declaration)_this)->set_scope = set_scope;
            ((corto_script_ast_Declaration)_this)->is_var = is_var;
            corto_set_ref(&((corto_script_ast_Declaration)_this)->initializer, initializer);
            corto_set_ref(&((corto_script_ast_Declaration)_this)->scope, scope);
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Declaration _corto_script_ast_Declaration__assign(corto_script_ast_Declaration _this, corto_script_ast_Storage type, corto_script_ast_DeclarationIdentifier id, bool set_scope, bool is_var, corto_script_ast_Initializer initializer, corto_script_ast_Scope scope) {
    CORTO_UNUSED(_this);
    corto_set_ref(&((corto_script_ast_Declaration)_this)->type, type);
    corto_set_ref(&((corto_script_ast_Declaration)_this)->id, id);
    ((corto_script_ast_Declaration)_this)->set_scope = set_scope;
    ((corto_script_ast_Declaration)_this)->is_var = is_var;
    corto_set_ref(&((corto_script_ast_Declaration)_this)->initializer, initializer);
    corto_set_ref(&((corto_script_ast_Declaration)_this)->scope, scope);
    return _this;
}

corto_script_ast_DeclarationIdentifier _corto_script_ast_DeclarationIdentifier__create(corto_object _parent, const char *_id, corto_script_ast_StorageList ids, corto_script_ast_FunctionArgumentList arguments) {
    corto_script_ast_DeclarationIdentifier _this;
    _this = (corto_script_ast_DeclarationIdentifier)corto_declare(_parent, _id, corto_script_ast_DeclarationIdentifier_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        if (ids) {
            corto_ptr_copy(&((corto_script_ast_DeclarationIdentifier)_this)->ids, corto_script_ast_StorageList_o, &ids);
        }
        if (arguments) {
            corto_ptr_copy(&((corto_script_ast_DeclarationIdentifier)_this)->arguments, corto_script_ast_FunctionArgumentList_o, &arguments);
        }
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_DeclarationIdentifier__update(corto_script_ast_DeclarationIdentifier _this, corto_script_ast_StorageList ids, corto_script_ast_FunctionArgumentList arguments) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            if (ids) {
                corto_ptr_copy(&((corto_script_ast_DeclarationIdentifier)((corto_script_ast_DeclarationIdentifier)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_DeclarationIdentifier_o)->size)))->ids, corto_script_ast_StorageList_o, &ids);
            }
            if (arguments) {
                corto_ptr_copy(&((corto_script_ast_DeclarationIdentifier)((corto_script_ast_DeclarationIdentifier)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_DeclarationIdentifier_o)->size)))->arguments, corto_script_ast_FunctionArgumentList_o, &arguments);
            }
        } else {
            if (ids) {
                corto_ptr_copy(&((corto_script_ast_DeclarationIdentifier)_this)->ids, corto_script_ast_StorageList_o, &ids);
            }
            if (arguments) {
                corto_ptr_copy(&((corto_script_ast_DeclarationIdentifier)_this)->arguments, corto_script_ast_FunctionArgumentList_o, &arguments);
            }
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_DeclarationIdentifier _corto_script_ast_DeclarationIdentifier__assign(corto_script_ast_DeclarationIdentifier _this, corto_script_ast_StorageList ids, corto_script_ast_FunctionArgumentList arguments) {
    CORTO_UNUSED(_this);
    if (ids) {
        corto_ptr_copy(&((corto_script_ast_DeclarationIdentifier)_this)->ids, corto_script_ast_StorageList_o, &ids);
    }
    if (arguments) {
        corto_ptr_copy(&((corto_script_ast_DeclarationIdentifier)_this)->arguments, corto_script_ast_FunctionArgumentList_o, &arguments);
    }
    return _this;
}

corto_script_ast_Expression _corto_script_ast_Expression__create(corto_object _parent, const char *_id) {
    corto_script_ast_Expression _this;
    _this = (corto_script_ast_Expression)corto_declare(_parent, _id, corto_script_ast_Expression_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Expression__update(corto_script_ast_Expression _this) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
        } else {
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Expression _corto_script_ast_Expression__assign(corto_script_ast_Expression _this) {
    CORTO_UNUSED(_this);
    return _this;
}

corto_script_ast_FloatingPoint _corto_script_ast_FloatingPoint__create(corto_object _parent, const char *_id, const char * unit, double value) {
    corto_script_ast_FloatingPoint _this;
    _this = (corto_script_ast_FloatingPoint)corto_declare(_parent, _id, corto_script_ast_FloatingPoint_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        corto_set_str(&((corto_script_ast_Number)_this)->unit, unit);
        ((corto_script_ast_FloatingPoint)_this)->value = value;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_FloatingPoint__update(corto_script_ast_FloatingPoint _this, const char * unit, double value) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_set_str(&((corto_script_ast_Number)((corto_script_ast_FloatingPoint)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_FloatingPoint_o)->size)))->unit, unit);
            ((corto_script_ast_FloatingPoint)((corto_script_ast_FloatingPoint)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_FloatingPoint_o)->size)))->value = value;
        } else {
            corto_set_str(&((corto_script_ast_Number)_this)->unit, unit);
            ((corto_script_ast_FloatingPoint)_this)->value = value;
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_FloatingPoint _corto_script_ast_FloatingPoint__assign(corto_script_ast_FloatingPoint _this, const char * unit, double value) {
    CORTO_UNUSED(_this);
    corto_set_str(&((corto_script_ast_Number)_this)->unit, unit);
    ((corto_script_ast_FloatingPoint)_this)->value = value;
    return _this;
}

corto_script_ast_FunctionArgument _corto_script_ast_FunctionArgument__create(corto_object _parent, const char *_id, const char * name, corto_script_ast_Storage type, corto_inout inout, bool is_reference) {
    corto_script_ast_FunctionArgument _this;
    _this = (corto_script_ast_FunctionArgument)corto_declare(_parent, _id, corto_script_ast_FunctionArgument_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        corto_set_str(&((corto_script_ast_FunctionArgument)_this)->name, name);
        corto_set_ref(&((corto_script_ast_FunctionArgument)_this)->type, type);
        ((corto_script_ast_FunctionArgument)_this)->inout = inout;
        ((corto_script_ast_FunctionArgument)_this)->is_reference = is_reference;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_FunctionArgument__update(corto_script_ast_FunctionArgument _this, const char * name, corto_script_ast_Storage type, corto_inout inout, bool is_reference) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_set_str(&((corto_script_ast_FunctionArgument)((corto_script_ast_FunctionArgument)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_FunctionArgument_o)->size)))->name, name);
            corto_set_ref(&((corto_script_ast_FunctionArgument)((corto_script_ast_FunctionArgument)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_FunctionArgument_o)->size)))->type, type);
            ((corto_script_ast_FunctionArgument)((corto_script_ast_FunctionArgument)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_FunctionArgument_o)->size)))->inout = inout;
            ((corto_script_ast_FunctionArgument)((corto_script_ast_FunctionArgument)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_FunctionArgument_o)->size)))->is_reference = is_reference;
        } else {
            corto_set_str(&((corto_script_ast_FunctionArgument)_this)->name, name);
            corto_set_ref(&((corto_script_ast_FunctionArgument)_this)->type, type);
            ((corto_script_ast_FunctionArgument)_this)->inout = inout;
            ((corto_script_ast_FunctionArgument)_this)->is_reference = is_reference;
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_FunctionArgument _corto_script_ast_FunctionArgument__assign(corto_script_ast_FunctionArgument _this, const char * name, corto_script_ast_Storage type, corto_inout inout, bool is_reference) {
    CORTO_UNUSED(_this);
    corto_set_str(&((corto_script_ast_FunctionArgument)_this)->name, name);
    corto_set_ref(&((corto_script_ast_FunctionArgument)_this)->type, type);
    ((corto_script_ast_FunctionArgument)_this)->inout = inout;
    ((corto_script_ast_FunctionArgument)_this)->is_reference = is_reference;
    return _this;
}

corto_script_ast_Identifier _corto_script_ast_Identifier__create(corto_object _parent, const char *_id, const char * id) {
    corto_script_ast_Identifier _this;
    _this = (corto_script_ast_Identifier)corto_declare(_parent, _id, corto_script_ast_Identifier_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        corto_set_str(&((corto_script_ast_Identifier)_this)->id, id);
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Identifier__update(corto_script_ast_Identifier _this, const char * id) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_set_str(&((corto_script_ast_Identifier)((corto_script_ast_Identifier)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Identifier_o)->size)))->id, id);
        } else {
            corto_set_str(&((corto_script_ast_Identifier)_this)->id, id);
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Identifier _corto_script_ast_Identifier__assign(corto_script_ast_Identifier _this, const char * id) {
    CORTO_UNUSED(_this);
    corto_set_str(&((corto_script_ast_Identifier)_this)->id, id);
    return _this;
}

corto_script_ast_Initializer _corto_script_ast_Initializer__create(corto_object _parent, const char *_id, bool collection, corto_script_ast_InitializerValueList values) {
    corto_script_ast_Initializer _this;
    _this = (corto_script_ast_Initializer)corto_declare(_parent, _id, corto_script_ast_Initializer_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        ((corto_script_ast_Initializer)_this)->collection = collection;
        if (values) {
            corto_ptr_copy(&((corto_script_ast_Initializer)_this)->values, corto_script_ast_InitializerValueList_o, &values);
        }
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Initializer__update(corto_script_ast_Initializer _this, bool collection, corto_script_ast_InitializerValueList values) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            ((corto_script_ast_Initializer)((corto_script_ast_Initializer)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Initializer_o)->size)))->collection = collection;
            if (values) {
                corto_ptr_copy(&((corto_script_ast_Initializer)((corto_script_ast_Initializer)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Initializer_o)->size)))->values, corto_script_ast_InitializerValueList_o, &values);
            }
        } else {
            ((corto_script_ast_Initializer)_this)->collection = collection;
            if (values) {
                corto_ptr_copy(&((corto_script_ast_Initializer)_this)->values, corto_script_ast_InitializerValueList_o, &values);
            }
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Initializer _corto_script_ast_Initializer__assign(corto_script_ast_Initializer _this, bool collection, corto_script_ast_InitializerValueList values) {
    CORTO_UNUSED(_this);
    ((corto_script_ast_Initializer)_this)->collection = collection;
    if (values) {
        corto_ptr_copy(&((corto_script_ast_Initializer)_this)->values, corto_script_ast_InitializerValueList_o, &values);
    }
    return _this;
}

corto_script_ast_InitializerValue _corto_script_ast_InitializerValue__create(corto_object _parent, const char *_id, const char * key, corto_script_ast_Expression value) {
    corto_script_ast_InitializerValue _this;
    _this = (corto_script_ast_InitializerValue)corto_declare(_parent, _id, corto_script_ast_InitializerValue_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        corto_set_str(&((corto_script_ast_InitializerValue)_this)->key, key);
        corto_set_ref(&((corto_script_ast_InitializerValue)_this)->value, value);
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_InitializerValue__update(corto_script_ast_InitializerValue _this, const char * key, corto_script_ast_Expression value) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_set_str(&((corto_script_ast_InitializerValue)((corto_script_ast_InitializerValue)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_InitializerValue_o)->size)))->key, key);
            corto_set_ref(&((corto_script_ast_InitializerValue)((corto_script_ast_InitializerValue)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_InitializerValue_o)->size)))->value, value);
        } else {
            corto_set_str(&((corto_script_ast_InitializerValue)_this)->key, key);
            corto_set_ref(&((corto_script_ast_InitializerValue)_this)->value, value);
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_InitializerValue _corto_script_ast_InitializerValue__assign(corto_script_ast_InitializerValue _this, const char * key, corto_script_ast_Expression value) {
    CORTO_UNUSED(_this);
    corto_set_str(&((corto_script_ast_InitializerValue)_this)->key, key);
    corto_set_ref(&((corto_script_ast_InitializerValue)_this)->value, value);
    return _this;
}

corto_script_ast_Integer _corto_script_ast_Integer__create(corto_object _parent, const char *_id, const char * unit, uint64_t value) {
    corto_script_ast_Integer _this;
    _this = (corto_script_ast_Integer)corto_declare(_parent, _id, corto_script_ast_Integer_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        corto_set_str(&((corto_script_ast_Number)_this)->unit, unit);
        ((corto_script_ast_Integer)_this)->value = value;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Integer__update(corto_script_ast_Integer _this, const char * unit, uint64_t value) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_set_str(&((corto_script_ast_Number)((corto_script_ast_Integer)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Integer_o)->size)))->unit, unit);
            ((corto_script_ast_Integer)((corto_script_ast_Integer)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Integer_o)->size)))->value = value;
        } else {
            corto_set_str(&((corto_script_ast_Number)_this)->unit, unit);
            ((corto_script_ast_Integer)_this)->value = value;
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Integer _corto_script_ast_Integer__assign(corto_script_ast_Integer _this, const char * unit, uint64_t value) {
    CORTO_UNUSED(_this);
    corto_set_str(&((corto_script_ast_Number)_this)->unit, unit);
    ((corto_script_ast_Integer)_this)->value = value;
    return _this;
}

corto_script_ast_Literal _corto_script_ast_Literal__create(corto_object _parent, const char *_id) {
    corto_script_ast_Literal _this;
    _this = (corto_script_ast_Literal)corto_declare(_parent, _id, corto_script_ast_Literal_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Literal__update(corto_script_ast_Literal _this) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
        } else {
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Literal _corto_script_ast_Literal__assign(corto_script_ast_Literal _this) {
    CORTO_UNUSED(_this);
    return _this;
}

corto_script_ast_Member _corto_script_ast_Member__create(corto_object _parent, const char *_id, corto_script_ast_Storage expr, const char * key) {
    corto_script_ast_Member _this;
    _this = (corto_script_ast_Member)corto_declare(_parent, _id, corto_script_ast_Member_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        corto_set_ref(&((corto_script_ast_Member)_this)->expr, expr);
        corto_set_str(&((corto_script_ast_Member)_this)->key, key);
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Member__update(corto_script_ast_Member _this, corto_script_ast_Storage expr, const char * key) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_set_ref(&((corto_script_ast_Member)((corto_script_ast_Member)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Member_o)->size)))->expr, expr);
            corto_set_str(&((corto_script_ast_Member)((corto_script_ast_Member)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Member_o)->size)))->key, key);
        } else {
            corto_set_ref(&((corto_script_ast_Member)_this)->expr, expr);
            corto_set_str(&((corto_script_ast_Member)_this)->key, key);
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Member _corto_script_ast_Member__assign(corto_script_ast_Member _this, corto_script_ast_Storage expr, const char * key) {
    CORTO_UNUSED(_this);
    corto_set_ref(&((corto_script_ast_Member)_this)->expr, expr);
    corto_set_str(&((corto_script_ast_Member)_this)->key, key);
    return _this;
}

corto_script_ast_Node _corto_script_ast_Node__create(corto_object _parent, const char *_id) {
    corto_script_ast_Node _this;
    _this = (corto_script_ast_Node)corto_declare(_parent, _id, corto_script_ast_Node_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Node__update(corto_script_ast_Node _this) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
        } else {
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Node _corto_script_ast_Node__assign(corto_script_ast_Node _this) {
    CORTO_UNUSED(_this);
    return _this;
}

corto_script_ast_Null _corto_script_ast_Null__create(corto_object _parent, const char *_id) {
    corto_script_ast_Null _this;
    _this = (corto_script_ast_Null)corto_declare(_parent, _id, corto_script_ast_Null_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Null__update(corto_script_ast_Null _this) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
        } else {
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Null _corto_script_ast_Null__assign(corto_script_ast_Null _this) {
    CORTO_UNUSED(_this);
    return _this;
}

corto_script_ast_Number _corto_script_ast_Number__create(corto_object _parent, const char *_id, const char * unit) {
    corto_script_ast_Number _this;
    _this = (corto_script_ast_Number)corto_declare(_parent, _id, corto_script_ast_Number_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        corto_set_str(&((corto_script_ast_Number)_this)->unit, unit);
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Number__update(corto_script_ast_Number _this, const char * unit) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_set_str(&((corto_script_ast_Number)((corto_script_ast_Number)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Number_o)->size)))->unit, unit);
        } else {
            corto_set_str(&((corto_script_ast_Number)_this)->unit, unit);
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Number _corto_script_ast_Number__assign(corto_script_ast_Number _this, const char * unit) {
    CORTO_UNUSED(_this);
    corto_set_str(&((corto_script_ast_Number)_this)->unit, unit);
    return _this;
}

corto_script_ast_Scope _corto_script_ast_Scope__create(corto_object _parent, const char *_id, corto_script_ast_Scope parent, corto_script_ast_Storage default_type) {
    corto_script_ast_Scope _this;
    _this = (corto_script_ast_Scope)corto_declare(_parent, _id, corto_script_ast_Scope_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        corto_set_ref(&((corto_script_ast_Scope)_this)->parent, parent);
        corto_set_ref(&((corto_script_ast_Scope)_this)->default_type, default_type);
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Scope__update(corto_script_ast_Scope _this, corto_script_ast_Scope parent, corto_script_ast_Storage default_type) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_set_ref(&((corto_script_ast_Scope)((corto_script_ast_Scope)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Scope_o)->size)))->parent, parent);
            corto_set_ref(&((corto_script_ast_Scope)((corto_script_ast_Scope)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Scope_o)->size)))->default_type, default_type);
        } else {
            corto_set_ref(&((corto_script_ast_Scope)_this)->parent, parent);
            corto_set_ref(&((corto_script_ast_Scope)_this)->default_type, default_type);
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Scope _corto_script_ast_Scope__assign(corto_script_ast_Scope _this, corto_script_ast_Scope parent, corto_script_ast_Storage default_type) {
    CORTO_UNUSED(_this);
    corto_set_ref(&((corto_script_ast_Scope)_this)->parent, parent);
    corto_set_ref(&((corto_script_ast_Scope)_this)->default_type, default_type);
    return _this;
}

corto_script_ast_SignedInteger _corto_script_ast_SignedInteger__create(corto_object _parent, const char *_id, const char * unit, int64_t value) {
    corto_script_ast_SignedInteger _this;
    _this = (corto_script_ast_SignedInteger)corto_declare(_parent, _id, corto_script_ast_SignedInteger_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        corto_set_str(&((corto_script_ast_Number)_this)->unit, unit);
        ((corto_script_ast_SignedInteger)_this)->value = value;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_SignedInteger__update(corto_script_ast_SignedInteger _this, const char * unit, int64_t value) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_set_str(&((corto_script_ast_Number)((corto_script_ast_SignedInteger)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_SignedInteger_o)->size)))->unit, unit);
            ((corto_script_ast_SignedInteger)((corto_script_ast_SignedInteger)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_SignedInteger_o)->size)))->value = value;
        } else {
            corto_set_str(&((corto_script_ast_Number)_this)->unit, unit);
            ((corto_script_ast_SignedInteger)_this)->value = value;
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_SignedInteger _corto_script_ast_SignedInteger__assign(corto_script_ast_SignedInteger _this, const char * unit, int64_t value) {
    CORTO_UNUSED(_this);
    corto_set_str(&((corto_script_ast_Number)_this)->unit, unit);
    ((corto_script_ast_SignedInteger)_this)->value = value;
    return _this;
}

corto_script_ast_Statement _corto_script_ast_Statement__create(corto_object _parent, const char *_id) {
    corto_script_ast_Statement _this;
    _this = (corto_script_ast_Statement)corto_declare(_parent, _id, corto_script_ast_Statement_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Statement__update(corto_script_ast_Statement _this) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
        } else {
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Statement _corto_script_ast_Statement__assign(corto_script_ast_Statement _this) {
    CORTO_UNUSED(_this);
    return _this;
}

corto_script_ast_Storage _corto_script_ast_Storage__create(corto_object _parent, const char *_id) {
    corto_script_ast_Storage _this;
    _this = (corto_script_ast_Storage)corto_declare(_parent, _id, corto_script_ast_Storage_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Storage__update(corto_script_ast_Storage _this) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
        } else {
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Storage _corto_script_ast_Storage__assign(corto_script_ast_Storage _this) {
    CORTO_UNUSED(_this);
    return _this;
}

corto_script_ast_StorageInitializer _corto_script_ast_StorageInitializer__create(corto_object _parent, const char *_id, corto_script_ast_Storage expr, corto_script_ast_Initializer initializer) {
    corto_script_ast_StorageInitializer _this;
    _this = (corto_script_ast_StorageInitializer)corto_declare(_parent, _id, corto_script_ast_StorageInitializer_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        corto_set_ref(&((corto_script_ast_StorageInitializer)_this)->expr, expr);
        corto_set_ref(&((corto_script_ast_StorageInitializer)_this)->initializer, initializer);
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_StorageInitializer__update(corto_script_ast_StorageInitializer _this, corto_script_ast_Storage expr, corto_script_ast_Initializer initializer) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_set_ref(&((corto_script_ast_StorageInitializer)((corto_script_ast_StorageInitializer)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_StorageInitializer_o)->size)))->expr, expr);
            corto_set_ref(&((corto_script_ast_StorageInitializer)((corto_script_ast_StorageInitializer)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_StorageInitializer_o)->size)))->initializer, initializer);
        } else {
            corto_set_ref(&((corto_script_ast_StorageInitializer)_this)->expr, expr);
            corto_set_ref(&((corto_script_ast_StorageInitializer)_this)->initializer, initializer);
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_StorageInitializer _corto_script_ast_StorageInitializer__assign(corto_script_ast_StorageInitializer _this, corto_script_ast_Storage expr, corto_script_ast_Initializer initializer) {
    CORTO_UNUSED(_this);
    corto_set_ref(&((corto_script_ast_StorageInitializer)_this)->expr, expr);
    corto_set_ref(&((corto_script_ast_StorageInitializer)_this)->initializer, initializer);
    return _this;
}

corto_script_ast_String _corto_script_ast_String__create(corto_object _parent, const char *_id, const char * value, char delim) {
    corto_script_ast_String _this;
    _this = (corto_script_ast_String)corto_declare(_parent, _id, corto_script_ast_String_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        corto_set_str(&((corto_script_ast_String)_this)->value, value);
        ((corto_script_ast_String)_this)->delim = delim;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_String__update(corto_script_ast_String _this, const char * value, char delim) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_set_str(&((corto_script_ast_String)((corto_script_ast_String)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_String_o)->size)))->value, value);
            ((corto_script_ast_String)((corto_script_ast_String)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_String_o)->size)))->delim = delim;
        } else {
            corto_set_str(&((corto_script_ast_String)_this)->value, value);
            ((corto_script_ast_String)_this)->delim = delim;
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_String _corto_script_ast_String__assign(corto_script_ast_String _this, const char * value, char delim) {
    CORTO_UNUSED(_this);
    corto_set_str(&((corto_script_ast_String)_this)->value, value);
    ((corto_script_ast_String)_this)->delim = delim;
    return _this;
}

corto_script_ast_Ternary _corto_script_ast_Ternary__create(corto_object _parent, const char *_id, corto_script_ast_Expression cond, corto_script_ast_Expression _true, corto_script_ast_Expression _false) {
    corto_script_ast_Ternary _this;
    _this = (corto_script_ast_Ternary)corto_declare(_parent, _id, corto_script_ast_Ternary_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        corto_set_ref(&((corto_script_ast_Ternary)_this)->cond, cond);
        corto_set_ref(&((corto_script_ast_Ternary)_this)->_true, _true);
        corto_set_ref(&((corto_script_ast_Ternary)_this)->_false, _false);
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Ternary__update(corto_script_ast_Ternary _this, corto_script_ast_Expression cond, corto_script_ast_Expression _true, corto_script_ast_Expression _false) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_set_ref(&((corto_script_ast_Ternary)((corto_script_ast_Ternary)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Ternary_o)->size)))->cond, cond);
            corto_set_ref(&((corto_script_ast_Ternary)((corto_script_ast_Ternary)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Ternary_o)->size)))->_true, _true);
            corto_set_ref(&((corto_script_ast_Ternary)((corto_script_ast_Ternary)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Ternary_o)->size)))->_false, _false);
        } else {
            corto_set_ref(&((corto_script_ast_Ternary)_this)->cond, cond);
            corto_set_ref(&((corto_script_ast_Ternary)_this)->_true, _true);
            corto_set_ref(&((corto_script_ast_Ternary)_this)->_false, _false);
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Ternary _corto_script_ast_Ternary__assign(corto_script_ast_Ternary _this, corto_script_ast_Expression cond, corto_script_ast_Expression _true, corto_script_ast_Expression _false) {
    CORTO_UNUSED(_this);
    corto_set_ref(&((corto_script_ast_Ternary)_this)->cond, cond);
    corto_set_ref(&((corto_script_ast_Ternary)_this)->_true, _true);
    corto_set_ref(&((corto_script_ast_Ternary)_this)->_false, _false);
    return _this;
}

corto_script_ast_Unary _corto_script_ast_Unary__create(corto_object _parent, const char *_id, corto_script_ast_Expression expr, corto_operatorKind _operator, bool postfix) {
    corto_script_ast_Unary _this;
    _this = (corto_script_ast_Unary)corto_declare(_parent, _id, corto_script_ast_Unary_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        corto_set_ref(&((corto_script_ast_Unary)_this)->expr, expr);
        ((corto_script_ast_Unary)_this)->_operator = _operator;
        ((corto_script_ast_Unary)_this)->postfix = postfix;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Unary__update(corto_script_ast_Unary _this, corto_script_ast_Expression expr, corto_operatorKind _operator, bool postfix) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_set_ref(&((corto_script_ast_Unary)((corto_script_ast_Unary)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Unary_o)->size)))->expr, expr);
            ((corto_script_ast_Unary)((corto_script_ast_Unary)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Unary_o)->size)))->_operator = _operator;
            ((corto_script_ast_Unary)((corto_script_ast_Unary)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Unary_o)->size)))->postfix = postfix;
        } else {
            corto_set_ref(&((corto_script_ast_Unary)_this)->expr, expr);
            ((corto_script_ast_Unary)_this)->_operator = _operator;
            ((corto_script_ast_Unary)_this)->postfix = postfix;
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Unary _corto_script_ast_Unary__assign(corto_script_ast_Unary _this, corto_script_ast_Expression expr, corto_operatorKind _operator, bool postfix) {
    CORTO_UNUSED(_this);
    corto_set_ref(&((corto_script_ast_Unary)_this)->expr, expr);
    ((corto_script_ast_Unary)_this)->_operator = _operator;
    ((corto_script_ast_Unary)_this)->postfix = postfix;
    return _this;
}

corto_script_ast_Use _corto_script_ast_Use__create(corto_object _parent, const char *_id, const char * package, const char * alias, bool as_typesystem) {
    corto_script_ast_Use _this;
    _this = (corto_script_ast_Use)corto_declare(_parent, _id, corto_script_ast_Use_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        corto_set_str(&((corto_script_ast_Use)_this)->package, package);
        corto_set_str(&((corto_script_ast_Use)_this)->alias, alias);
        ((corto_script_ast_Use)_this)->as_typesystem = as_typesystem;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Use__update(corto_script_ast_Use _this, const char * package, const char * alias, bool as_typesystem) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_set_str(&((corto_script_ast_Use)((corto_script_ast_Use)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Use_o)->size)))->package, package);
            corto_set_str(&((corto_script_ast_Use)((corto_script_ast_Use)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Use_o)->size)))->alias, alias);
            ((corto_script_ast_Use)((corto_script_ast_Use)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Use_o)->size)))->as_typesystem = as_typesystem;
        } else {
            corto_set_str(&((corto_script_ast_Use)_this)->package, package);
            corto_set_str(&((corto_script_ast_Use)_this)->alias, alias);
            ((corto_script_ast_Use)_this)->as_typesystem = as_typesystem;
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Use _corto_script_ast_Use__assign(corto_script_ast_Use _this, const char * package, const char * alias, bool as_typesystem) {
    CORTO_UNUSED(_this);
    corto_set_str(&((corto_script_ast_Use)_this)->package, package);
    corto_set_str(&((corto_script_ast_Use)_this)->alias, alias);
    ((corto_script_ast_Use)_this)->as_typesystem = as_typesystem;
    return _this;
}

corto_script_ast_Visitor _corto_script_ast_Visitor__create(corto_object _parent, const char *_id, const char * file) {
    corto_script_ast_Visitor _this;
    _this = (corto_script_ast_Visitor)corto_declare(_parent, _id, corto_script_ast_Visitor_o);
    if (!_this) {
        return NULL;
    }
    if (!corto_check_state(_this, CORTO_VALID)) {
        corto_set_str(&((corto_script_ast_Visitor)_this)->file, file);
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _corto_script_ast_Visitor__update(corto_script_ast_Visitor _this, const char * file) {
    CORTO_UNUSED(_this);
    if (!corto_update_begin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            corto_set_str(&((corto_script_ast_Visitor)((corto_script_ast_Visitor)CORTO_OFFSET(_this, ((corto_type)corto_script_ast_Visitor_o)->size)))->file, file);
        } else {
            corto_set_str(&((corto_script_ast_Visitor)_this)->file, file);
        }
        if (corto_update_end(_this)) {
            return -1;
        }
    } else {
        return -1;
    }
    return 0;
}

corto_script_ast_Visitor _corto_script_ast_Visitor__assign(corto_script_ast_Visitor _this, const char * file) {
    CORTO_UNUSED(_this);
    corto_set_str(&((corto_script_ast_Visitor)_this)->file, file);
    return _this;
}

void corto_script_ast_FunctionArgumentList__insert(corto_script_ast_FunctionArgumentList list, corto_script_ast_FunctionArgument element) {
    corto_ll_insert(list, (void*)(corto_word)element);
    if (element) {
        corto_claim(element);
    }
}

void corto_script_ast_FunctionArgumentList__append(corto_script_ast_FunctionArgumentList list, corto_script_ast_FunctionArgument element) {
    corto_ll_append(list, (void*)(corto_word)element);
    if (element) {
        corto_claim(element);
    }
}

void corto_script_ast_FunctionArgumentList__remove(corto_script_ast_FunctionArgumentList list, corto_script_ast_FunctionArgument element) {
    corto_ll_remove(list, element);
    corto_release(element);
}

corto_script_ast_FunctionArgument corto_script_ast_FunctionArgumentList__takeFirst(corto_script_ast_FunctionArgumentList list) {
    return (corto_script_ast_FunctionArgument)(corto_word)corto_ll_takeFirst(list);
}

corto_script_ast_FunctionArgument corto_script_ast_FunctionArgumentList__last(corto_script_ast_FunctionArgumentList list) {
    return (corto_script_ast_FunctionArgument)(corto_word)corto_ll_last(list);
}

corto_script_ast_FunctionArgument corto_script_ast_FunctionArgumentList__get(corto_script_ast_FunctionArgumentList list, corto_uint32 index) {
    return (corto_script_ast_FunctionArgument)(corto_word)corto_ll_get(list, index);
}

void corto_script_ast_FunctionArgumentList__clear(corto_script_ast_FunctionArgumentList list) {
    corto_iter iter = corto_ll_iter(list);
    while(corto_iter_hasNext(&iter)) {
        void *ptr = corto_iter_next(&iter);
        corto_release(ptr);
    }
    corto_ll_clear(list);
}

void corto_script_ast_InitializerValueList__insert(corto_script_ast_InitializerValueList list, corto_script_ast_InitializerValue element) {
    corto_ll_insert(list, (void*)(corto_word)element);
    if (element) {
        corto_claim(element);
    }
}

void corto_script_ast_InitializerValueList__append(corto_script_ast_InitializerValueList list, corto_script_ast_InitializerValue element) {
    corto_ll_append(list, (void*)(corto_word)element);
    if (element) {
        corto_claim(element);
    }
}

void corto_script_ast_InitializerValueList__remove(corto_script_ast_InitializerValueList list, corto_script_ast_InitializerValue element) {
    corto_ll_remove(list, element);
    corto_release(element);
}

corto_script_ast_InitializerValue corto_script_ast_InitializerValueList__takeFirst(corto_script_ast_InitializerValueList list) {
    return (corto_script_ast_InitializerValue)(corto_word)corto_ll_takeFirst(list);
}

corto_script_ast_InitializerValue corto_script_ast_InitializerValueList__last(corto_script_ast_InitializerValueList list) {
    return (corto_script_ast_InitializerValue)(corto_word)corto_ll_last(list);
}

corto_script_ast_InitializerValue corto_script_ast_InitializerValueList__get(corto_script_ast_InitializerValueList list, corto_uint32 index) {
    return (corto_script_ast_InitializerValue)(corto_word)corto_ll_get(list, index);
}

void corto_script_ast_InitializerValueList__clear(corto_script_ast_InitializerValueList list) {
    corto_iter iter = corto_ll_iter(list);
    while(corto_iter_hasNext(&iter)) {
        void *ptr = corto_iter_next(&iter);
        corto_release(ptr);
    }
    corto_ll_clear(list);
}

void corto_script_ast_StatementList__insert(corto_script_ast_StatementList list, corto_script_ast_Statement element) {
    corto_ll_insert(list, (void*)(corto_word)element);
    if (element) {
        corto_claim(element);
    }
}

void corto_script_ast_StatementList__append(corto_script_ast_StatementList list, corto_script_ast_Statement element) {
    corto_ll_append(list, (void*)(corto_word)element);
    if (element) {
        corto_claim(element);
    }
}

void corto_script_ast_StatementList__remove(corto_script_ast_StatementList list, corto_script_ast_Statement element) {
    corto_ll_remove(list, element);
    corto_release(element);
}

corto_script_ast_Statement corto_script_ast_StatementList__takeFirst(corto_script_ast_StatementList list) {
    return (corto_script_ast_Statement)(corto_word)corto_ll_takeFirst(list);
}

corto_script_ast_Statement corto_script_ast_StatementList__last(corto_script_ast_StatementList list) {
    return (corto_script_ast_Statement)(corto_word)corto_ll_last(list);
}

corto_script_ast_Statement corto_script_ast_StatementList__get(corto_script_ast_StatementList list, corto_uint32 index) {
    return (corto_script_ast_Statement)(corto_word)corto_ll_get(list, index);
}

void corto_script_ast_StatementList__clear(corto_script_ast_StatementList list) {
    corto_iter iter = corto_ll_iter(list);
    while(corto_iter_hasNext(&iter)) {
        void *ptr = corto_iter_next(&iter);
        corto_release(ptr);
    }
    corto_ll_clear(list);
}

void corto_script_ast_StorageList__insert(corto_script_ast_StorageList list, corto_script_ast_Storage element) {
    corto_ll_insert(list, (void*)(corto_word)element);
    if (element) {
        corto_claim(element);
    }
}

void corto_script_ast_StorageList__append(corto_script_ast_StorageList list, corto_script_ast_Storage element) {
    corto_ll_append(list, (void*)(corto_word)element);
    if (element) {
        corto_claim(element);
    }
}

void corto_script_ast_StorageList__remove(corto_script_ast_StorageList list, corto_script_ast_Storage element) {
    corto_ll_remove(list, element);
    corto_release(element);
}

corto_script_ast_Storage corto_script_ast_StorageList__takeFirst(corto_script_ast_StorageList list) {
    return (corto_script_ast_Storage)(corto_word)corto_ll_takeFirst(list);
}

corto_script_ast_Storage corto_script_ast_StorageList__last(corto_script_ast_StorageList list) {
    return (corto_script_ast_Storage)(corto_word)corto_ll_last(list);
}

corto_script_ast_Storage corto_script_ast_StorageList__get(corto_script_ast_StorageList list, corto_uint32 index) {
    return (corto_script_ast_Storage)(corto_word)corto_ll_get(list, index);
}

void corto_script_ast_StorageList__clear(corto_script_ast_StorageList list) {
    corto_iter iter = corto_ll_iter(list);
    while(corto_iter_hasNext(&iter)) {
        void *ptr = corto_iter_next(&iter);
        corto_release(ptr);
    }
    corto_ll_clear(list);
}

