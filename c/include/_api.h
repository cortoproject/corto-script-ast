/* _api.h
 *
 * API convenience functions for C-language.
 * This file contains generated code. Do not modify!
 */

#ifndef CORTO_SCRIPT_AST__API_H
#define CORTO_SCRIPT_AST__API_H

#include <corto/corto.h>
#include <corto/script/ast/_project.h>
#include <corto/script/ast/_type.h>

#ifdef __cplusplus
extern "C" {
#endif

/* /corto/script/ast/Binary */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Binary _corto_script_ast_Binary__create(corto_object _parent, const char *_id, corto_script_ast_Expression left, corto_script_ast_Expression right, corto_operatorKind _operator);
#define corto_script_ast_Binary__create(_parent, _id, left, right, _operator) _corto_script_ast_Binary__create(_parent, _id, corto_script_ast_Expression(left), corto_script_ast_Expression(right), _operator)
#define corto_script_ast_Binary__create_auto(_parent, _id, left, right, _operator) corto_script_ast_Binary _id = corto_script_ast_Binary__create(_parent, #_id, left, right, _operator); (void)_id
#define corto_script_ast_Binary__declare(parent, id) (corto_script_ast_Binary)corto_declare(parent, id, corto_script_ast_Binary_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Binary__update(corto_script_ast_Binary _this, corto_script_ast_Expression left, corto_script_ast_Expression right, corto_operatorKind _operator);
#define corto_script_ast_Binary__update(_this, left, right, _operator) _corto_script_ast_Binary__update(corto_script_ast_Binary(_this), corto_script_ast_Expression(left), corto_script_ast_Expression(right), _operator)
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Binary _corto_script_ast_Binary__assign(corto_script_ast_Binary _this, corto_script_ast_Expression left, corto_script_ast_Expression right, corto_operatorKind _operator);
#define corto_script_ast_Binary__optional_not_set NULL
#define corto_script_ast_Binary__optional_set(left, right, _operator) (corto_script_ast_Binary*)corto_script_ast_Binary__assign((corto_script_ast_Binary*)corto_ptr_new(corto_script_ast_Binary_o), left, right, _operator)
#define corto_script_ast_Binary__optional_set_cond(__cond, left, right, _operator) __cond ? (corto_script_ast_Binary*)corto_script_ast_Binary__assign((corto_script_ast_Binary*)corto_ptr_new(corto_script_ast_Binary_o), left, right, _operator) : NULL
#define corto_script_ast_Binary__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Binary_o), 0 : 0; _this = NULL;
#define corto_script_ast_Binary__assign(_this, left, right, _operator) _corto_script_ast_Binary__assign(_this, corto_script_ast_Expression(left), corto_script_ast_Expression(right), _operator)
#define corto_script_ast_Binary__set(_this, left, right, _operator) _this = _this ? _this : (corto_script_ast_Binary*)corto_ptr_new(corto_script_ast_Binary_o); _corto_script_ast_Binary__assign(_this, corto_script_ast_Expression(left), corto_script_ast_Expression(right), _operator)

#define ast_Binary__create corto_script_ast_Binary__create
#define ast_Binary__create_auto corto_script_ast_Binary__create_auto
#define ast_Binary__declare corto_script_ast_Binary__declare
#define ast_Binary__update corto_script_ast_Binary__update
#define ast_Binary__assign corto_script_ast_Binary__assign
#define ast_Binary__set corto_script_ast_Binary__set
#define ast_Binary__unset corto_script_ast_Binary__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Binary__create corto_script_ast_Binary__create
#define Binary__create_auto corto_script_ast_Binary__create_auto
#define Binary__declare corto_script_ast_Binary__declare
#define Binary__update corto_script_ast_Binary__update
#define Binary__assign corto_script_ast_Binary__assign
#define Binary__set corto_script_ast_Binary__set
#define Binary__unset corto_script_ast_Binary__unset
#endif
#define ast_Binary__call corto_script_ast_Binary__call
#define ast_Binary__init_c corto_script_ast_Binary__init_c
#define ast_Binary__init_c_instance corto_script_ast_Binary__init_c_instance
#define ast_Binary__init_c_instance_auto corto_script_ast_Binary__init_c_instance_auto

/* /corto/script/ast/Boolean */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Boolean _corto_script_ast_Boolean__create(corto_object _parent, const char *_id, bool value);
#define corto_script_ast_Boolean__create(_parent, _id, value) _corto_script_ast_Boolean__create(_parent, _id, value)
#define corto_script_ast_Boolean__create_auto(_parent, _id, value) corto_script_ast_Boolean _id = corto_script_ast_Boolean__create(_parent, #_id, value); (void)_id
#define corto_script_ast_Boolean__declare(parent, id) (corto_script_ast_Boolean)corto_declare(parent, id, corto_script_ast_Boolean_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Boolean__update(corto_script_ast_Boolean _this, bool value);
#define corto_script_ast_Boolean__update(_this, value) _corto_script_ast_Boolean__update(corto_script_ast_Boolean(_this), value)
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Boolean _corto_script_ast_Boolean__assign(corto_script_ast_Boolean _this, bool value);
#define corto_script_ast_Boolean__optional_not_set NULL
#define corto_script_ast_Boolean__optional_set(value) (corto_script_ast_Boolean*)corto_script_ast_Boolean__assign((corto_script_ast_Boolean*)corto_ptr_new(corto_script_ast_Boolean_o), value)
#define corto_script_ast_Boolean__optional_set_cond(__cond, value) __cond ? (corto_script_ast_Boolean*)corto_script_ast_Boolean__assign((corto_script_ast_Boolean*)corto_ptr_new(corto_script_ast_Boolean_o), value) : NULL
#define corto_script_ast_Boolean__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Boolean_o), 0 : 0; _this = NULL;
#define corto_script_ast_Boolean__assign(_this, value) _corto_script_ast_Boolean__assign(_this, value)
#define corto_script_ast_Boolean__set(_this, value) _this = _this ? _this : (corto_script_ast_Boolean*)corto_ptr_new(corto_script_ast_Boolean_o); _corto_script_ast_Boolean__assign(_this, value)

#define ast_Boolean__create corto_script_ast_Boolean__create
#define ast_Boolean__create_auto corto_script_ast_Boolean__create_auto
#define ast_Boolean__declare corto_script_ast_Boolean__declare
#define ast_Boolean__update corto_script_ast_Boolean__update
#define ast_Boolean__assign corto_script_ast_Boolean__assign
#define ast_Boolean__set corto_script_ast_Boolean__set
#define ast_Boolean__unset corto_script_ast_Boolean__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Boolean__create corto_script_ast_Boolean__create
#define Boolean__create_auto corto_script_ast_Boolean__create_auto
#define Boolean__declare corto_script_ast_Boolean__declare
#define Boolean__update corto_script_ast_Boolean__update
#define Boolean__assign corto_script_ast_Boolean__assign
#define Boolean__set corto_script_ast_Boolean__set
#define Boolean__unset corto_script_ast_Boolean__unset
#endif
#define ast_Boolean__call corto_script_ast_Boolean__call
#define ast_Boolean__init_c corto_script_ast_Boolean__init_c
#define ast_Boolean__init_c_instance corto_script_ast_Boolean__init_c_instance
#define ast_Boolean__init_c_instance_auto corto_script_ast_Boolean__init_c_instance_auto

/* /corto/script/ast/Cast */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Cast _corto_script_ast_Cast__create(corto_object _parent, const char *_id, corto_script_ast_Storage type, corto_script_ast_Expression expr);
#define corto_script_ast_Cast__create(_parent, _id, type, expr) _corto_script_ast_Cast__create(_parent, _id, corto_script_ast_Storage(type), corto_script_ast_Expression(expr))
#define corto_script_ast_Cast__create_auto(_parent, _id, type, expr) corto_script_ast_Cast _id = corto_script_ast_Cast__create(_parent, #_id, type, expr); (void)_id
#define corto_script_ast_Cast__declare(parent, id) (corto_script_ast_Cast)corto_declare(parent, id, corto_script_ast_Cast_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Cast__update(corto_script_ast_Cast _this, corto_script_ast_Storage type, corto_script_ast_Expression expr);
#define corto_script_ast_Cast__update(_this, type, expr) _corto_script_ast_Cast__update(corto_script_ast_Cast(_this), corto_script_ast_Storage(type), corto_script_ast_Expression(expr))
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Cast _corto_script_ast_Cast__assign(corto_script_ast_Cast _this, corto_script_ast_Storage type, corto_script_ast_Expression expr);
#define corto_script_ast_Cast__optional_not_set NULL
#define corto_script_ast_Cast__optional_set(type, expr) (corto_script_ast_Cast*)corto_script_ast_Cast__assign((corto_script_ast_Cast*)corto_ptr_new(corto_script_ast_Cast_o), type, expr)
#define corto_script_ast_Cast__optional_set_cond(__cond, type, expr) __cond ? (corto_script_ast_Cast*)corto_script_ast_Cast__assign((corto_script_ast_Cast*)corto_ptr_new(corto_script_ast_Cast_o), type, expr) : NULL
#define corto_script_ast_Cast__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Cast_o), 0 : 0; _this = NULL;
#define corto_script_ast_Cast__assign(_this, type, expr) _corto_script_ast_Cast__assign(_this, corto_script_ast_Storage(type), corto_script_ast_Expression(expr))
#define corto_script_ast_Cast__set(_this, type, expr) _this = _this ? _this : (corto_script_ast_Cast*)corto_ptr_new(corto_script_ast_Cast_o); _corto_script_ast_Cast__assign(_this, corto_script_ast_Storage(type), corto_script_ast_Expression(expr))

#define ast_Cast__create corto_script_ast_Cast__create
#define ast_Cast__create_auto corto_script_ast_Cast__create_auto
#define ast_Cast__declare corto_script_ast_Cast__declare
#define ast_Cast__update corto_script_ast_Cast__update
#define ast_Cast__assign corto_script_ast_Cast__assign
#define ast_Cast__set corto_script_ast_Cast__set
#define ast_Cast__unset corto_script_ast_Cast__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Cast__create corto_script_ast_Cast__create
#define Cast__create_auto corto_script_ast_Cast__create_auto
#define Cast__declare corto_script_ast_Cast__declare
#define Cast__update corto_script_ast_Cast__update
#define Cast__assign corto_script_ast_Cast__assign
#define Cast__set corto_script_ast_Cast__set
#define Cast__unset corto_script_ast_Cast__unset
#endif
#define ast_Cast__call corto_script_ast_Cast__call
#define ast_Cast__init_c corto_script_ast_Cast__init_c
#define ast_Cast__init_c_instance corto_script_ast_Cast__init_c_instance
#define ast_Cast__init_c_instance_auto corto_script_ast_Cast__init_c_instance_auto

/* /corto/script/ast/Character */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Character _corto_script_ast_Character__create(corto_object _parent, const char *_id, char value);
#define corto_script_ast_Character__create(_parent, _id, value) _corto_script_ast_Character__create(_parent, _id, value)
#define corto_script_ast_Character__create_auto(_parent, _id, value) corto_script_ast_Character _id = corto_script_ast_Character__create(_parent, #_id, value); (void)_id
#define corto_script_ast_Character__declare(parent, id) (corto_script_ast_Character)corto_declare(parent, id, corto_script_ast_Character_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Character__update(corto_script_ast_Character _this, char value);
#define corto_script_ast_Character__update(_this, value) _corto_script_ast_Character__update(corto_script_ast_Character(_this), value)
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Character _corto_script_ast_Character__assign(corto_script_ast_Character _this, char value);
#define corto_script_ast_Character__optional_not_set NULL
#define corto_script_ast_Character__optional_set(value) (corto_script_ast_Character*)corto_script_ast_Character__assign((corto_script_ast_Character*)corto_ptr_new(corto_script_ast_Character_o), value)
#define corto_script_ast_Character__optional_set_cond(__cond, value) __cond ? (corto_script_ast_Character*)corto_script_ast_Character__assign((corto_script_ast_Character*)corto_ptr_new(corto_script_ast_Character_o), value) : NULL
#define corto_script_ast_Character__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Character_o), 0 : 0; _this = NULL;
#define corto_script_ast_Character__assign(_this, value) _corto_script_ast_Character__assign(_this, value)
#define corto_script_ast_Character__set(_this, value) _this = _this ? _this : (corto_script_ast_Character*)corto_ptr_new(corto_script_ast_Character_o); _corto_script_ast_Character__assign(_this, value)

#define ast_Character__create corto_script_ast_Character__create
#define ast_Character__create_auto corto_script_ast_Character__create_auto
#define ast_Character__declare corto_script_ast_Character__declare
#define ast_Character__update corto_script_ast_Character__update
#define ast_Character__assign corto_script_ast_Character__assign
#define ast_Character__set corto_script_ast_Character__set
#define ast_Character__unset corto_script_ast_Character__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Character__create corto_script_ast_Character__create
#define Character__create_auto corto_script_ast_Character__create_auto
#define Character__declare corto_script_ast_Character__declare
#define Character__update corto_script_ast_Character__update
#define Character__assign corto_script_ast_Character__assign
#define Character__set corto_script_ast_Character__set
#define Character__unset corto_script_ast_Character__unset
#endif
#define ast_Character__call corto_script_ast_Character__call
#define ast_Character__init_c corto_script_ast_Character__init_c
#define ast_Character__init_c_instance corto_script_ast_Character__init_c_instance
#define ast_Character__init_c_instance_auto corto_script_ast_Character__init_c_instance_auto

/* /corto/script/ast/Declaration */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Declaration _corto_script_ast_Declaration__create(corto_object _parent, const char *_id, corto_script_ast_Storage type, corto_script_ast_DeclarationIdentifier id, bool set_scope, bool is_var, corto_script_ast_Initializer initializer, corto_script_ast_Scope scope);
#define corto_script_ast_Declaration__create(_parent, _id, type, id, set_scope, is_var, initializer, scope) _corto_script_ast_Declaration__create(_parent, _id, corto_script_ast_Storage(type), corto_script_ast_DeclarationIdentifier(id), set_scope, is_var, corto_script_ast_Initializer(initializer), corto_script_ast_Scope(scope))
#define corto_script_ast_Declaration__create_auto(_parent, _id, type, id, set_scope, is_var, initializer, scope) corto_script_ast_Declaration _id = corto_script_ast_Declaration__create(_parent, #_id, type, id, set_scope, is_var, initializer, scope); (void)_id
#define corto_script_ast_Declaration__declare(parent, id) (corto_script_ast_Declaration)corto_declare(parent, id, corto_script_ast_Declaration_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Declaration__update(corto_script_ast_Declaration _this, corto_script_ast_Storage type, corto_script_ast_DeclarationIdentifier id, bool set_scope, bool is_var, corto_script_ast_Initializer initializer, corto_script_ast_Scope scope);
#define corto_script_ast_Declaration__update(_this, type, id, set_scope, is_var, initializer, scope) _corto_script_ast_Declaration__update(corto_script_ast_Declaration(_this), corto_script_ast_Storage(type), corto_script_ast_DeclarationIdentifier(id), set_scope, is_var, corto_script_ast_Initializer(initializer), corto_script_ast_Scope(scope))
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Declaration _corto_script_ast_Declaration__assign(corto_script_ast_Declaration _this, corto_script_ast_Storage type, corto_script_ast_DeclarationIdentifier id, bool set_scope, bool is_var, corto_script_ast_Initializer initializer, corto_script_ast_Scope scope);
#define corto_script_ast_Declaration__optional_not_set NULL
#define corto_script_ast_Declaration__optional_set(type, id, set_scope, is_var, initializer, scope) (corto_script_ast_Declaration*)corto_script_ast_Declaration__assign((corto_script_ast_Declaration*)corto_ptr_new(corto_script_ast_Declaration_o), type, id, set_scope, is_var, initializer, scope)
#define corto_script_ast_Declaration__optional_set_cond(__cond, type, id, set_scope, is_var, initializer, scope) __cond ? (corto_script_ast_Declaration*)corto_script_ast_Declaration__assign((corto_script_ast_Declaration*)corto_ptr_new(corto_script_ast_Declaration_o), type, id, set_scope, is_var, initializer, scope) : NULL
#define corto_script_ast_Declaration__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Declaration_o), 0 : 0; _this = NULL;
#define corto_script_ast_Declaration__assign(_this, type, id, set_scope, is_var, initializer, scope) _corto_script_ast_Declaration__assign(_this, corto_script_ast_Storage(type), corto_script_ast_DeclarationIdentifier(id), set_scope, is_var, corto_script_ast_Initializer(initializer), corto_script_ast_Scope(scope))
#define corto_script_ast_Declaration__set(_this, type, id, set_scope, is_var, initializer, scope) _this = _this ? _this : (corto_script_ast_Declaration*)corto_ptr_new(corto_script_ast_Declaration_o); _corto_script_ast_Declaration__assign(_this, corto_script_ast_Storage(type), corto_script_ast_DeclarationIdentifier(id), set_scope, is_var, corto_script_ast_Initializer(initializer), corto_script_ast_Scope(scope))

#define ast_Declaration__create corto_script_ast_Declaration__create
#define ast_Declaration__create_auto corto_script_ast_Declaration__create_auto
#define ast_Declaration__declare corto_script_ast_Declaration__declare
#define ast_Declaration__update corto_script_ast_Declaration__update
#define ast_Declaration__assign corto_script_ast_Declaration__assign
#define ast_Declaration__set corto_script_ast_Declaration__set
#define ast_Declaration__unset corto_script_ast_Declaration__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Declaration__create corto_script_ast_Declaration__create
#define Declaration__create_auto corto_script_ast_Declaration__create_auto
#define Declaration__declare corto_script_ast_Declaration__declare
#define Declaration__update corto_script_ast_Declaration__update
#define Declaration__assign corto_script_ast_Declaration__assign
#define Declaration__set corto_script_ast_Declaration__set
#define Declaration__unset corto_script_ast_Declaration__unset
#endif
#define ast_Declaration__call corto_script_ast_Declaration__call
#define ast_Declaration__init_c corto_script_ast_Declaration__init_c
#define ast_Declaration__init_c_instance corto_script_ast_Declaration__init_c_instance
#define ast_Declaration__init_c_instance_auto corto_script_ast_Declaration__init_c_instance_auto

/* /corto/script/ast/DeclarationIdentifier */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_DeclarationIdentifier _corto_script_ast_DeclarationIdentifier__create(corto_object _parent, const char *_id, corto_script_ast_StorageList ids, corto_script_ast_FunctionArgumentList arguments);
#define corto_script_ast_DeclarationIdentifier__create(_parent, _id, ids, arguments) _corto_script_ast_DeclarationIdentifier__create(_parent, _id, ids, arguments)
#define corto_script_ast_DeclarationIdentifier__create_auto(_parent, _id, ids, arguments) corto_script_ast_DeclarationIdentifier _id = corto_script_ast_DeclarationIdentifier__create(_parent, #_id, ids, arguments); (void)_id
#define corto_script_ast_DeclarationIdentifier__declare(parent, id) (corto_script_ast_DeclarationIdentifier)corto_declare(parent, id, corto_script_ast_DeclarationIdentifier_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_DeclarationIdentifier__update(corto_script_ast_DeclarationIdentifier _this, corto_script_ast_StorageList ids, corto_script_ast_FunctionArgumentList arguments);
#define corto_script_ast_DeclarationIdentifier__update(_this, ids, arguments) _corto_script_ast_DeclarationIdentifier__update(corto_script_ast_DeclarationIdentifier(_this), ids, arguments)
CORTO_SCRIPT_AST_EXPORT corto_script_ast_DeclarationIdentifier _corto_script_ast_DeclarationIdentifier__assign(corto_script_ast_DeclarationIdentifier _this, corto_script_ast_StorageList ids, corto_script_ast_FunctionArgumentList arguments);
#define corto_script_ast_DeclarationIdentifier__optional_not_set NULL
#define corto_script_ast_DeclarationIdentifier__optional_set(ids, arguments) (corto_script_ast_DeclarationIdentifier*)corto_script_ast_DeclarationIdentifier__assign((corto_script_ast_DeclarationIdentifier*)corto_ptr_new(corto_script_ast_DeclarationIdentifier_o), ids, arguments)
#define corto_script_ast_DeclarationIdentifier__optional_set_cond(__cond, ids, arguments) __cond ? (corto_script_ast_DeclarationIdentifier*)corto_script_ast_DeclarationIdentifier__assign((corto_script_ast_DeclarationIdentifier*)corto_ptr_new(corto_script_ast_DeclarationIdentifier_o), ids, arguments) : NULL
#define corto_script_ast_DeclarationIdentifier__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_DeclarationIdentifier_o), 0 : 0; _this = NULL;
#define corto_script_ast_DeclarationIdentifier__assign(_this, ids, arguments) _corto_script_ast_DeclarationIdentifier__assign(_this, ids, arguments)
#define corto_script_ast_DeclarationIdentifier__set(_this, ids, arguments) _this = _this ? _this : (corto_script_ast_DeclarationIdentifier*)corto_ptr_new(corto_script_ast_DeclarationIdentifier_o); _corto_script_ast_DeclarationIdentifier__assign(_this, ids, arguments)

#define ast_DeclarationIdentifier__create corto_script_ast_DeclarationIdentifier__create
#define ast_DeclarationIdentifier__create_auto corto_script_ast_DeclarationIdentifier__create_auto
#define ast_DeclarationIdentifier__declare corto_script_ast_DeclarationIdentifier__declare
#define ast_DeclarationIdentifier__update corto_script_ast_DeclarationIdentifier__update
#define ast_DeclarationIdentifier__assign corto_script_ast_DeclarationIdentifier__assign
#define ast_DeclarationIdentifier__set corto_script_ast_DeclarationIdentifier__set
#define ast_DeclarationIdentifier__unset corto_script_ast_DeclarationIdentifier__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define DeclarationIdentifier__create corto_script_ast_DeclarationIdentifier__create
#define DeclarationIdentifier__create_auto corto_script_ast_DeclarationIdentifier__create_auto
#define DeclarationIdentifier__declare corto_script_ast_DeclarationIdentifier__declare
#define DeclarationIdentifier__update corto_script_ast_DeclarationIdentifier__update
#define DeclarationIdentifier__assign corto_script_ast_DeclarationIdentifier__assign
#define DeclarationIdentifier__set corto_script_ast_DeclarationIdentifier__set
#define DeclarationIdentifier__unset corto_script_ast_DeclarationIdentifier__unset
#endif
#define ast_DeclarationIdentifier__call corto_script_ast_DeclarationIdentifier__call
#define ast_DeclarationIdentifier__init_c corto_script_ast_DeclarationIdentifier__init_c
#define ast_DeclarationIdentifier__init_c_instance corto_script_ast_DeclarationIdentifier__init_c_instance
#define ast_DeclarationIdentifier__init_c_instance_auto corto_script_ast_DeclarationIdentifier__init_c_instance_auto

/* /corto/script/ast/Expression */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Expression _corto_script_ast_Expression__create(corto_object _parent, const char *_id);
#define corto_script_ast_Expression__create(_parent, _id) _corto_script_ast_Expression__create(_parent, _id)
#define corto_script_ast_Expression__create_auto(_parent, _id) corto_script_ast_Expression _id = corto_script_ast_Expression__create(_parent, #_id); (void)_id
#define corto_script_ast_Expression__declare(parent, id) (corto_script_ast_Expression)corto_declare(parent, id, corto_script_ast_Expression_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Expression__update(corto_script_ast_Expression _this);
#define corto_script_ast_Expression__update(_this) _corto_script_ast_Expression__update(corto_script_ast_Expression(_this))
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Expression _corto_script_ast_Expression__assign(corto_script_ast_Expression _this);
#define corto_script_ast_Expression__optional_not_set NULL
#define corto_script_ast_Expression__optional_set() (corto_script_ast_Expression*)corto_script_ast_Expression__assign((corto_script_ast_Expression*)corto_ptr_new(corto_script_ast_Expression_o))
#define corto_script_ast_Expression__optional_set_cond(__cond) __cond ? (corto_script_ast_Expression*)corto_script_ast_Expression__assign((corto_script_ast_Expression*)corto_ptr_new(corto_script_ast_Expression_o)) : NULL
#define corto_script_ast_Expression__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Expression_o), 0 : 0; _this = NULL;
#define corto_script_ast_Expression__assign(_this) _corto_script_ast_Expression__assign(_this)
#define corto_script_ast_Expression__set(_this) _this = _this ? _this : (corto_script_ast_Expression*)corto_ptr_new(corto_script_ast_Expression_o); _corto_script_ast_Expression__assign(_this)

#define ast_Expression__create corto_script_ast_Expression__create
#define ast_Expression__create_auto corto_script_ast_Expression__create_auto
#define ast_Expression__declare corto_script_ast_Expression__declare
#define ast_Expression__update corto_script_ast_Expression__update
#define ast_Expression__assign corto_script_ast_Expression__assign
#define ast_Expression__set corto_script_ast_Expression__set
#define ast_Expression__unset corto_script_ast_Expression__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Expression__create corto_script_ast_Expression__create
#define Expression__create_auto corto_script_ast_Expression__create_auto
#define Expression__declare corto_script_ast_Expression__declare
#define Expression__update corto_script_ast_Expression__update
#define Expression__assign corto_script_ast_Expression__assign
#define Expression__set corto_script_ast_Expression__set
#define Expression__unset corto_script_ast_Expression__unset
#endif
#define ast_Expression__call corto_script_ast_Expression__call
#define ast_Expression__init_c corto_script_ast_Expression__init_c
#define ast_Expression__init_c_instance corto_script_ast_Expression__init_c_instance
#define ast_Expression__init_c_instance_auto corto_script_ast_Expression__init_c_instance_auto

/* /corto/script/ast/FloatingPoint */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_FloatingPoint _corto_script_ast_FloatingPoint__create(corto_object _parent, const char *_id, const char * unit, double value);
#define corto_script_ast_FloatingPoint__create(_parent, _id, unit, value) _corto_script_ast_FloatingPoint__create(_parent, _id, unit, value)
#define corto_script_ast_FloatingPoint__create_auto(_parent, _id, unit, value) corto_script_ast_FloatingPoint _id = corto_script_ast_FloatingPoint__create(_parent, #_id, unit, value); (void)_id
#define corto_script_ast_FloatingPoint__declare(parent, id) (corto_script_ast_FloatingPoint)corto_declare(parent, id, corto_script_ast_FloatingPoint_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_FloatingPoint__update(corto_script_ast_FloatingPoint _this, const char * unit, double value);
#define corto_script_ast_FloatingPoint__update(_this, unit, value) _corto_script_ast_FloatingPoint__update(corto_script_ast_FloatingPoint(_this), unit, value)
CORTO_SCRIPT_AST_EXPORT corto_script_ast_FloatingPoint _corto_script_ast_FloatingPoint__assign(corto_script_ast_FloatingPoint _this, const char * unit, double value);
#define corto_script_ast_FloatingPoint__optional_not_set NULL
#define corto_script_ast_FloatingPoint__optional_set(unit, value) (corto_script_ast_FloatingPoint*)corto_script_ast_FloatingPoint__assign((corto_script_ast_FloatingPoint*)corto_ptr_new(corto_script_ast_FloatingPoint_o), unit, value)
#define corto_script_ast_FloatingPoint__optional_set_cond(__cond, unit, value) __cond ? (corto_script_ast_FloatingPoint*)corto_script_ast_FloatingPoint__assign((corto_script_ast_FloatingPoint*)corto_ptr_new(corto_script_ast_FloatingPoint_o), unit, value) : NULL
#define corto_script_ast_FloatingPoint__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_FloatingPoint_o), 0 : 0; _this = NULL;
#define corto_script_ast_FloatingPoint__assign(_this, unit, value) _corto_script_ast_FloatingPoint__assign(_this, unit, value)
#define corto_script_ast_FloatingPoint__set(_this, unit, value) _this = _this ? _this : (corto_script_ast_FloatingPoint*)corto_ptr_new(corto_script_ast_FloatingPoint_o); _corto_script_ast_FloatingPoint__assign(_this, unit, value)

#define ast_FloatingPoint__create corto_script_ast_FloatingPoint__create
#define ast_FloatingPoint__create_auto corto_script_ast_FloatingPoint__create_auto
#define ast_FloatingPoint__declare corto_script_ast_FloatingPoint__declare
#define ast_FloatingPoint__update corto_script_ast_FloatingPoint__update
#define ast_FloatingPoint__assign corto_script_ast_FloatingPoint__assign
#define ast_FloatingPoint__set corto_script_ast_FloatingPoint__set
#define ast_FloatingPoint__unset corto_script_ast_FloatingPoint__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define FloatingPoint__create corto_script_ast_FloatingPoint__create
#define FloatingPoint__create_auto corto_script_ast_FloatingPoint__create_auto
#define FloatingPoint__declare corto_script_ast_FloatingPoint__declare
#define FloatingPoint__update corto_script_ast_FloatingPoint__update
#define FloatingPoint__assign corto_script_ast_FloatingPoint__assign
#define FloatingPoint__set corto_script_ast_FloatingPoint__set
#define FloatingPoint__unset corto_script_ast_FloatingPoint__unset
#endif
#define ast_FloatingPoint__call corto_script_ast_FloatingPoint__call
#define ast_FloatingPoint__init_c corto_script_ast_FloatingPoint__init_c
#define ast_FloatingPoint__init_c_instance corto_script_ast_FloatingPoint__init_c_instance
#define ast_FloatingPoint__init_c_instance_auto corto_script_ast_FloatingPoint__init_c_instance_auto

/* /corto/script/ast/FunctionArgument */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_FunctionArgument _corto_script_ast_FunctionArgument__create(corto_object _parent, const char *_id, const char * name, corto_script_ast_Storage type, corto_inout inout, bool is_reference);
#define corto_script_ast_FunctionArgument__create(_parent, _id, name, type, inout, is_reference) _corto_script_ast_FunctionArgument__create(_parent, _id, name, corto_script_ast_Storage(type), inout, is_reference)
#define corto_script_ast_FunctionArgument__create_auto(_parent, _id, name, type, inout, is_reference) corto_script_ast_FunctionArgument _id = corto_script_ast_FunctionArgument__create(_parent, #_id, name, type, inout, is_reference); (void)_id
#define corto_script_ast_FunctionArgument__declare(parent, id) (corto_script_ast_FunctionArgument)corto_declare(parent, id, corto_script_ast_FunctionArgument_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_FunctionArgument__update(corto_script_ast_FunctionArgument _this, const char * name, corto_script_ast_Storage type, corto_inout inout, bool is_reference);
#define corto_script_ast_FunctionArgument__update(_this, name, type, inout, is_reference) _corto_script_ast_FunctionArgument__update(corto_script_ast_FunctionArgument(_this), name, corto_script_ast_Storage(type), inout, is_reference)
CORTO_SCRIPT_AST_EXPORT corto_script_ast_FunctionArgument _corto_script_ast_FunctionArgument__assign(corto_script_ast_FunctionArgument _this, const char * name, corto_script_ast_Storage type, corto_inout inout, bool is_reference);
#define corto_script_ast_FunctionArgument__optional_not_set NULL
#define corto_script_ast_FunctionArgument__optional_set(name, type, inout, is_reference) (corto_script_ast_FunctionArgument*)corto_script_ast_FunctionArgument__assign((corto_script_ast_FunctionArgument*)corto_ptr_new(corto_script_ast_FunctionArgument_o), name, type, inout, is_reference)
#define corto_script_ast_FunctionArgument__optional_set_cond(__cond, name, type, inout, is_reference) __cond ? (corto_script_ast_FunctionArgument*)corto_script_ast_FunctionArgument__assign((corto_script_ast_FunctionArgument*)corto_ptr_new(corto_script_ast_FunctionArgument_o), name, type, inout, is_reference) : NULL
#define corto_script_ast_FunctionArgument__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_FunctionArgument_o), 0 : 0; _this = NULL;
#define corto_script_ast_FunctionArgument__assign(_this, name, type, inout, is_reference) _corto_script_ast_FunctionArgument__assign(_this, name, corto_script_ast_Storage(type), inout, is_reference)
#define corto_script_ast_FunctionArgument__set(_this, name, type, inout, is_reference) _this = _this ? _this : (corto_script_ast_FunctionArgument*)corto_ptr_new(corto_script_ast_FunctionArgument_o); _corto_script_ast_FunctionArgument__assign(_this, name, corto_script_ast_Storage(type), inout, is_reference)

#define ast_FunctionArgument__create corto_script_ast_FunctionArgument__create
#define ast_FunctionArgument__create_auto corto_script_ast_FunctionArgument__create_auto
#define ast_FunctionArgument__declare corto_script_ast_FunctionArgument__declare
#define ast_FunctionArgument__update corto_script_ast_FunctionArgument__update
#define ast_FunctionArgument__assign corto_script_ast_FunctionArgument__assign
#define ast_FunctionArgument__set corto_script_ast_FunctionArgument__set
#define ast_FunctionArgument__unset corto_script_ast_FunctionArgument__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define FunctionArgument__create corto_script_ast_FunctionArgument__create
#define FunctionArgument__create_auto corto_script_ast_FunctionArgument__create_auto
#define FunctionArgument__declare corto_script_ast_FunctionArgument__declare
#define FunctionArgument__update corto_script_ast_FunctionArgument__update
#define FunctionArgument__assign corto_script_ast_FunctionArgument__assign
#define FunctionArgument__set corto_script_ast_FunctionArgument__set
#define FunctionArgument__unset corto_script_ast_FunctionArgument__unset
#endif
#define ast_FunctionArgument__call corto_script_ast_FunctionArgument__call
#define ast_FunctionArgument__init_c corto_script_ast_FunctionArgument__init_c
#define ast_FunctionArgument__init_c_instance corto_script_ast_FunctionArgument__init_c_instance
#define ast_FunctionArgument__init_c_instance_auto corto_script_ast_FunctionArgument__init_c_instance_auto

/* /corto/script/ast/Identifier */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Identifier _corto_script_ast_Identifier__create(corto_object _parent, const char *_id, const char * id);
#define corto_script_ast_Identifier__create(_parent, _id, id) _corto_script_ast_Identifier__create(_parent, _id, id)
#define corto_script_ast_Identifier__create_auto(_parent, _id, id) corto_script_ast_Identifier _id = corto_script_ast_Identifier__create(_parent, #_id, id); (void)_id
#define corto_script_ast_Identifier__declare(parent, id) (corto_script_ast_Identifier)corto_declare(parent, id, corto_script_ast_Identifier_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Identifier__update(corto_script_ast_Identifier _this, const char * id);
#define corto_script_ast_Identifier__update(_this, id) _corto_script_ast_Identifier__update(corto_script_ast_Identifier(_this), id)
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Identifier _corto_script_ast_Identifier__assign(corto_script_ast_Identifier _this, const char * id);
#define corto_script_ast_Identifier__optional_not_set NULL
#define corto_script_ast_Identifier__optional_set(id) (corto_script_ast_Identifier*)corto_script_ast_Identifier__assign((corto_script_ast_Identifier*)corto_ptr_new(corto_script_ast_Identifier_o), id)
#define corto_script_ast_Identifier__optional_set_cond(__cond, id) __cond ? (corto_script_ast_Identifier*)corto_script_ast_Identifier__assign((corto_script_ast_Identifier*)corto_ptr_new(corto_script_ast_Identifier_o), id) : NULL
#define corto_script_ast_Identifier__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Identifier_o), 0 : 0; _this = NULL;
#define corto_script_ast_Identifier__assign(_this, id) _corto_script_ast_Identifier__assign(_this, id)
#define corto_script_ast_Identifier__set(_this, id) _this = _this ? _this : (corto_script_ast_Identifier*)corto_ptr_new(corto_script_ast_Identifier_o); _corto_script_ast_Identifier__assign(_this, id)

#define ast_Identifier__create corto_script_ast_Identifier__create
#define ast_Identifier__create_auto corto_script_ast_Identifier__create_auto
#define ast_Identifier__declare corto_script_ast_Identifier__declare
#define ast_Identifier__update corto_script_ast_Identifier__update
#define ast_Identifier__assign corto_script_ast_Identifier__assign
#define ast_Identifier__set corto_script_ast_Identifier__set
#define ast_Identifier__unset corto_script_ast_Identifier__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Identifier__create corto_script_ast_Identifier__create
#define Identifier__create_auto corto_script_ast_Identifier__create_auto
#define Identifier__declare corto_script_ast_Identifier__declare
#define Identifier__update corto_script_ast_Identifier__update
#define Identifier__assign corto_script_ast_Identifier__assign
#define Identifier__set corto_script_ast_Identifier__set
#define Identifier__unset corto_script_ast_Identifier__unset
#endif
#define ast_Identifier__call corto_script_ast_Identifier__call
#define ast_Identifier__init_c corto_script_ast_Identifier__init_c
#define ast_Identifier__init_c_instance corto_script_ast_Identifier__init_c_instance
#define ast_Identifier__init_c_instance_auto corto_script_ast_Identifier__init_c_instance_auto

/* /corto/script/ast/Initializer */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Initializer _corto_script_ast_Initializer__create(corto_object _parent, const char *_id, bool collection, corto_script_ast_InitializerValueList values);
#define corto_script_ast_Initializer__create(_parent, _id, collection, values) _corto_script_ast_Initializer__create(_parent, _id, collection, values)
#define corto_script_ast_Initializer__create_auto(_parent, _id, collection, values) corto_script_ast_Initializer _id = corto_script_ast_Initializer__create(_parent, #_id, collection, values); (void)_id
#define corto_script_ast_Initializer__declare(parent, id) (corto_script_ast_Initializer)corto_declare(parent, id, corto_script_ast_Initializer_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Initializer__update(corto_script_ast_Initializer _this, bool collection, corto_script_ast_InitializerValueList values);
#define corto_script_ast_Initializer__update(_this, collection, values) _corto_script_ast_Initializer__update(corto_script_ast_Initializer(_this), collection, values)
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Initializer _corto_script_ast_Initializer__assign(corto_script_ast_Initializer _this, bool collection, corto_script_ast_InitializerValueList values);
#define corto_script_ast_Initializer__optional_not_set NULL
#define corto_script_ast_Initializer__optional_set(collection, values) (corto_script_ast_Initializer*)corto_script_ast_Initializer__assign((corto_script_ast_Initializer*)corto_ptr_new(corto_script_ast_Initializer_o), collection, values)
#define corto_script_ast_Initializer__optional_set_cond(__cond, collection, values) __cond ? (corto_script_ast_Initializer*)corto_script_ast_Initializer__assign((corto_script_ast_Initializer*)corto_ptr_new(corto_script_ast_Initializer_o), collection, values) : NULL
#define corto_script_ast_Initializer__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Initializer_o), 0 : 0; _this = NULL;
#define corto_script_ast_Initializer__assign(_this, collection, values) _corto_script_ast_Initializer__assign(_this, collection, values)
#define corto_script_ast_Initializer__set(_this, collection, values) _this = _this ? _this : (corto_script_ast_Initializer*)corto_ptr_new(corto_script_ast_Initializer_o); _corto_script_ast_Initializer__assign(_this, collection, values)

#define ast_Initializer__create corto_script_ast_Initializer__create
#define ast_Initializer__create_auto corto_script_ast_Initializer__create_auto
#define ast_Initializer__declare corto_script_ast_Initializer__declare
#define ast_Initializer__update corto_script_ast_Initializer__update
#define ast_Initializer__assign corto_script_ast_Initializer__assign
#define ast_Initializer__set corto_script_ast_Initializer__set
#define ast_Initializer__unset corto_script_ast_Initializer__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Initializer__create corto_script_ast_Initializer__create
#define Initializer__create_auto corto_script_ast_Initializer__create_auto
#define Initializer__declare corto_script_ast_Initializer__declare
#define Initializer__update corto_script_ast_Initializer__update
#define Initializer__assign corto_script_ast_Initializer__assign
#define Initializer__set corto_script_ast_Initializer__set
#define Initializer__unset corto_script_ast_Initializer__unset
#endif
#define ast_Initializer__call corto_script_ast_Initializer__call
#define ast_Initializer__init_c corto_script_ast_Initializer__init_c
#define ast_Initializer__init_c_instance corto_script_ast_Initializer__init_c_instance
#define ast_Initializer__init_c_instance_auto corto_script_ast_Initializer__init_c_instance_auto

/* /corto/script/ast/InitializerValue */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_InitializerValue _corto_script_ast_InitializerValue__create(corto_object _parent, const char *_id, const char * key, corto_script_ast_Expression value);
#define corto_script_ast_InitializerValue__create(_parent, _id, key, value) _corto_script_ast_InitializerValue__create(_parent, _id, key, corto_script_ast_Expression(value))
#define corto_script_ast_InitializerValue__create_auto(_parent, _id, key, value) corto_script_ast_InitializerValue _id = corto_script_ast_InitializerValue__create(_parent, #_id, key, value); (void)_id
#define corto_script_ast_InitializerValue__declare(parent, id) (corto_script_ast_InitializerValue)corto_declare(parent, id, corto_script_ast_InitializerValue_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_InitializerValue__update(corto_script_ast_InitializerValue _this, const char * key, corto_script_ast_Expression value);
#define corto_script_ast_InitializerValue__update(_this, key, value) _corto_script_ast_InitializerValue__update(corto_script_ast_InitializerValue(_this), key, corto_script_ast_Expression(value))
CORTO_SCRIPT_AST_EXPORT corto_script_ast_InitializerValue _corto_script_ast_InitializerValue__assign(corto_script_ast_InitializerValue _this, const char * key, corto_script_ast_Expression value);
#define corto_script_ast_InitializerValue__optional_not_set NULL
#define corto_script_ast_InitializerValue__optional_set(key, value) (corto_script_ast_InitializerValue*)corto_script_ast_InitializerValue__assign((corto_script_ast_InitializerValue*)corto_ptr_new(corto_script_ast_InitializerValue_o), key, value)
#define corto_script_ast_InitializerValue__optional_set_cond(__cond, key, value) __cond ? (corto_script_ast_InitializerValue*)corto_script_ast_InitializerValue__assign((corto_script_ast_InitializerValue*)corto_ptr_new(corto_script_ast_InitializerValue_o), key, value) : NULL
#define corto_script_ast_InitializerValue__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_InitializerValue_o), 0 : 0; _this = NULL;
#define corto_script_ast_InitializerValue__assign(_this, key, value) _corto_script_ast_InitializerValue__assign(_this, key, corto_script_ast_Expression(value))
#define corto_script_ast_InitializerValue__set(_this, key, value) _this = _this ? _this : (corto_script_ast_InitializerValue*)corto_ptr_new(corto_script_ast_InitializerValue_o); _corto_script_ast_InitializerValue__assign(_this, key, corto_script_ast_Expression(value))

#define ast_InitializerValue__create corto_script_ast_InitializerValue__create
#define ast_InitializerValue__create_auto corto_script_ast_InitializerValue__create_auto
#define ast_InitializerValue__declare corto_script_ast_InitializerValue__declare
#define ast_InitializerValue__update corto_script_ast_InitializerValue__update
#define ast_InitializerValue__assign corto_script_ast_InitializerValue__assign
#define ast_InitializerValue__set corto_script_ast_InitializerValue__set
#define ast_InitializerValue__unset corto_script_ast_InitializerValue__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define InitializerValue__create corto_script_ast_InitializerValue__create
#define InitializerValue__create_auto corto_script_ast_InitializerValue__create_auto
#define InitializerValue__declare corto_script_ast_InitializerValue__declare
#define InitializerValue__update corto_script_ast_InitializerValue__update
#define InitializerValue__assign corto_script_ast_InitializerValue__assign
#define InitializerValue__set corto_script_ast_InitializerValue__set
#define InitializerValue__unset corto_script_ast_InitializerValue__unset
#endif
#define ast_InitializerValue__call corto_script_ast_InitializerValue__call
#define ast_InitializerValue__init_c corto_script_ast_InitializerValue__init_c
#define ast_InitializerValue__init_c_instance corto_script_ast_InitializerValue__init_c_instance
#define ast_InitializerValue__init_c_instance_auto corto_script_ast_InitializerValue__init_c_instance_auto

/* /corto/script/ast/Integer */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Integer _corto_script_ast_Integer__create(corto_object _parent, const char *_id, const char * unit, uint64_t value);
#define corto_script_ast_Integer__create(_parent, _id, unit, value) _corto_script_ast_Integer__create(_parent, _id, unit, value)
#define corto_script_ast_Integer__create_auto(_parent, _id, unit, value) corto_script_ast_Integer _id = corto_script_ast_Integer__create(_parent, #_id, unit, value); (void)_id
#define corto_script_ast_Integer__declare(parent, id) (corto_script_ast_Integer)corto_declare(parent, id, corto_script_ast_Integer_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Integer__update(corto_script_ast_Integer _this, const char * unit, uint64_t value);
#define corto_script_ast_Integer__update(_this, unit, value) _corto_script_ast_Integer__update(corto_script_ast_Integer(_this), unit, value)
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Integer _corto_script_ast_Integer__assign(corto_script_ast_Integer _this, const char * unit, uint64_t value);
#define corto_script_ast_Integer__optional_not_set NULL
#define corto_script_ast_Integer__optional_set(unit, value) (corto_script_ast_Integer*)corto_script_ast_Integer__assign((corto_script_ast_Integer*)corto_ptr_new(corto_script_ast_Integer_o), unit, value)
#define corto_script_ast_Integer__optional_set_cond(__cond, unit, value) __cond ? (corto_script_ast_Integer*)corto_script_ast_Integer__assign((corto_script_ast_Integer*)corto_ptr_new(corto_script_ast_Integer_o), unit, value) : NULL
#define corto_script_ast_Integer__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Integer_o), 0 : 0; _this = NULL;
#define corto_script_ast_Integer__assign(_this, unit, value) _corto_script_ast_Integer__assign(_this, unit, value)
#define corto_script_ast_Integer__set(_this, unit, value) _this = _this ? _this : (corto_script_ast_Integer*)corto_ptr_new(corto_script_ast_Integer_o); _corto_script_ast_Integer__assign(_this, unit, value)

#define ast_Integer__create corto_script_ast_Integer__create
#define ast_Integer__create_auto corto_script_ast_Integer__create_auto
#define ast_Integer__declare corto_script_ast_Integer__declare
#define ast_Integer__update corto_script_ast_Integer__update
#define ast_Integer__assign corto_script_ast_Integer__assign
#define ast_Integer__set corto_script_ast_Integer__set
#define ast_Integer__unset corto_script_ast_Integer__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Integer__create corto_script_ast_Integer__create
#define Integer__create_auto corto_script_ast_Integer__create_auto
#define Integer__declare corto_script_ast_Integer__declare
#define Integer__update corto_script_ast_Integer__update
#define Integer__assign corto_script_ast_Integer__assign
#define Integer__set corto_script_ast_Integer__set
#define Integer__unset corto_script_ast_Integer__unset
#endif
#define ast_Integer__call corto_script_ast_Integer__call
#define ast_Integer__init_c corto_script_ast_Integer__init_c
#define ast_Integer__init_c_instance corto_script_ast_Integer__init_c_instance
#define ast_Integer__init_c_instance_auto corto_script_ast_Integer__init_c_instance_auto

/* /corto/script/ast/Literal */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Literal _corto_script_ast_Literal__create(corto_object _parent, const char *_id);
#define corto_script_ast_Literal__create(_parent, _id) _corto_script_ast_Literal__create(_parent, _id)
#define corto_script_ast_Literal__create_auto(_parent, _id) corto_script_ast_Literal _id = corto_script_ast_Literal__create(_parent, #_id); (void)_id
#define corto_script_ast_Literal__declare(parent, id) (corto_script_ast_Literal)corto_declare(parent, id, corto_script_ast_Literal_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Literal__update(corto_script_ast_Literal _this);
#define corto_script_ast_Literal__update(_this) _corto_script_ast_Literal__update(corto_script_ast_Literal(_this))
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Literal _corto_script_ast_Literal__assign(corto_script_ast_Literal _this);
#define corto_script_ast_Literal__optional_not_set NULL
#define corto_script_ast_Literal__optional_set() (corto_script_ast_Literal*)corto_script_ast_Literal__assign((corto_script_ast_Literal*)corto_ptr_new(corto_script_ast_Literal_o))
#define corto_script_ast_Literal__optional_set_cond(__cond) __cond ? (corto_script_ast_Literal*)corto_script_ast_Literal__assign((corto_script_ast_Literal*)corto_ptr_new(corto_script_ast_Literal_o)) : NULL
#define corto_script_ast_Literal__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Literal_o), 0 : 0; _this = NULL;
#define corto_script_ast_Literal__assign(_this) _corto_script_ast_Literal__assign(_this)
#define corto_script_ast_Literal__set(_this) _this = _this ? _this : (corto_script_ast_Literal*)corto_ptr_new(corto_script_ast_Literal_o); _corto_script_ast_Literal__assign(_this)

#define ast_Literal__create corto_script_ast_Literal__create
#define ast_Literal__create_auto corto_script_ast_Literal__create_auto
#define ast_Literal__declare corto_script_ast_Literal__declare
#define ast_Literal__update corto_script_ast_Literal__update
#define ast_Literal__assign corto_script_ast_Literal__assign
#define ast_Literal__set corto_script_ast_Literal__set
#define ast_Literal__unset corto_script_ast_Literal__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Literal__create corto_script_ast_Literal__create
#define Literal__create_auto corto_script_ast_Literal__create_auto
#define Literal__declare corto_script_ast_Literal__declare
#define Literal__update corto_script_ast_Literal__update
#define Literal__assign corto_script_ast_Literal__assign
#define Literal__set corto_script_ast_Literal__set
#define Literal__unset corto_script_ast_Literal__unset
#endif
#define ast_Literal__call corto_script_ast_Literal__call
#define ast_Literal__init_c corto_script_ast_Literal__init_c
#define ast_Literal__init_c_instance corto_script_ast_Literal__init_c_instance
#define ast_Literal__init_c_instance_auto corto_script_ast_Literal__init_c_instance_auto

/* /corto/script/ast/Member */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Member _corto_script_ast_Member__create(corto_object _parent, const char *_id, corto_script_ast_Storage expr, const char * key);
#define corto_script_ast_Member__create(_parent, _id, expr, key) _corto_script_ast_Member__create(_parent, _id, corto_script_ast_Storage(expr), key)
#define corto_script_ast_Member__create_auto(_parent, _id, expr, key) corto_script_ast_Member _id = corto_script_ast_Member__create(_parent, #_id, expr, key); (void)_id
#define corto_script_ast_Member__declare(parent, id) (corto_script_ast_Member)corto_declare(parent, id, corto_script_ast_Member_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Member__update(corto_script_ast_Member _this, corto_script_ast_Storage expr, const char * key);
#define corto_script_ast_Member__update(_this, expr, key) _corto_script_ast_Member__update(corto_script_ast_Member(_this), corto_script_ast_Storage(expr), key)
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Member _corto_script_ast_Member__assign(corto_script_ast_Member _this, corto_script_ast_Storage expr, const char * key);
#define corto_script_ast_Member__optional_not_set NULL
#define corto_script_ast_Member__optional_set(expr, key) (corto_script_ast_Member*)corto_script_ast_Member__assign((corto_script_ast_Member*)corto_ptr_new(corto_script_ast_Member_o), expr, key)
#define corto_script_ast_Member__optional_set_cond(__cond, expr, key) __cond ? (corto_script_ast_Member*)corto_script_ast_Member__assign((corto_script_ast_Member*)corto_ptr_new(corto_script_ast_Member_o), expr, key) : NULL
#define corto_script_ast_Member__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Member_o), 0 : 0; _this = NULL;
#define corto_script_ast_Member__assign(_this, expr, key) _corto_script_ast_Member__assign(_this, corto_script_ast_Storage(expr), key)
#define corto_script_ast_Member__set(_this, expr, key) _this = _this ? _this : (corto_script_ast_Member*)corto_ptr_new(corto_script_ast_Member_o); _corto_script_ast_Member__assign(_this, corto_script_ast_Storage(expr), key)

#define ast_Member__create corto_script_ast_Member__create
#define ast_Member__create_auto corto_script_ast_Member__create_auto
#define ast_Member__declare corto_script_ast_Member__declare
#define ast_Member__update corto_script_ast_Member__update
#define ast_Member__assign corto_script_ast_Member__assign
#define ast_Member__set corto_script_ast_Member__set
#define ast_Member__unset corto_script_ast_Member__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Member__create corto_script_ast_Member__create
#define Member__create_auto corto_script_ast_Member__create_auto
#define Member__declare corto_script_ast_Member__declare
#define Member__update corto_script_ast_Member__update
#define Member__assign corto_script_ast_Member__assign
#define Member__set corto_script_ast_Member__set
#define Member__unset corto_script_ast_Member__unset
#endif
#define ast_Member__call corto_script_ast_Member__call
#define ast_Member__init_c corto_script_ast_Member__init_c
#define ast_Member__init_c_instance corto_script_ast_Member__init_c_instance
#define ast_Member__init_c_instance_auto corto_script_ast_Member__init_c_instance_auto

/* /corto/script/ast/Node */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Node _corto_script_ast_Node__create(corto_object _parent, const char *_id);
#define corto_script_ast_Node__create(_parent, _id) _corto_script_ast_Node__create(_parent, _id)
#define corto_script_ast_Node__create_auto(_parent, _id) corto_script_ast_Node _id = corto_script_ast_Node__create(_parent, #_id); (void)_id
#define corto_script_ast_Node__declare(parent, id) (corto_script_ast_Node)corto_declare(parent, id, corto_script_ast_Node_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Node__update(corto_script_ast_Node _this);
#define corto_script_ast_Node__update(_this) _corto_script_ast_Node__update(corto_script_ast_Node(_this))
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Node _corto_script_ast_Node__assign(corto_script_ast_Node _this);
#define corto_script_ast_Node__optional_not_set NULL
#define corto_script_ast_Node__optional_set() (corto_script_ast_Node*)corto_script_ast_Node__assign((corto_script_ast_Node*)corto_ptr_new(corto_script_ast_Node_o))
#define corto_script_ast_Node__optional_set_cond(__cond) __cond ? (corto_script_ast_Node*)corto_script_ast_Node__assign((corto_script_ast_Node*)corto_ptr_new(corto_script_ast_Node_o)) : NULL
#define corto_script_ast_Node__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Node_o), 0 : 0; _this = NULL;
#define corto_script_ast_Node__assign(_this) _corto_script_ast_Node__assign(_this)
#define corto_script_ast_Node__set(_this) _this = _this ? _this : (corto_script_ast_Node*)corto_ptr_new(corto_script_ast_Node_o); _corto_script_ast_Node__assign(_this)

#define ast_Node__create corto_script_ast_Node__create
#define ast_Node__create_auto corto_script_ast_Node__create_auto
#define ast_Node__declare corto_script_ast_Node__declare
#define ast_Node__update corto_script_ast_Node__update
#define ast_Node__assign corto_script_ast_Node__assign
#define ast_Node__set corto_script_ast_Node__set
#define ast_Node__unset corto_script_ast_Node__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Node__create corto_script_ast_Node__create
#define Node__create_auto corto_script_ast_Node__create_auto
#define Node__declare corto_script_ast_Node__declare
#define Node__update corto_script_ast_Node__update
#define Node__assign corto_script_ast_Node__assign
#define Node__set corto_script_ast_Node__set
#define Node__unset corto_script_ast_Node__unset
#endif
#define ast_Node__call corto_script_ast_Node__call
#define ast_Node__init_c corto_script_ast_Node__init_c
#define ast_Node__init_c_instance corto_script_ast_Node__init_c_instance
#define ast_Node__init_c_instance_auto corto_script_ast_Node__init_c_instance_auto

/* /corto/script/ast/Null */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Null _corto_script_ast_Null__create(corto_object _parent, const char *_id);
#define corto_script_ast_Null__create(_parent, _id) _corto_script_ast_Null__create(_parent, _id)
#define corto_script_ast_Null__create_auto(_parent, _id) corto_script_ast_Null _id = corto_script_ast_Null__create(_parent, #_id); (void)_id
#define corto_script_ast_Null__declare(parent, id) (corto_script_ast_Null)corto_declare(parent, id, corto_script_ast_Null_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Null__update(corto_script_ast_Null _this);
#define corto_script_ast_Null__update(_this) _corto_script_ast_Null__update(corto_script_ast_Null(_this))
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Null _corto_script_ast_Null__assign(corto_script_ast_Null _this);
#define corto_script_ast_Null__optional_not_set NULL
#define corto_script_ast_Null__optional_set() (corto_script_ast_Null*)corto_script_ast_Null__assign((corto_script_ast_Null*)corto_ptr_new(corto_script_ast_Null_o))
#define corto_script_ast_Null__optional_set_cond(__cond) __cond ? (corto_script_ast_Null*)corto_script_ast_Null__assign((corto_script_ast_Null*)corto_ptr_new(corto_script_ast_Null_o)) : NULL
#define corto_script_ast_Null__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Null_o), 0 : 0; _this = NULL;
#define corto_script_ast_Null__assign(_this) _corto_script_ast_Null__assign(_this)
#define corto_script_ast_Null__set(_this) _this = _this ? _this : (corto_script_ast_Null*)corto_ptr_new(corto_script_ast_Null_o); _corto_script_ast_Null__assign(_this)

#define ast_Null__create corto_script_ast_Null__create
#define ast_Null__create_auto corto_script_ast_Null__create_auto
#define ast_Null__declare corto_script_ast_Null__declare
#define ast_Null__update corto_script_ast_Null__update
#define ast_Null__assign corto_script_ast_Null__assign
#define ast_Null__set corto_script_ast_Null__set
#define ast_Null__unset corto_script_ast_Null__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Null__create corto_script_ast_Null__create
#define Null__create_auto corto_script_ast_Null__create_auto
#define Null__declare corto_script_ast_Null__declare
#define Null__update corto_script_ast_Null__update
#define Null__assign corto_script_ast_Null__assign
#define Null__set corto_script_ast_Null__set
#define Null__unset corto_script_ast_Null__unset
#endif
#define ast_Null__call corto_script_ast_Null__call
#define ast_Null__init_c corto_script_ast_Null__init_c
#define ast_Null__init_c_instance corto_script_ast_Null__init_c_instance
#define ast_Null__init_c_instance_auto corto_script_ast_Null__init_c_instance_auto

/* /corto/script/ast/Number */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Number _corto_script_ast_Number__create(corto_object _parent, const char *_id, const char * unit);
#define corto_script_ast_Number__create(_parent, _id, unit) _corto_script_ast_Number__create(_parent, _id, unit)
#define corto_script_ast_Number__create_auto(_parent, _id, unit) corto_script_ast_Number _id = corto_script_ast_Number__create(_parent, #_id, unit); (void)_id
#define corto_script_ast_Number__declare(parent, id) (corto_script_ast_Number)corto_declare(parent, id, corto_script_ast_Number_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Number__update(corto_script_ast_Number _this, const char * unit);
#define corto_script_ast_Number__update(_this, unit) _corto_script_ast_Number__update(corto_script_ast_Number(_this), unit)
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Number _corto_script_ast_Number__assign(corto_script_ast_Number _this, const char * unit);
#define corto_script_ast_Number__optional_not_set NULL
#define corto_script_ast_Number__optional_set(unit) (corto_script_ast_Number*)corto_script_ast_Number__assign((corto_script_ast_Number*)corto_ptr_new(corto_script_ast_Number_o), unit)
#define corto_script_ast_Number__optional_set_cond(__cond, unit) __cond ? (corto_script_ast_Number*)corto_script_ast_Number__assign((corto_script_ast_Number*)corto_ptr_new(corto_script_ast_Number_o), unit) : NULL
#define corto_script_ast_Number__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Number_o), 0 : 0; _this = NULL;
#define corto_script_ast_Number__assign(_this, unit) _corto_script_ast_Number__assign(_this, unit)
#define corto_script_ast_Number__set(_this, unit) _this = _this ? _this : (corto_script_ast_Number*)corto_ptr_new(corto_script_ast_Number_o); _corto_script_ast_Number__assign(_this, unit)

#define ast_Number__create corto_script_ast_Number__create
#define ast_Number__create_auto corto_script_ast_Number__create_auto
#define ast_Number__declare corto_script_ast_Number__declare
#define ast_Number__update corto_script_ast_Number__update
#define ast_Number__assign corto_script_ast_Number__assign
#define ast_Number__set corto_script_ast_Number__set
#define ast_Number__unset corto_script_ast_Number__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Number__create corto_script_ast_Number__create
#define Number__create_auto corto_script_ast_Number__create_auto
#define Number__declare corto_script_ast_Number__declare
#define Number__update corto_script_ast_Number__update
#define Number__assign corto_script_ast_Number__assign
#define Number__set corto_script_ast_Number__set
#define Number__unset corto_script_ast_Number__unset
#endif
#define ast_Number__call corto_script_ast_Number__call
#define ast_Number__init_c corto_script_ast_Number__init_c
#define ast_Number__init_c_instance corto_script_ast_Number__init_c_instance
#define ast_Number__init_c_instance_auto corto_script_ast_Number__init_c_instance_auto

/* /corto/script/ast/Scope */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Scope _corto_script_ast_Scope__create(corto_object _parent, const char *_id, corto_script_ast_Scope parent);
#define corto_script_ast_Scope__create(_parent, _id, parent) _corto_script_ast_Scope__create(_parent, _id, corto_script_ast_Scope(parent))
#define corto_script_ast_Scope__create_auto(_parent, _id, parent) corto_script_ast_Scope _id = corto_script_ast_Scope__create(_parent, #_id, parent); (void)_id
#define corto_script_ast_Scope__declare(parent, id) (corto_script_ast_Scope)corto_declare(parent, id, corto_script_ast_Scope_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Scope__update(corto_script_ast_Scope _this, corto_script_ast_Scope parent);
#define corto_script_ast_Scope__update(_this, parent) _corto_script_ast_Scope__update(corto_script_ast_Scope(_this), corto_script_ast_Scope(parent))
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Scope _corto_script_ast_Scope__assign(corto_script_ast_Scope _this, corto_script_ast_Scope parent);
#define corto_script_ast_Scope__optional_not_set NULL
#define corto_script_ast_Scope__optional_set(parent) (corto_script_ast_Scope*)corto_script_ast_Scope__assign((corto_script_ast_Scope*)corto_ptr_new(corto_script_ast_Scope_o), parent)
#define corto_script_ast_Scope__optional_set_cond(__cond, parent) __cond ? (corto_script_ast_Scope*)corto_script_ast_Scope__assign((corto_script_ast_Scope*)corto_ptr_new(corto_script_ast_Scope_o), parent) : NULL
#define corto_script_ast_Scope__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Scope_o), 0 : 0; _this = NULL;
#define corto_script_ast_Scope__assign(_this, parent) _corto_script_ast_Scope__assign(_this, corto_script_ast_Scope(parent))
#define corto_script_ast_Scope__set(_this, parent) _this = _this ? _this : (corto_script_ast_Scope*)corto_ptr_new(corto_script_ast_Scope_o); _corto_script_ast_Scope__assign(_this, corto_script_ast_Scope(parent))

#define ast_Scope__create corto_script_ast_Scope__create
#define ast_Scope__create_auto corto_script_ast_Scope__create_auto
#define ast_Scope__declare corto_script_ast_Scope__declare
#define ast_Scope__update corto_script_ast_Scope__update
#define ast_Scope__assign corto_script_ast_Scope__assign
#define ast_Scope__set corto_script_ast_Scope__set
#define ast_Scope__unset corto_script_ast_Scope__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Scope__create corto_script_ast_Scope__create
#define Scope__create_auto corto_script_ast_Scope__create_auto
#define Scope__declare corto_script_ast_Scope__declare
#define Scope__update corto_script_ast_Scope__update
#define Scope__assign corto_script_ast_Scope__assign
#define Scope__set corto_script_ast_Scope__set
#define Scope__unset corto_script_ast_Scope__unset
#endif
#define ast_Scope__call corto_script_ast_Scope__call
#define ast_Scope__init_c corto_script_ast_Scope__init_c
#define ast_Scope__init_c_instance corto_script_ast_Scope__init_c_instance
#define ast_Scope__init_c_instance_auto corto_script_ast_Scope__init_c_instance_auto

/* /corto/script/ast/SignedInteger */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_SignedInteger _corto_script_ast_SignedInteger__create(corto_object _parent, const char *_id, const char * unit, int64_t value);
#define corto_script_ast_SignedInteger__create(_parent, _id, unit, value) _corto_script_ast_SignedInteger__create(_parent, _id, unit, value)
#define corto_script_ast_SignedInteger__create_auto(_parent, _id, unit, value) corto_script_ast_SignedInteger _id = corto_script_ast_SignedInteger__create(_parent, #_id, unit, value); (void)_id
#define corto_script_ast_SignedInteger__declare(parent, id) (corto_script_ast_SignedInteger)corto_declare(parent, id, corto_script_ast_SignedInteger_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_SignedInteger__update(corto_script_ast_SignedInteger _this, const char * unit, int64_t value);
#define corto_script_ast_SignedInteger__update(_this, unit, value) _corto_script_ast_SignedInteger__update(corto_script_ast_SignedInteger(_this), unit, value)
CORTO_SCRIPT_AST_EXPORT corto_script_ast_SignedInteger _corto_script_ast_SignedInteger__assign(corto_script_ast_SignedInteger _this, const char * unit, int64_t value);
#define corto_script_ast_SignedInteger__optional_not_set NULL
#define corto_script_ast_SignedInteger__optional_set(unit, value) (corto_script_ast_SignedInteger*)corto_script_ast_SignedInteger__assign((corto_script_ast_SignedInteger*)corto_ptr_new(corto_script_ast_SignedInteger_o), unit, value)
#define corto_script_ast_SignedInteger__optional_set_cond(__cond, unit, value) __cond ? (corto_script_ast_SignedInteger*)corto_script_ast_SignedInteger__assign((corto_script_ast_SignedInteger*)corto_ptr_new(corto_script_ast_SignedInteger_o), unit, value) : NULL
#define corto_script_ast_SignedInteger__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_SignedInteger_o), 0 : 0; _this = NULL;
#define corto_script_ast_SignedInteger__assign(_this, unit, value) _corto_script_ast_SignedInteger__assign(_this, unit, value)
#define corto_script_ast_SignedInteger__set(_this, unit, value) _this = _this ? _this : (corto_script_ast_SignedInteger*)corto_ptr_new(corto_script_ast_SignedInteger_o); _corto_script_ast_SignedInteger__assign(_this, unit, value)

#define ast_SignedInteger__create corto_script_ast_SignedInteger__create
#define ast_SignedInteger__create_auto corto_script_ast_SignedInteger__create_auto
#define ast_SignedInteger__declare corto_script_ast_SignedInteger__declare
#define ast_SignedInteger__update corto_script_ast_SignedInteger__update
#define ast_SignedInteger__assign corto_script_ast_SignedInteger__assign
#define ast_SignedInteger__set corto_script_ast_SignedInteger__set
#define ast_SignedInteger__unset corto_script_ast_SignedInteger__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define SignedInteger__create corto_script_ast_SignedInteger__create
#define SignedInteger__create_auto corto_script_ast_SignedInteger__create_auto
#define SignedInteger__declare corto_script_ast_SignedInteger__declare
#define SignedInteger__update corto_script_ast_SignedInteger__update
#define SignedInteger__assign corto_script_ast_SignedInteger__assign
#define SignedInteger__set corto_script_ast_SignedInteger__set
#define SignedInteger__unset corto_script_ast_SignedInteger__unset
#endif
#define ast_SignedInteger__call corto_script_ast_SignedInteger__call
#define ast_SignedInteger__init_c corto_script_ast_SignedInteger__init_c
#define ast_SignedInteger__init_c_instance corto_script_ast_SignedInteger__init_c_instance
#define ast_SignedInteger__init_c_instance_auto corto_script_ast_SignedInteger__init_c_instance_auto

/* /corto/script/ast/Statement */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Statement _corto_script_ast_Statement__create(corto_object _parent, const char *_id);
#define corto_script_ast_Statement__create(_parent, _id) _corto_script_ast_Statement__create(_parent, _id)
#define corto_script_ast_Statement__create_auto(_parent, _id) corto_script_ast_Statement _id = corto_script_ast_Statement__create(_parent, #_id); (void)_id
#define corto_script_ast_Statement__declare(parent, id) (corto_script_ast_Statement)corto_declare(parent, id, corto_script_ast_Statement_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Statement__update(corto_script_ast_Statement _this);
#define corto_script_ast_Statement__update(_this) _corto_script_ast_Statement__update(corto_script_ast_Statement(_this))
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Statement _corto_script_ast_Statement__assign(corto_script_ast_Statement _this);
#define corto_script_ast_Statement__optional_not_set NULL
#define corto_script_ast_Statement__optional_set() (corto_script_ast_Statement*)corto_script_ast_Statement__assign((corto_script_ast_Statement*)corto_ptr_new(corto_script_ast_Statement_o))
#define corto_script_ast_Statement__optional_set_cond(__cond) __cond ? (corto_script_ast_Statement*)corto_script_ast_Statement__assign((corto_script_ast_Statement*)corto_ptr_new(corto_script_ast_Statement_o)) : NULL
#define corto_script_ast_Statement__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Statement_o), 0 : 0; _this = NULL;
#define corto_script_ast_Statement__assign(_this) _corto_script_ast_Statement__assign(_this)
#define corto_script_ast_Statement__set(_this) _this = _this ? _this : (corto_script_ast_Statement*)corto_ptr_new(corto_script_ast_Statement_o); _corto_script_ast_Statement__assign(_this)

#define ast_Statement__create corto_script_ast_Statement__create
#define ast_Statement__create_auto corto_script_ast_Statement__create_auto
#define ast_Statement__declare corto_script_ast_Statement__declare
#define ast_Statement__update corto_script_ast_Statement__update
#define ast_Statement__assign corto_script_ast_Statement__assign
#define ast_Statement__set corto_script_ast_Statement__set
#define ast_Statement__unset corto_script_ast_Statement__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Statement__create corto_script_ast_Statement__create
#define Statement__create_auto corto_script_ast_Statement__create_auto
#define Statement__declare corto_script_ast_Statement__declare
#define Statement__update corto_script_ast_Statement__update
#define Statement__assign corto_script_ast_Statement__assign
#define Statement__set corto_script_ast_Statement__set
#define Statement__unset corto_script_ast_Statement__unset
#endif
#define ast_Statement__call corto_script_ast_Statement__call
#define ast_Statement__init_c corto_script_ast_Statement__init_c
#define ast_Statement__init_c_instance corto_script_ast_Statement__init_c_instance
#define ast_Statement__init_c_instance_auto corto_script_ast_Statement__init_c_instance_auto

/* /corto/script/ast/Storage */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Storage _corto_script_ast_Storage__create(corto_object _parent, const char *_id);
#define corto_script_ast_Storage__create(_parent, _id) _corto_script_ast_Storage__create(_parent, _id)
#define corto_script_ast_Storage__create_auto(_parent, _id) corto_script_ast_Storage _id = corto_script_ast_Storage__create(_parent, #_id); (void)_id
#define corto_script_ast_Storage__declare(parent, id) (corto_script_ast_Storage)corto_declare(parent, id, corto_script_ast_Storage_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Storage__update(corto_script_ast_Storage _this);
#define corto_script_ast_Storage__update(_this) _corto_script_ast_Storage__update(corto_script_ast_Storage(_this))
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Storage _corto_script_ast_Storage__assign(corto_script_ast_Storage _this);
#define corto_script_ast_Storage__optional_not_set NULL
#define corto_script_ast_Storage__optional_set() (corto_script_ast_Storage*)corto_script_ast_Storage__assign((corto_script_ast_Storage*)corto_ptr_new(corto_script_ast_Storage_o))
#define corto_script_ast_Storage__optional_set_cond(__cond) __cond ? (corto_script_ast_Storage*)corto_script_ast_Storage__assign((corto_script_ast_Storage*)corto_ptr_new(corto_script_ast_Storage_o)) : NULL
#define corto_script_ast_Storage__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Storage_o), 0 : 0; _this = NULL;
#define corto_script_ast_Storage__assign(_this) _corto_script_ast_Storage__assign(_this)
#define corto_script_ast_Storage__set(_this) _this = _this ? _this : (corto_script_ast_Storage*)corto_ptr_new(corto_script_ast_Storage_o); _corto_script_ast_Storage__assign(_this)

#define ast_Storage__create corto_script_ast_Storage__create
#define ast_Storage__create_auto corto_script_ast_Storage__create_auto
#define ast_Storage__declare corto_script_ast_Storage__declare
#define ast_Storage__update corto_script_ast_Storage__update
#define ast_Storage__assign corto_script_ast_Storage__assign
#define ast_Storage__set corto_script_ast_Storage__set
#define ast_Storage__unset corto_script_ast_Storage__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Storage__create corto_script_ast_Storage__create
#define Storage__create_auto corto_script_ast_Storage__create_auto
#define Storage__declare corto_script_ast_Storage__declare
#define Storage__update corto_script_ast_Storage__update
#define Storage__assign corto_script_ast_Storage__assign
#define Storage__set corto_script_ast_Storage__set
#define Storage__unset corto_script_ast_Storage__unset
#endif
#define ast_Storage__call corto_script_ast_Storage__call
#define ast_Storage__init_c corto_script_ast_Storage__init_c
#define ast_Storage__init_c_instance corto_script_ast_Storage__init_c_instance
#define ast_Storage__init_c_instance_auto corto_script_ast_Storage__init_c_instance_auto

/* /corto/script/ast/StorageInitializer */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_StorageInitializer _corto_script_ast_StorageInitializer__create(corto_object _parent, const char *_id, corto_script_ast_Storage expr, corto_script_ast_Initializer initializer);
#define corto_script_ast_StorageInitializer__create(_parent, _id, expr, initializer) _corto_script_ast_StorageInitializer__create(_parent, _id, corto_script_ast_Storage(expr), corto_script_ast_Initializer(initializer))
#define corto_script_ast_StorageInitializer__create_auto(_parent, _id, expr, initializer) corto_script_ast_StorageInitializer _id = corto_script_ast_StorageInitializer__create(_parent, #_id, expr, initializer); (void)_id
#define corto_script_ast_StorageInitializer__declare(parent, id) (corto_script_ast_StorageInitializer)corto_declare(parent, id, corto_script_ast_StorageInitializer_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_StorageInitializer__update(corto_script_ast_StorageInitializer _this, corto_script_ast_Storage expr, corto_script_ast_Initializer initializer);
#define corto_script_ast_StorageInitializer__update(_this, expr, initializer) _corto_script_ast_StorageInitializer__update(corto_script_ast_StorageInitializer(_this), corto_script_ast_Storage(expr), corto_script_ast_Initializer(initializer))
CORTO_SCRIPT_AST_EXPORT corto_script_ast_StorageInitializer _corto_script_ast_StorageInitializer__assign(corto_script_ast_StorageInitializer _this, corto_script_ast_Storage expr, corto_script_ast_Initializer initializer);
#define corto_script_ast_StorageInitializer__optional_not_set NULL
#define corto_script_ast_StorageInitializer__optional_set(expr, initializer) (corto_script_ast_StorageInitializer*)corto_script_ast_StorageInitializer__assign((corto_script_ast_StorageInitializer*)corto_ptr_new(corto_script_ast_StorageInitializer_o), expr, initializer)
#define corto_script_ast_StorageInitializer__optional_set_cond(__cond, expr, initializer) __cond ? (corto_script_ast_StorageInitializer*)corto_script_ast_StorageInitializer__assign((corto_script_ast_StorageInitializer*)corto_ptr_new(corto_script_ast_StorageInitializer_o), expr, initializer) : NULL
#define corto_script_ast_StorageInitializer__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_StorageInitializer_o), 0 : 0; _this = NULL;
#define corto_script_ast_StorageInitializer__assign(_this, expr, initializer) _corto_script_ast_StorageInitializer__assign(_this, corto_script_ast_Storage(expr), corto_script_ast_Initializer(initializer))
#define corto_script_ast_StorageInitializer__set(_this, expr, initializer) _this = _this ? _this : (corto_script_ast_StorageInitializer*)corto_ptr_new(corto_script_ast_StorageInitializer_o); _corto_script_ast_StorageInitializer__assign(_this, corto_script_ast_Storage(expr), corto_script_ast_Initializer(initializer))

#define ast_StorageInitializer__create corto_script_ast_StorageInitializer__create
#define ast_StorageInitializer__create_auto corto_script_ast_StorageInitializer__create_auto
#define ast_StorageInitializer__declare corto_script_ast_StorageInitializer__declare
#define ast_StorageInitializer__update corto_script_ast_StorageInitializer__update
#define ast_StorageInitializer__assign corto_script_ast_StorageInitializer__assign
#define ast_StorageInitializer__set corto_script_ast_StorageInitializer__set
#define ast_StorageInitializer__unset corto_script_ast_StorageInitializer__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define StorageInitializer__create corto_script_ast_StorageInitializer__create
#define StorageInitializer__create_auto corto_script_ast_StorageInitializer__create_auto
#define StorageInitializer__declare corto_script_ast_StorageInitializer__declare
#define StorageInitializer__update corto_script_ast_StorageInitializer__update
#define StorageInitializer__assign corto_script_ast_StorageInitializer__assign
#define StorageInitializer__set corto_script_ast_StorageInitializer__set
#define StorageInitializer__unset corto_script_ast_StorageInitializer__unset
#endif
#define ast_StorageInitializer__call corto_script_ast_StorageInitializer__call
#define ast_StorageInitializer__init_c corto_script_ast_StorageInitializer__init_c
#define ast_StorageInitializer__init_c_instance corto_script_ast_StorageInitializer__init_c_instance
#define ast_StorageInitializer__init_c_instance_auto corto_script_ast_StorageInitializer__init_c_instance_auto

/* /corto/script/ast/String */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_String _corto_script_ast_String__create(corto_object _parent, const char *_id, const char * value, char delim);
#define corto_script_ast_String__create(_parent, _id, value, delim) _corto_script_ast_String__create(_parent, _id, value, delim)
#define corto_script_ast_String__create_auto(_parent, _id, value, delim) corto_script_ast_String _id = corto_script_ast_String__create(_parent, #_id, value, delim); (void)_id
#define corto_script_ast_String__declare(parent, id) (corto_script_ast_String)corto_declare(parent, id, corto_script_ast_String_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_String__update(corto_script_ast_String _this, const char * value, char delim);
#define corto_script_ast_String__update(_this, value, delim) _corto_script_ast_String__update(corto_script_ast_String(_this), value, delim)
CORTO_SCRIPT_AST_EXPORT corto_script_ast_String _corto_script_ast_String__assign(corto_script_ast_String _this, const char * value, char delim);
#define corto_script_ast_String__optional_not_set NULL
#define corto_script_ast_String__optional_set(value, delim) (corto_script_ast_String*)corto_script_ast_String__assign((corto_script_ast_String*)corto_ptr_new(corto_script_ast_String_o), value, delim)
#define corto_script_ast_String__optional_set_cond(__cond, value, delim) __cond ? (corto_script_ast_String*)corto_script_ast_String__assign((corto_script_ast_String*)corto_ptr_new(corto_script_ast_String_o), value, delim) : NULL
#define corto_script_ast_String__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_String_o), 0 : 0; _this = NULL;
#define corto_script_ast_String__assign(_this, value, delim) _corto_script_ast_String__assign(_this, value, delim)
#define corto_script_ast_String__set(_this, value, delim) _this = _this ? _this : (corto_script_ast_String*)corto_ptr_new(corto_script_ast_String_o); _corto_script_ast_String__assign(_this, value, delim)

#define ast_String__create corto_script_ast_String__create
#define ast_String__create_auto corto_script_ast_String__create_auto
#define ast_String__declare corto_script_ast_String__declare
#define ast_String__update corto_script_ast_String__update
#define ast_String__assign corto_script_ast_String__assign
#define ast_String__set corto_script_ast_String__set
#define ast_String__unset corto_script_ast_String__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define String__create corto_script_ast_String__create
#define String__create_auto corto_script_ast_String__create_auto
#define String__declare corto_script_ast_String__declare
#define String__update corto_script_ast_String__update
#define String__assign corto_script_ast_String__assign
#define String__set corto_script_ast_String__set
#define String__unset corto_script_ast_String__unset
#endif
#define ast_String__call corto_script_ast_String__call
#define ast_String__init_c corto_script_ast_String__init_c
#define ast_String__init_c_instance corto_script_ast_String__init_c_instance
#define ast_String__init_c_instance_auto corto_script_ast_String__init_c_instance_auto

/* /corto/script/ast/Ternary */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Ternary _corto_script_ast_Ternary__create(corto_object _parent, const char *_id, corto_script_ast_Expression cond, corto_script_ast_Expression _true, corto_script_ast_Expression _false);
#define corto_script_ast_Ternary__create(_parent, _id, cond, _true, _false) _corto_script_ast_Ternary__create(_parent, _id, corto_script_ast_Expression(cond), corto_script_ast_Expression(_true), corto_script_ast_Expression(_false))
#define corto_script_ast_Ternary__create_auto(_parent, _id, cond, _true, _false) corto_script_ast_Ternary _id = corto_script_ast_Ternary__create(_parent, #_id, cond, _true, _false); (void)_id
#define corto_script_ast_Ternary__declare(parent, id) (corto_script_ast_Ternary)corto_declare(parent, id, corto_script_ast_Ternary_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Ternary__update(corto_script_ast_Ternary _this, corto_script_ast_Expression cond, corto_script_ast_Expression _true, corto_script_ast_Expression _false);
#define corto_script_ast_Ternary__update(_this, cond, _true, _false) _corto_script_ast_Ternary__update(corto_script_ast_Ternary(_this), corto_script_ast_Expression(cond), corto_script_ast_Expression(_true), corto_script_ast_Expression(_false))
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Ternary _corto_script_ast_Ternary__assign(corto_script_ast_Ternary _this, corto_script_ast_Expression cond, corto_script_ast_Expression _true, corto_script_ast_Expression _false);
#define corto_script_ast_Ternary__optional_not_set NULL
#define corto_script_ast_Ternary__optional_set(cond, _true, _false) (corto_script_ast_Ternary*)corto_script_ast_Ternary__assign((corto_script_ast_Ternary*)corto_ptr_new(corto_script_ast_Ternary_o), cond, _true, _false)
#define corto_script_ast_Ternary__optional_set_cond(__cond, cond, _true, _false) __cond ? (corto_script_ast_Ternary*)corto_script_ast_Ternary__assign((corto_script_ast_Ternary*)corto_ptr_new(corto_script_ast_Ternary_o), cond, _true, _false) : NULL
#define corto_script_ast_Ternary__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Ternary_o), 0 : 0; _this = NULL;
#define corto_script_ast_Ternary__assign(_this, cond, _true, _false) _corto_script_ast_Ternary__assign(_this, corto_script_ast_Expression(cond), corto_script_ast_Expression(_true), corto_script_ast_Expression(_false))
#define corto_script_ast_Ternary__set(_this, cond, _true, _false) _this = _this ? _this : (corto_script_ast_Ternary*)corto_ptr_new(corto_script_ast_Ternary_o); _corto_script_ast_Ternary__assign(_this, corto_script_ast_Expression(cond), corto_script_ast_Expression(_true), corto_script_ast_Expression(_false))

#define ast_Ternary__create corto_script_ast_Ternary__create
#define ast_Ternary__create_auto corto_script_ast_Ternary__create_auto
#define ast_Ternary__declare corto_script_ast_Ternary__declare
#define ast_Ternary__update corto_script_ast_Ternary__update
#define ast_Ternary__assign corto_script_ast_Ternary__assign
#define ast_Ternary__set corto_script_ast_Ternary__set
#define ast_Ternary__unset corto_script_ast_Ternary__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Ternary__create corto_script_ast_Ternary__create
#define Ternary__create_auto corto_script_ast_Ternary__create_auto
#define Ternary__declare corto_script_ast_Ternary__declare
#define Ternary__update corto_script_ast_Ternary__update
#define Ternary__assign corto_script_ast_Ternary__assign
#define Ternary__set corto_script_ast_Ternary__set
#define Ternary__unset corto_script_ast_Ternary__unset
#endif
#define ast_Ternary__call corto_script_ast_Ternary__call
#define ast_Ternary__init_c corto_script_ast_Ternary__init_c
#define ast_Ternary__init_c_instance corto_script_ast_Ternary__init_c_instance
#define ast_Ternary__init_c_instance_auto corto_script_ast_Ternary__init_c_instance_auto

/* /corto/script/ast/Unary */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Unary _corto_script_ast_Unary__create(corto_object _parent, const char *_id, corto_script_ast_Expression expr, corto_operatorKind _operator, bool postfix);
#define corto_script_ast_Unary__create(_parent, _id, expr, _operator, postfix) _corto_script_ast_Unary__create(_parent, _id, corto_script_ast_Expression(expr), _operator, postfix)
#define corto_script_ast_Unary__create_auto(_parent, _id, expr, _operator, postfix) corto_script_ast_Unary _id = corto_script_ast_Unary__create(_parent, #_id, expr, _operator, postfix); (void)_id
#define corto_script_ast_Unary__declare(parent, id) (corto_script_ast_Unary)corto_declare(parent, id, corto_script_ast_Unary_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Unary__update(corto_script_ast_Unary _this, corto_script_ast_Expression expr, corto_operatorKind _operator, bool postfix);
#define corto_script_ast_Unary__update(_this, expr, _operator, postfix) _corto_script_ast_Unary__update(corto_script_ast_Unary(_this), corto_script_ast_Expression(expr), _operator, postfix)
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Unary _corto_script_ast_Unary__assign(corto_script_ast_Unary _this, corto_script_ast_Expression expr, corto_operatorKind _operator, bool postfix);
#define corto_script_ast_Unary__optional_not_set NULL
#define corto_script_ast_Unary__optional_set(expr, _operator, postfix) (corto_script_ast_Unary*)corto_script_ast_Unary__assign((corto_script_ast_Unary*)corto_ptr_new(corto_script_ast_Unary_o), expr, _operator, postfix)
#define corto_script_ast_Unary__optional_set_cond(__cond, expr, _operator, postfix) __cond ? (corto_script_ast_Unary*)corto_script_ast_Unary__assign((corto_script_ast_Unary*)corto_ptr_new(corto_script_ast_Unary_o), expr, _operator, postfix) : NULL
#define corto_script_ast_Unary__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Unary_o), 0 : 0; _this = NULL;
#define corto_script_ast_Unary__assign(_this, expr, _operator, postfix) _corto_script_ast_Unary__assign(_this, corto_script_ast_Expression(expr), _operator, postfix)
#define corto_script_ast_Unary__set(_this, expr, _operator, postfix) _this = _this ? _this : (corto_script_ast_Unary*)corto_ptr_new(corto_script_ast_Unary_o); _corto_script_ast_Unary__assign(_this, corto_script_ast_Expression(expr), _operator, postfix)

#define ast_Unary__create corto_script_ast_Unary__create
#define ast_Unary__create_auto corto_script_ast_Unary__create_auto
#define ast_Unary__declare corto_script_ast_Unary__declare
#define ast_Unary__update corto_script_ast_Unary__update
#define ast_Unary__assign corto_script_ast_Unary__assign
#define ast_Unary__set corto_script_ast_Unary__set
#define ast_Unary__unset corto_script_ast_Unary__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Unary__create corto_script_ast_Unary__create
#define Unary__create_auto corto_script_ast_Unary__create_auto
#define Unary__declare corto_script_ast_Unary__declare
#define Unary__update corto_script_ast_Unary__update
#define Unary__assign corto_script_ast_Unary__assign
#define Unary__set corto_script_ast_Unary__set
#define Unary__unset corto_script_ast_Unary__unset
#endif
#define ast_Unary__call corto_script_ast_Unary__call
#define ast_Unary__init_c corto_script_ast_Unary__init_c
#define ast_Unary__init_c_instance corto_script_ast_Unary__init_c_instance
#define ast_Unary__init_c_instance_auto corto_script_ast_Unary__init_c_instance_auto

/* /corto/script/ast/Use */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Use _corto_script_ast_Use__create(corto_object _parent, const char *_id, const char * package, const char * alias, bool as_typesystem);
#define corto_script_ast_Use__create(_parent, _id, package, alias, as_typesystem) _corto_script_ast_Use__create(_parent, _id, package, alias, as_typesystem)
#define corto_script_ast_Use__create_auto(_parent, _id, package, alias, as_typesystem) corto_script_ast_Use _id = corto_script_ast_Use__create(_parent, #_id, package, alias, as_typesystem); (void)_id
#define corto_script_ast_Use__declare(parent, id) (corto_script_ast_Use)corto_declare(parent, id, corto_script_ast_Use_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Use__update(corto_script_ast_Use _this, const char * package, const char * alias, bool as_typesystem);
#define corto_script_ast_Use__update(_this, package, alias, as_typesystem) _corto_script_ast_Use__update(corto_script_ast_Use(_this), package, alias, as_typesystem)
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Use _corto_script_ast_Use__assign(corto_script_ast_Use _this, const char * package, const char * alias, bool as_typesystem);
#define corto_script_ast_Use__optional_not_set NULL
#define corto_script_ast_Use__optional_set(package, alias, as_typesystem) (corto_script_ast_Use*)corto_script_ast_Use__assign((corto_script_ast_Use*)corto_ptr_new(corto_script_ast_Use_o), package, alias, as_typesystem)
#define corto_script_ast_Use__optional_set_cond(__cond, package, alias, as_typesystem) __cond ? (corto_script_ast_Use*)corto_script_ast_Use__assign((corto_script_ast_Use*)corto_ptr_new(corto_script_ast_Use_o), package, alias, as_typesystem) : NULL
#define corto_script_ast_Use__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Use_o), 0 : 0; _this = NULL;
#define corto_script_ast_Use__assign(_this, package, alias, as_typesystem) _corto_script_ast_Use__assign(_this, package, alias, as_typesystem)
#define corto_script_ast_Use__set(_this, package, alias, as_typesystem) _this = _this ? _this : (corto_script_ast_Use*)corto_ptr_new(corto_script_ast_Use_o); _corto_script_ast_Use__assign(_this, package, alias, as_typesystem)

#define ast_Use__create corto_script_ast_Use__create
#define ast_Use__create_auto corto_script_ast_Use__create_auto
#define ast_Use__declare corto_script_ast_Use__declare
#define ast_Use__update corto_script_ast_Use__update
#define ast_Use__assign corto_script_ast_Use__assign
#define ast_Use__set corto_script_ast_Use__set
#define ast_Use__unset corto_script_ast_Use__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Use__create corto_script_ast_Use__create
#define Use__create_auto corto_script_ast_Use__create_auto
#define Use__declare corto_script_ast_Use__declare
#define Use__update corto_script_ast_Use__update
#define Use__assign corto_script_ast_Use__assign
#define Use__set corto_script_ast_Use__set
#define Use__unset corto_script_ast_Use__unset
#endif
#define ast_Use__call corto_script_ast_Use__call
#define ast_Use__init_c corto_script_ast_Use__init_c
#define ast_Use__init_c_instance corto_script_ast_Use__init_c_instance
#define ast_Use__init_c_instance_auto corto_script_ast_Use__init_c_instance_auto

/* /corto/script/ast/Visitor */
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Visitor _corto_script_ast_Visitor__create(corto_object _parent, const char *_id, const char * file);
#define corto_script_ast_Visitor__create(_parent, _id, file) _corto_script_ast_Visitor__create(_parent, _id, file)
#define corto_script_ast_Visitor__create_auto(_parent, _id, file) corto_script_ast_Visitor _id = corto_script_ast_Visitor__create(_parent, #_id, file); (void)_id
#define corto_script_ast_Visitor__declare(parent, id) (corto_script_ast_Visitor)corto_declare(parent, id, corto_script_ast_Visitor_o)
CORTO_SCRIPT_AST_EXPORT corto_int16 _corto_script_ast_Visitor__update(corto_script_ast_Visitor _this, const char * file);
#define corto_script_ast_Visitor__update(_this, file) _corto_script_ast_Visitor__update(corto_script_ast_Visitor(_this), file)
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Visitor _corto_script_ast_Visitor__assign(corto_script_ast_Visitor _this, const char * file);
#define corto_script_ast_Visitor__optional_not_set NULL
#define corto_script_ast_Visitor__optional_set(file) (corto_script_ast_Visitor*)corto_script_ast_Visitor__assign((corto_script_ast_Visitor*)corto_ptr_new(corto_script_ast_Visitor_o), file)
#define corto_script_ast_Visitor__optional_set_cond(__cond, file) __cond ? (corto_script_ast_Visitor*)corto_script_ast_Visitor__assign((corto_script_ast_Visitor*)corto_ptr_new(corto_script_ast_Visitor_o), file) : NULL
#define corto_script_ast_Visitor__unset(_this) _this ? corto_ptr_free(_this, corto_script_ast_Visitor_o), 0 : 0; _this = NULL;
#define corto_script_ast_Visitor__assign(_this, file) _corto_script_ast_Visitor__assign(_this, file)
#define corto_script_ast_Visitor__set(_this, file) _this = _this ? _this : (corto_script_ast_Visitor*)corto_ptr_new(corto_script_ast_Visitor_o); _corto_script_ast_Visitor__assign(_this, file)

#define ast_Visitor__create corto_script_ast_Visitor__create
#define ast_Visitor__create_auto corto_script_ast_Visitor__create_auto
#define ast_Visitor__declare corto_script_ast_Visitor__declare
#define ast_Visitor__update corto_script_ast_Visitor__update
#define ast_Visitor__assign corto_script_ast_Visitor__assign
#define ast_Visitor__set corto_script_ast_Visitor__set
#define ast_Visitor__unset corto_script_ast_Visitor__unset

#ifdef CORTO_SCRIPT_AST_IMPL
#define Visitor__create corto_script_ast_Visitor__create
#define Visitor__create_auto corto_script_ast_Visitor__create_auto
#define Visitor__declare corto_script_ast_Visitor__declare
#define Visitor__update corto_script_ast_Visitor__update
#define Visitor__assign corto_script_ast_Visitor__assign
#define Visitor__set corto_script_ast_Visitor__set
#define Visitor__unset corto_script_ast_Visitor__unset
#endif
#define ast_Visitor__call corto_script_ast_Visitor__call
#define ast_Visitor__init_c corto_script_ast_Visitor__init_c
#define ast_Visitor__init_c_instance corto_script_ast_Visitor__init_c_instance
#define ast_Visitor__init_c_instance_auto corto_script_ast_Visitor__init_c_instance_auto


/* list{/corto/script/ast/FunctionArgument,0} */
CORTO_SCRIPT_AST_EXPORT void corto_script_ast_FunctionArgumentList__insert(corto_script_ast_FunctionArgumentList list, corto_script_ast_FunctionArgument element);
CORTO_SCRIPT_AST_EXPORT void corto_script_ast_FunctionArgumentList__append(corto_script_ast_FunctionArgumentList list, corto_script_ast_FunctionArgument element);
CORTO_SCRIPT_AST_EXPORT void corto_script_ast_FunctionArgumentList__remove(corto_script_ast_FunctionArgumentList list, corto_script_ast_FunctionArgument element);
CORTO_SCRIPT_AST_EXPORT corto_script_ast_FunctionArgument corto_script_ast_FunctionArgumentList__takeFirst(corto_script_ast_FunctionArgumentList list);
CORTO_SCRIPT_AST_EXPORT corto_script_ast_FunctionArgument corto_script_ast_FunctionArgumentList__last(corto_script_ast_FunctionArgumentList list);
CORTO_SCRIPT_AST_EXPORT corto_script_ast_FunctionArgument corto_script_ast_FunctionArgumentList__get(corto_script_ast_FunctionArgumentList list, corto_uint32 index);
CORTO_SCRIPT_AST_EXPORT void corto_script_ast_FunctionArgumentList__clear(corto_script_ast_FunctionArgumentList list);

#define ast_FunctionArgumentList__insert corto_script_ast_FunctionArgumentList__insert
#define ast_FunctionArgumentList__append corto_script_ast_FunctionArgumentList__append
#define ast_FunctionArgumentList__append_alloc corto_script_ast_FunctionArgumentList__append_alloc
#define ast_FunctionArgumentList__remove corto_script_ast_FunctionArgumentList__remove
#define ast_FunctionArgumentList__takeFirst corto_script_ast_FunctionArgumentList__takeFirst
#define ast_FunctionArgumentList__last corto_script_ast_FunctionArgumentList__last
#define ast_FunctionArgumentList__get corto_script_ast_FunctionArgumentList__get
#define ast_FunctionArgumentList__clear corto_script_ast_FunctionArgumentList__clear

/* list{/corto/script/ast/InitializerValue,0} */
CORTO_SCRIPT_AST_EXPORT void corto_script_ast_InitializerValueList__insert(corto_script_ast_InitializerValueList list, corto_script_ast_InitializerValue element);
CORTO_SCRIPT_AST_EXPORT void corto_script_ast_InitializerValueList__append(corto_script_ast_InitializerValueList list, corto_script_ast_InitializerValue element);
CORTO_SCRIPT_AST_EXPORT void corto_script_ast_InitializerValueList__remove(corto_script_ast_InitializerValueList list, corto_script_ast_InitializerValue element);
CORTO_SCRIPT_AST_EXPORT corto_script_ast_InitializerValue corto_script_ast_InitializerValueList__takeFirst(corto_script_ast_InitializerValueList list);
CORTO_SCRIPT_AST_EXPORT corto_script_ast_InitializerValue corto_script_ast_InitializerValueList__last(corto_script_ast_InitializerValueList list);
CORTO_SCRIPT_AST_EXPORT corto_script_ast_InitializerValue corto_script_ast_InitializerValueList__get(corto_script_ast_InitializerValueList list, corto_uint32 index);
CORTO_SCRIPT_AST_EXPORT void corto_script_ast_InitializerValueList__clear(corto_script_ast_InitializerValueList list);

#define ast_InitializerValueList__insert corto_script_ast_InitializerValueList__insert
#define ast_InitializerValueList__append corto_script_ast_InitializerValueList__append
#define ast_InitializerValueList__append_alloc corto_script_ast_InitializerValueList__append_alloc
#define ast_InitializerValueList__remove corto_script_ast_InitializerValueList__remove
#define ast_InitializerValueList__takeFirst corto_script_ast_InitializerValueList__takeFirst
#define ast_InitializerValueList__last corto_script_ast_InitializerValueList__last
#define ast_InitializerValueList__get corto_script_ast_InitializerValueList__get
#define ast_InitializerValueList__clear corto_script_ast_InitializerValueList__clear

/* list{/corto/script/ast/Statement,0} */
CORTO_SCRIPT_AST_EXPORT void corto_script_ast_StatementList__insert(corto_script_ast_StatementList list, corto_script_ast_Statement element);
CORTO_SCRIPT_AST_EXPORT void corto_script_ast_StatementList__append(corto_script_ast_StatementList list, corto_script_ast_Statement element);
CORTO_SCRIPT_AST_EXPORT void corto_script_ast_StatementList__remove(corto_script_ast_StatementList list, corto_script_ast_Statement element);
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Statement corto_script_ast_StatementList__takeFirst(corto_script_ast_StatementList list);
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Statement corto_script_ast_StatementList__last(corto_script_ast_StatementList list);
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Statement corto_script_ast_StatementList__get(corto_script_ast_StatementList list, corto_uint32 index);
CORTO_SCRIPT_AST_EXPORT void corto_script_ast_StatementList__clear(corto_script_ast_StatementList list);

#define ast_StatementList__insert corto_script_ast_StatementList__insert
#define ast_StatementList__append corto_script_ast_StatementList__append
#define ast_StatementList__append_alloc corto_script_ast_StatementList__append_alloc
#define ast_StatementList__remove corto_script_ast_StatementList__remove
#define ast_StatementList__takeFirst corto_script_ast_StatementList__takeFirst
#define ast_StatementList__last corto_script_ast_StatementList__last
#define ast_StatementList__get corto_script_ast_StatementList__get
#define ast_StatementList__clear corto_script_ast_StatementList__clear

/* list{/corto/script/ast/Storage,0} */
CORTO_SCRIPT_AST_EXPORT void corto_script_ast_StorageList__insert(corto_script_ast_StorageList list, corto_script_ast_Storage element);
CORTO_SCRIPT_AST_EXPORT void corto_script_ast_StorageList__append(corto_script_ast_StorageList list, corto_script_ast_Storage element);
CORTO_SCRIPT_AST_EXPORT void corto_script_ast_StorageList__remove(corto_script_ast_StorageList list, corto_script_ast_Storage element);
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Storage corto_script_ast_StorageList__takeFirst(corto_script_ast_StorageList list);
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Storage corto_script_ast_StorageList__last(corto_script_ast_StorageList list);
CORTO_SCRIPT_AST_EXPORT corto_script_ast_Storage corto_script_ast_StorageList__get(corto_script_ast_StorageList list, corto_uint32 index);
CORTO_SCRIPT_AST_EXPORT void corto_script_ast_StorageList__clear(corto_script_ast_StorageList list);

#define ast_StorageList__insert corto_script_ast_StorageList__insert
#define ast_StorageList__append corto_script_ast_StorageList__append
#define ast_StorageList__append_alloc corto_script_ast_StorageList__append_alloc
#define ast_StorageList__remove corto_script_ast_StorageList__remove
#define ast_StorageList__takeFirst corto_script_ast_StorageList__takeFirst
#define ast_StorageList__last corto_script_ast_StorageList__last
#define ast_StorageList__get corto_script_ast_StorageList__get
#define ast_StorageList__clear corto_script_ast_StorageList__clear

#ifdef __cplusplus
}
#endif
#endif

