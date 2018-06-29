/* _binding.h
 * This file is generated. Do not modify its contents.
 */

#ifndef CORTO_SCRIPT_AST_BINDING_H
#define CORTO_SCRIPT_AST_BINDING_H

/* -- Type casting -- */
#define corto_objectMap(o) ((corto_objectMap*)corto_assert_type((corto_type)corto_objectMap_o, o))
#define corto_script_ast_Node(o) ((corto_script_ast_Node)corto_assert_type((corto_type)corto_script_ast_Node_o, o))
#define corto_script_ast_Expression(o) ((corto_script_ast_Expression)corto_assert_type((corto_type)corto_script_ast_Expression_o, o))
#define corto_script_ast_Binary(o) ((corto_script_ast_Binary)corto_assert_type((corto_type)corto_script_ast_Binary_o, o))
#define corto_script_ast_Literal(o) ((corto_script_ast_Literal)corto_assert_type((corto_type)corto_script_ast_Literal_o, o))
#define corto_script_ast_Boolean(o) ((corto_script_ast_Boolean)corto_assert_type((corto_type)corto_script_ast_Boolean_o, o))
#define corto_script_ast_Storage(o) ((corto_script_ast_Storage)corto_assert_type((corto_type)corto_script_ast_Storage_o, o))
#define corto_script_ast_Cast(o) ((corto_script_ast_Cast)corto_assert_type((corto_type)corto_script_ast_Cast_o, o))
#define corto_script_ast_Character(o) ((corto_script_ast_Character)corto_assert_type((corto_type)corto_script_ast_Character_o, o))
#define corto_script_ast_Statement(o) ((corto_script_ast_Statement)corto_assert_type((corto_type)corto_script_ast_Statement_o, o))
#define corto_script_ast_StorageList(o) ((corto_script_ast_StorageList*)corto_assert_type((corto_type)corto_script_ast_StorageList_o, o))
#define corto_script_ast_FunctionArgument(o) ((corto_script_ast_FunctionArgument)corto_assert_type((corto_type)corto_script_ast_FunctionArgument_o, o))
#define corto_script_ast_FunctionArgumentList(o) ((corto_script_ast_FunctionArgumentList*)corto_assert_type((corto_type)corto_script_ast_FunctionArgumentList_o, o))
#define corto_script_ast_DeclarationIdentifier(o) ((corto_script_ast_DeclarationIdentifier)corto_assert_type((corto_type)corto_script_ast_DeclarationIdentifier_o, o))
#define corto_script_ast_InitializerValue(o) ((corto_script_ast_InitializerValue)corto_assert_type((corto_type)corto_script_ast_InitializerValue_o, o))
#define corto_script_ast_InitializerValueList(o) ((corto_script_ast_InitializerValueList*)corto_assert_type((corto_type)corto_script_ast_InitializerValueList_o, o))
#define corto_script_ast_Initializer(o) ((corto_script_ast_Initializer)corto_assert_type((corto_type)corto_script_ast_Initializer_o, o))
#define corto_script_ast_StatementList(o) ((corto_script_ast_StatementList*)corto_assert_type((corto_type)corto_script_ast_StatementList_o, o))
#define corto_script_ast_Scope(o) ((corto_script_ast_Scope)corto_assert_type((corto_type)corto_script_ast_Scope_o, o))
#define corto_script_ast_Declaration(o) ((corto_script_ast_Declaration)corto_assert_type((corto_type)corto_script_ast_Declaration_o, o))
#define corto_script_ast_Number(o) ((corto_script_ast_Number)corto_assert_type((corto_type)corto_script_ast_Number_o, o))
#define corto_script_ast_FloatingPoint(o) ((corto_script_ast_FloatingPoint)corto_assert_type((corto_type)corto_script_ast_FloatingPoint_o, o))
#define corto_script_ast_Identifier(o) ((corto_script_ast_Identifier)corto_assert_type((corto_type)corto_script_ast_Identifier_o, o))
#define corto_script_ast_Integer(o) ((corto_script_ast_Integer)corto_assert_type((corto_type)corto_script_ast_Integer_o, o))
#define corto_script_ast_Member(o) ((corto_script_ast_Member)corto_assert_type((corto_type)corto_script_ast_Member_o, o))
#define corto_script_ast_Null(o) ((corto_script_ast_Null)corto_assert_type((corto_type)corto_script_ast_Null_o, o))
#define corto_script_ast_SignedInteger(o) ((corto_script_ast_SignedInteger)corto_assert_type((corto_type)corto_script_ast_SignedInteger_o, o))
#define corto_script_ast_StorageInitializer(o) ((corto_script_ast_StorageInitializer)corto_assert_type((corto_type)corto_script_ast_StorageInitializer_o, o))
#define corto_script_ast_String(o) ((corto_script_ast_String)corto_assert_type((corto_type)corto_script_ast_String_o, o))
#define corto_script_ast_Ternary(o) ((corto_script_ast_Ternary)corto_assert_type((corto_type)corto_script_ast_Ternary_o, o))
#define corto_script_ast_Unary(o) ((corto_script_ast_Unary)corto_assert_type((corto_type)corto_script_ast_Unary_o, o))
#define corto_script_ast_Use(o) ((corto_script_ast_Use)corto_assert_type((corto_type)corto_script_ast_Use_o, o))
#define corto_script_ast_Visitor(o) ((corto_script_ast_Visitor)corto_assert_type((corto_type)corto_script_ast_Visitor_o, o))

/* -- Non-expanding typedefs -- */
#ifndef _type_corto_objectMap_DEFINED
#define _type_corto_objectMap_DEFINED
typedef corto_objectMap _type_corto_objectMap;
#endif
typedef corto_script_ast_Node _type_corto_script_ast_Node;
typedef corto_script_ast_Expression _type_corto_script_ast_Expression;
typedef corto_script_ast_Binary _type_corto_script_ast_Binary;
typedef corto_script_ast_Literal _type_corto_script_ast_Literal;
typedef corto_script_ast_Boolean _type_corto_script_ast_Boolean;
typedef corto_script_ast_Storage _type_corto_script_ast_Storage;
typedef corto_script_ast_Cast _type_corto_script_ast_Cast;
typedef corto_script_ast_Character _type_corto_script_ast_Character;
typedef corto_script_ast_Statement _type_corto_script_ast_Statement;
#ifndef _type_corto_script_ast_StorageList_DEFINED
#define _type_corto_script_ast_StorageList_DEFINED
typedef corto_script_ast_StorageList _type_corto_script_ast_StorageList;
#endif
typedef corto_script_ast_FunctionArgument _type_corto_script_ast_FunctionArgument;
#ifndef _type_corto_script_ast_FunctionArgumentList_DEFINED
#define _type_corto_script_ast_FunctionArgumentList_DEFINED
typedef corto_script_ast_FunctionArgumentList _type_corto_script_ast_FunctionArgumentList;
#endif
typedef corto_script_ast_DeclarationIdentifier _type_corto_script_ast_DeclarationIdentifier;
typedef corto_script_ast_InitializerValue _type_corto_script_ast_InitializerValue;
#ifndef _type_corto_script_ast_InitializerValueList_DEFINED
#define _type_corto_script_ast_InitializerValueList_DEFINED
typedef corto_script_ast_InitializerValueList _type_corto_script_ast_InitializerValueList;
#endif
typedef corto_script_ast_Initializer _type_corto_script_ast_Initializer;
#ifndef _type_corto_script_ast_StatementList_DEFINED
#define _type_corto_script_ast_StatementList_DEFINED
typedef corto_script_ast_StatementList _type_corto_script_ast_StatementList;
#endif
typedef corto_script_ast_Scope _type_corto_script_ast_Scope;
typedef corto_script_ast_Declaration _type_corto_script_ast_Declaration;
typedef corto_script_ast_Number _type_corto_script_ast_Number;
typedef corto_script_ast_FloatingPoint _type_corto_script_ast_FloatingPoint;
typedef corto_script_ast_Identifier _type_corto_script_ast_Identifier;
typedef corto_script_ast_Integer _type_corto_script_ast_Integer;
typedef corto_script_ast_Member _type_corto_script_ast_Member;
typedef corto_script_ast_Null _type_corto_script_ast_Null;
typedef corto_script_ast_SignedInteger _type_corto_script_ast_SignedInteger;
typedef corto_script_ast_StorageInitializer _type_corto_script_ast_StorageInitializer;
typedef corto_script_ast_String _type_corto_script_ast_String;
typedef corto_script_ast_Ternary _type_corto_script_ast_Ternary;
typedef corto_script_ast_Unary _type_corto_script_ast_Unary;
typedef corto_script_ast_Use _type_corto_script_ast_Use;
typedef corto_script_ast_Visitor _type_corto_script_ast_Visitor;

/* -- Argument type casting -- */
#ifndef CORTO_SCRIPT_AST_IMPL
#define corto_script_ast_Node_getData(_this, key) _corto_script_ast_Node_getData(corto_script_ast_Node(_this), key)
#define corto_script_ast_Node_setData(_this, key, value) _corto_script_ast_Node_setData(corto_script_ast_Node(_this), key, value)
#define corto_script_ast_Visitor_visitFunctionArguments_v(_this, arguments) _corto_script_ast_Visitor_visitFunctionArguments_v(corto_script_ast_Visitor(_this), arguments)
#define corto_script_ast_Node_visit_v(_this, visitor) _corto_script_ast_Node_visit_v(corto_script_ast_Node(_this), corto_script_ast_Visitor(visitor))
#define corto_script_ast_Expression_fold_v(_this) _corto_script_ast_Expression_fold_v(corto_script_ast_Expression(_this))
#define corto_script_ast_Expression_getPtr_v(_this) _corto_script_ast_Expression_getPtr_v(corto_script_ast_Expression(_this))
#define corto_script_ast_Expression_getType(_this) _corto_script_ast_Expression_getType(corto_script_ast_Expression(_this))
#define corto_script_ast_Expression_getTypeForTarget(_this, target, target_expr) _corto_script_ast_Expression_getTypeForTarget(corto_script_ast_Expression(_this), corto_type(target), corto_script_ast_Expression(target_expr))
#define corto_script_ast_Expression_isReference(_this) _corto_script_ast_Expression_isReference(corto_script_ast_Expression(_this))
#define corto_script_ast_Expression_setType_v(_this, type) _corto_script_ast_Expression_setType_v(corto_script_ast_Expression(_this), corto_type(type))
#define corto_script_ast_Binary_construct(_this) _corto_script_ast_Binary_construct(corto_script_ast_Binary(_this))
#define corto_script_ast_Binary_fold(_this) _corto_script_ast_Binary_fold(corto_script_ast_Binary(_this))
#define corto_script_ast_Binary_setType(_this, type) _corto_script_ast_Binary_setType(corto_script_ast_Binary(_this), corto_type(type))
#define corto_script_ast_Initializer_apply(_this, helper) _corto_script_ast_Initializer_apply(corto_script_ast_Initializer(_this), helper)
#define corto_script_ast_Initializer_fold(_this) _corto_script_ast_Initializer_fold(corto_script_ast_Initializer(_this))
#define corto_script_ast_Initializer_propagateType(_this, type) _corto_script_ast_Initializer_propagateType(corto_script_ast_Initializer(_this), corto_type(type))
#define corto_script_ast_Boolean_getPtr(_this) _corto_script_ast_Boolean_getPtr(corto_script_ast_Boolean(_this))
#define corto_script_ast_Boolean_init(_this) _corto_script_ast_Boolean_init(corto_script_ast_Boolean(_this))
#define corto_script_ast_Character_getPtr(_this) _corto_script_ast_Character_getPtr(corto_script_ast_Character(_this))
#define corto_script_ast_Character_init(_this) _corto_script_ast_Character_init(corto_script_ast_Character(_this))
#define corto_script_ast_FloatingPoint_getPtr(_this) _corto_script_ast_FloatingPoint_getPtr(corto_script_ast_FloatingPoint(_this))
#define corto_script_ast_FloatingPoint_init(_this) _corto_script_ast_FloatingPoint_init(corto_script_ast_FloatingPoint(_this))
#define corto_script_ast_Integer_getPtr(_this) _corto_script_ast_Integer_getPtr(corto_script_ast_Integer(_this))
#define corto_script_ast_Integer_init(_this) _corto_script_ast_Integer_init(corto_script_ast_Integer(_this))
#define corto_script_ast_SignedInteger_getPtr(_this) _corto_script_ast_SignedInteger_getPtr(corto_script_ast_SignedInteger(_this))
#define corto_script_ast_SignedInteger_init(_this) _corto_script_ast_SignedInteger_init(corto_script_ast_SignedInteger(_this))
#define corto_script_ast_String_getPtr(_this) _corto_script_ast_String_getPtr(corto_script_ast_String(_this))
#define corto_script_ast_String_init(_this) _corto_script_ast_String_init(corto_script_ast_String(_this))
#define corto_script_ast_Storage_get_object(_this) _corto_script_ast_Storage_get_object(corto_script_ast_Storage(_this))
#define corto_script_ast_Storage_getPtr_v(_this) _corto_script_ast_Storage_getPtr_v(corto_script_ast_Storage(_this))
#define corto_script_ast_Storage_set_object(_this, obj) _corto_script_ast_Storage_set_object(corto_script_ast_Storage(_this), obj)
#define corto_script_ast_Ternary_fold(_this) _corto_script_ast_Ternary_fold(corto_script_ast_Ternary(_this))
#define corto_script_ast_Ternary_setType(_this, type) _corto_script_ast_Ternary_setType(corto_script_ast_Ternary(_this), corto_type(type))
#define corto_script_ast_Unary_fold(_this) _corto_script_ast_Unary_fold(corto_script_ast_Unary(_this))
#define corto_script_ast_Unary_setType(_this, type) _corto_script_ast_Unary_setType(corto_script_ast_Unary(_this), corto_type(type))
#define corto_script_ast_Scope_addStatement(_this, node) _corto_script_ast_Scope_addStatement(corto_script_ast_Scope(_this), corto_script_ast_Statement(node))
#define corto_script_ast_Scope_visit_v(_this, visitor) _corto_script_ast_Scope_visit_v(corto_script_ast_Scope(_this), corto_script_ast_Visitor(visitor))
#define corto_script_ast_Visitor_visit(_this, node) _corto_script_ast_Visitor_visit(corto_script_ast_Visitor(_this), corto_script_ast_Node(node))
#define corto_script_ast_Visitor_visitBinary_v(_this, node) _corto_script_ast_Visitor_visitBinary_v(corto_script_ast_Visitor(_this), corto_script_ast_Binary(node))
#define corto_script_ast_Visitor_visitDeclaration_v(_this, node) _corto_script_ast_Visitor_visitDeclaration_v(corto_script_ast_Visitor(_this), corto_script_ast_Declaration(node))
#define corto_script_ast_Visitor_visitExpression_v(_this, node) _corto_script_ast_Visitor_visitExpression_v(corto_script_ast_Visitor(_this), corto_script_ast_Expression(node))
#define corto_script_ast_Visitor_visitFunctionArgument_v(_this, argument) _corto_script_ast_Visitor_visitFunctionArgument_v(corto_script_ast_Visitor(_this), corto_script_ast_FunctionArgument(argument))
#define corto_script_ast_Visitor_visitInitializer_v(_this, node) _corto_script_ast_Visitor_visitInitializer_v(corto_script_ast_Visitor(_this), corto_script_ast_Initializer(node))
#define corto_script_ast_Visitor_visitScope_v(_this, node) _corto_script_ast_Visitor_visitScope_v(corto_script_ast_Visitor(_this), corto_script_ast_Scope(node))
#define corto_script_ast_Visitor_visitStatement_v(_this, node) _corto_script_ast_Visitor_visitStatement_v(corto_script_ast_Visitor(_this), corto_script_ast_Statement(node))
#define corto_script_ast_Visitor_visitStorage_v(_this, node) _corto_script_ast_Visitor_visitStorage_v(corto_script_ast_Visitor(_this), corto_script_ast_Storage(node))
#define corto_script_ast_Visitor_visitTernary_v(_this, node) _corto_script_ast_Visitor_visitTernary_v(corto_script_ast_Visitor(_this), corto_script_ast_Ternary(node))
#define corto_script_ast_Visitor_visitUnary_v(_this, node) _corto_script_ast_Visitor_visitUnary_v(corto_script_ast_Visitor(_this), corto_script_ast_Unary(node))
#define corto_script_ast_Visitor_visitUse_v(_this, node) _corto_script_ast_Visitor_visitUse_v(corto_script_ast_Visitor(_this), corto_script_ast_Use(node))
#else
/* Can't use argument type casting macro's within project, as they would
 * substitute headers in implementation files. */
#define corto_script_ast_Node_getData _corto_script_ast_Node_getData
#define corto_script_ast_Node_setData _corto_script_ast_Node_setData
#define corto_script_ast_Visitor_visitFunctionArguments_v _corto_script_ast_Visitor_visitFunctionArguments_v
#define corto_script_ast_Node_visit_v _corto_script_ast_Node_visit_v
#define corto_script_ast_Expression_fold_v _corto_script_ast_Expression_fold_v
#define corto_script_ast_Expression_getPtr_v _corto_script_ast_Expression_getPtr_v
#define corto_script_ast_Expression_getType _corto_script_ast_Expression_getType
#define corto_script_ast_Expression_getTypeForTarget _corto_script_ast_Expression_getTypeForTarget
#define corto_script_ast_Expression_isReference _corto_script_ast_Expression_isReference
#define corto_script_ast_Expression_setType_v _corto_script_ast_Expression_setType_v
#define corto_script_ast_Binary_construct _corto_script_ast_Binary_construct
#define corto_script_ast_Binary_fold _corto_script_ast_Binary_fold
#define corto_script_ast_Binary_setType _corto_script_ast_Binary_setType
#define corto_script_ast_Initializer_apply _corto_script_ast_Initializer_apply
#define corto_script_ast_Initializer_fold _corto_script_ast_Initializer_fold
#define corto_script_ast_Initializer_propagateType _corto_script_ast_Initializer_propagateType
#define corto_script_ast_Boolean_getPtr _corto_script_ast_Boolean_getPtr
#define corto_script_ast_Boolean_init _corto_script_ast_Boolean_init
#define corto_script_ast_Character_getPtr _corto_script_ast_Character_getPtr
#define corto_script_ast_Character_init _corto_script_ast_Character_init
#define corto_script_ast_FloatingPoint_getPtr _corto_script_ast_FloatingPoint_getPtr
#define corto_script_ast_FloatingPoint_init _corto_script_ast_FloatingPoint_init
#define corto_script_ast_Integer_getPtr _corto_script_ast_Integer_getPtr
#define corto_script_ast_Integer_init _corto_script_ast_Integer_init
#define corto_script_ast_SignedInteger_getPtr _corto_script_ast_SignedInteger_getPtr
#define corto_script_ast_SignedInteger_init _corto_script_ast_SignedInteger_init
#define corto_script_ast_String_getPtr _corto_script_ast_String_getPtr
#define corto_script_ast_String_init _corto_script_ast_String_init
#define corto_script_ast_Storage_get_object _corto_script_ast_Storage_get_object
#define corto_script_ast_Storage_getPtr_v _corto_script_ast_Storage_getPtr_v
#define corto_script_ast_Storage_set_object _corto_script_ast_Storage_set_object
#define corto_script_ast_Ternary_fold _corto_script_ast_Ternary_fold
#define corto_script_ast_Ternary_setType _corto_script_ast_Ternary_setType
#define corto_script_ast_Unary_fold _corto_script_ast_Unary_fold
#define corto_script_ast_Unary_setType _corto_script_ast_Unary_setType
#define corto_script_ast_Scope_addStatement _corto_script_ast_Scope_addStatement
#define corto_script_ast_Scope_visit_v _corto_script_ast_Scope_visit_v
#define corto_script_ast_Visitor_visit _corto_script_ast_Visitor_visit
#define corto_script_ast_Visitor_visitBinary_v _corto_script_ast_Visitor_visitBinary_v
#define corto_script_ast_Visitor_visitDeclaration_v _corto_script_ast_Visitor_visitDeclaration_v
#define corto_script_ast_Visitor_visitExpression_v _corto_script_ast_Visitor_visitExpression_v
#define corto_script_ast_Visitor_visitFunctionArgument_v _corto_script_ast_Visitor_visitFunctionArgument_v
#define corto_script_ast_Visitor_visitInitializer_v _corto_script_ast_Visitor_visitInitializer_v
#define corto_script_ast_Visitor_visitScope_v _corto_script_ast_Visitor_visitScope_v
#define corto_script_ast_Visitor_visitStatement_v _corto_script_ast_Visitor_visitStatement_v
#define corto_script_ast_Visitor_visitStorage_v _corto_script_ast_Visitor_visitStorage_v
#define corto_script_ast_Visitor_visitTernary_v _corto_script_ast_Visitor_visitTernary_v
#define corto_script_ast_Visitor_visitUnary_v _corto_script_ast_Visitor_visitUnary_v
#define corto_script_ast_Visitor_visitUse_v _corto_script_ast_Visitor_visitUse_v
/* Macro for doing argument type casting within project. */
#define safe_corto_script_ast_Node_getData(_this, key) _corto_script_ast_Node_getData(corto_script_ast_Node(_this), key)
#define safe_corto_script_ast_Node_setData(_this, key, value) _corto_script_ast_Node_setData(corto_script_ast_Node(_this), key, value)
#define safe_corto_script_ast_Visitor_visitFunctionArguments_v(_this, arguments) _corto_script_ast_Visitor_visitFunctionArguments_v(corto_script_ast_Visitor(_this), arguments)
#define safe_corto_script_ast_Node_visit_v(_this, visitor) _corto_script_ast_Node_visit_v(corto_script_ast_Node(_this), corto_script_ast_Visitor(visitor))
#define safe_corto_script_ast_Expression_fold_v(_this) _corto_script_ast_Expression_fold_v(corto_script_ast_Expression(_this))
#define safe_corto_script_ast_Expression_getPtr_v(_this) _corto_script_ast_Expression_getPtr_v(corto_script_ast_Expression(_this))
#define safe_corto_script_ast_Expression_getType(_this) _corto_script_ast_Expression_getType(corto_script_ast_Expression(_this))
#define safe_corto_script_ast_Expression_getTypeForTarget(_this, target, target_expr) _corto_script_ast_Expression_getTypeForTarget(corto_script_ast_Expression(_this), corto_type(target), corto_script_ast_Expression(target_expr))
#define safe_corto_script_ast_Expression_isReference(_this) _corto_script_ast_Expression_isReference(corto_script_ast_Expression(_this))
#define safe_corto_script_ast_Expression_setType_v(_this, type) _corto_script_ast_Expression_setType_v(corto_script_ast_Expression(_this), corto_type(type))
#define safe_corto_script_ast_Binary_construct(_this) _corto_script_ast_Binary_construct(corto_script_ast_Binary(_this))
#define safe_corto_script_ast_Binary_fold(_this) _corto_script_ast_Binary_fold(corto_script_ast_Binary(_this))
#define safe_corto_script_ast_Binary_setType(_this, type) _corto_script_ast_Binary_setType(corto_script_ast_Binary(_this), corto_type(type))
#define safe_corto_script_ast_Initializer_apply(_this, helper) _corto_script_ast_Initializer_apply(corto_script_ast_Initializer(_this), helper)
#define safe_corto_script_ast_Initializer_fold(_this) _corto_script_ast_Initializer_fold(corto_script_ast_Initializer(_this))
#define safe_corto_script_ast_Initializer_propagateType(_this, type) _corto_script_ast_Initializer_propagateType(corto_script_ast_Initializer(_this), corto_type(type))
#define safe_corto_script_ast_Boolean_getPtr(_this) _corto_script_ast_Boolean_getPtr(corto_script_ast_Boolean(_this))
#define safe_corto_script_ast_Boolean_init(_this) _corto_script_ast_Boolean_init(corto_script_ast_Boolean(_this))
#define safe_corto_script_ast_Character_getPtr(_this) _corto_script_ast_Character_getPtr(corto_script_ast_Character(_this))
#define safe_corto_script_ast_Character_init(_this) _corto_script_ast_Character_init(corto_script_ast_Character(_this))
#define safe_corto_script_ast_FloatingPoint_getPtr(_this) _corto_script_ast_FloatingPoint_getPtr(corto_script_ast_FloatingPoint(_this))
#define safe_corto_script_ast_FloatingPoint_init(_this) _corto_script_ast_FloatingPoint_init(corto_script_ast_FloatingPoint(_this))
#define safe_corto_script_ast_Integer_getPtr(_this) _corto_script_ast_Integer_getPtr(corto_script_ast_Integer(_this))
#define safe_corto_script_ast_Integer_init(_this) _corto_script_ast_Integer_init(corto_script_ast_Integer(_this))
#define safe_corto_script_ast_SignedInteger_getPtr(_this) _corto_script_ast_SignedInteger_getPtr(corto_script_ast_SignedInteger(_this))
#define safe_corto_script_ast_SignedInteger_init(_this) _corto_script_ast_SignedInteger_init(corto_script_ast_SignedInteger(_this))
#define safe_corto_script_ast_String_getPtr(_this) _corto_script_ast_String_getPtr(corto_script_ast_String(_this))
#define safe_corto_script_ast_String_init(_this) _corto_script_ast_String_init(corto_script_ast_String(_this))
#define safe_corto_script_ast_Storage_get_object(_this) _corto_script_ast_Storage_get_object(corto_script_ast_Storage(_this))
#define safe_corto_script_ast_Storage_getPtr_v(_this) _corto_script_ast_Storage_getPtr_v(corto_script_ast_Storage(_this))
#define safe_corto_script_ast_Storage_set_object(_this, obj) _corto_script_ast_Storage_set_object(corto_script_ast_Storage(_this), obj)
#define safe_corto_script_ast_Ternary_fold(_this) _corto_script_ast_Ternary_fold(corto_script_ast_Ternary(_this))
#define safe_corto_script_ast_Ternary_setType(_this, type) _corto_script_ast_Ternary_setType(corto_script_ast_Ternary(_this), corto_type(type))
#define safe_corto_script_ast_Unary_fold(_this) _corto_script_ast_Unary_fold(corto_script_ast_Unary(_this))
#define safe_corto_script_ast_Unary_setType(_this, type) _corto_script_ast_Unary_setType(corto_script_ast_Unary(_this), corto_type(type))
#define safe_corto_script_ast_Scope_addStatement(_this, node) _corto_script_ast_Scope_addStatement(corto_script_ast_Scope(_this), corto_script_ast_Statement(node))
#define safe_corto_script_ast_Scope_visit_v(_this, visitor) _corto_script_ast_Scope_visit_v(corto_script_ast_Scope(_this), corto_script_ast_Visitor(visitor))
#define safe_corto_script_ast_Visitor_visit(_this, node) _corto_script_ast_Visitor_visit(corto_script_ast_Visitor(_this), corto_script_ast_Node(node))
#define safe_corto_script_ast_Visitor_visitBinary_v(_this, node) _corto_script_ast_Visitor_visitBinary_v(corto_script_ast_Visitor(_this), corto_script_ast_Binary(node))
#define safe_corto_script_ast_Visitor_visitDeclaration_v(_this, node) _corto_script_ast_Visitor_visitDeclaration_v(corto_script_ast_Visitor(_this), corto_script_ast_Declaration(node))
#define safe_corto_script_ast_Visitor_visitExpression_v(_this, node) _corto_script_ast_Visitor_visitExpression_v(corto_script_ast_Visitor(_this), corto_script_ast_Expression(node))
#define safe_corto_script_ast_Visitor_visitFunctionArgument_v(_this, argument) _corto_script_ast_Visitor_visitFunctionArgument_v(corto_script_ast_Visitor(_this), corto_script_ast_FunctionArgument(argument))
#define safe_corto_script_ast_Visitor_visitInitializer_v(_this, node) _corto_script_ast_Visitor_visitInitializer_v(corto_script_ast_Visitor(_this), corto_script_ast_Initializer(node))
#define safe_corto_script_ast_Visitor_visitScope_v(_this, node) _corto_script_ast_Visitor_visitScope_v(corto_script_ast_Visitor(_this), corto_script_ast_Scope(node))
#define safe_corto_script_ast_Visitor_visitStatement_v(_this, node) _corto_script_ast_Visitor_visitStatement_v(corto_script_ast_Visitor(_this), corto_script_ast_Statement(node))
#define safe_corto_script_ast_Visitor_visitStorage_v(_this, node) _corto_script_ast_Visitor_visitStorage_v(corto_script_ast_Visitor(_this), corto_script_ast_Storage(node))
#define safe_corto_script_ast_Visitor_visitTernary_v(_this, node) _corto_script_ast_Visitor_visitTernary_v(corto_script_ast_Visitor(_this), corto_script_ast_Ternary(node))
#define safe_corto_script_ast_Visitor_visitUnary_v(_this, node) _corto_script_ast_Visitor_visitUnary_v(corto_script_ast_Visitor(_this), corto_script_ast_Unary(node))
#define safe_corto_script_ast_Visitor_visitUse_v(_this, node) _corto_script_ast_Visitor_visitUse_v(corto_script_ast_Visitor(_this), corto_script_ast_Use(node))
#endif

/* -- Overridable methods -- */
#define corto_script_ast_Visitor_visitFunctionArguments(_this, arguments) ( \
    ((corto_function)corto_script_ast_Visitor_visitFunctionArguments_o)->kind == CORTO_PROCEDURE_CDECL \
    ? ((_type_corto_int16 (*)(corto_object, corto_script_ast_FunctionArgumentList))((corto_function)((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitFunctionArguments_o)->index - 1])->fptr)(corto_script_ast_Visitor(_this), arguments) \
    : *(int16_t*)corto_invoke(((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitFunctionArguments_o)->index - 1], alloca(sizeof(int16_t)), corto_script_ast_Visitor(_this), arguments) \
    )
#define corto_script_ast_Node_visit(_this, visitor) ( \
    ((corto_function)corto_script_ast_Node_visit_o)->kind == CORTO_PROCEDURE_CDECL \
    ? ((_type_corto_int16 (*)(corto_object, corto_script_ast_Visitor))((corto_function)((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Node_visit_o)->index - 1])->fptr)(corto_script_ast_Node(_this), corto_script_ast_Visitor(visitor)) \
    : *(int16_t*)corto_invoke(((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Node_visit_o)->index - 1], alloca(sizeof(int16_t)), corto_script_ast_Node(_this), corto_script_ast_Visitor(visitor)) \
    )
#define corto_script_ast_Expression_fold(_this) ( \
    ((corto_function)corto_script_ast_Expression_fold_o)->kind == CORTO_PROCEDURE_CDECL \
    ? ((_type_corto_script_ast_Expression (*)(corto_object))((corto_function)((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Expression_fold_o)->index - 1])->fptr)(corto_script_ast_Expression(_this)) \
    : *(corto_script_ast_Expression*)corto_invoke(((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Expression_fold_o)->index - 1], alloca(sizeof(corto_script_ast_Expression)), corto_script_ast_Expression(_this)) \
    )
#define corto_script_ast_Expression_getPtr(_this) ( \
    ((corto_function)corto_script_ast_Expression_getPtr_o)->kind == CORTO_PROCEDURE_CDECL \
    ? ((_type_corto_word (*)(corto_object))((corto_function)((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Expression_getPtr_o)->index - 1])->fptr)(corto_script_ast_Expression(_this)) \
    : *(uintptr_t*)corto_invoke(((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Expression_getPtr_o)->index - 1], alloca(sizeof(uintptr_t)), corto_script_ast_Expression(_this)) \
    )
#define corto_script_ast_Expression_setType(_this, type) ( \
    ((corto_function)corto_script_ast_Expression_setType_o)->kind == CORTO_PROCEDURE_CDECL \
    ? ((_type_corto_void (*)(corto_object, corto_type))((corto_function)((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Expression_setType_o)->index - 1])->fptr)(corto_script_ast_Expression(_this), corto_type(type)) \
    : (void)corto_invoke(((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Expression_setType_o)->index - 1], NULL, corto_script_ast_Expression(_this), corto_type(type)) \
    )
#define corto_script_ast_Storage_getPtr(_this) ( \
    ((corto_function)corto_script_ast_Storage_getPtr_o)->kind == CORTO_PROCEDURE_CDECL \
    ? ((_type_corto_word (*)(corto_object))((corto_function)((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Storage_getPtr_o)->index - 1])->fptr)(corto_script_ast_Storage(_this)) \
    : *(uintptr_t*)corto_invoke(((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Storage_getPtr_o)->index - 1], alloca(sizeof(uintptr_t)), corto_script_ast_Storage(_this)) \
    )
#define corto_script_ast_Scope_visit(_this, visitor) ( \
    ((corto_function)corto_script_ast_Scope_visit_o)->kind == CORTO_PROCEDURE_CDECL \
    ? ((_type_corto_int16 (*)(corto_object, corto_script_ast_Visitor))((corto_function)((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Scope_visit_o)->index - 1])->fptr)(corto_script_ast_Scope(_this), corto_script_ast_Visitor(visitor)) \
    : *(int16_t*)corto_invoke(((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Scope_visit_o)->index - 1], alloca(sizeof(int16_t)), corto_script_ast_Scope(_this), corto_script_ast_Visitor(visitor)) \
    )
#define corto_script_ast_Visitor_visitBinary(_this, node) ( \
    ((corto_function)corto_script_ast_Visitor_visitBinary_o)->kind == CORTO_PROCEDURE_CDECL \
    ? ((_type_corto_int16 (*)(corto_object, corto_script_ast_Binary))((corto_function)((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitBinary_o)->index - 1])->fptr)(corto_script_ast_Visitor(_this), corto_script_ast_Binary(node)) \
    : *(int16_t*)corto_invoke(((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitBinary_o)->index - 1], alloca(sizeof(int16_t)), corto_script_ast_Visitor(_this), corto_script_ast_Binary(node)) \
    )
#define corto_script_ast_Visitor_visitDeclaration(_this, node) ( \
    ((corto_function)corto_script_ast_Visitor_visitDeclaration_o)->kind == CORTO_PROCEDURE_CDECL \
    ? ((_type_corto_int16 (*)(corto_object, corto_script_ast_Declaration))((corto_function)((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitDeclaration_o)->index - 1])->fptr)(corto_script_ast_Visitor(_this), corto_script_ast_Declaration(node)) \
    : *(int16_t*)corto_invoke(((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitDeclaration_o)->index - 1], alloca(sizeof(int16_t)), corto_script_ast_Visitor(_this), corto_script_ast_Declaration(node)) \
    )
#define corto_script_ast_Visitor_visitExpression(_this, node) ( \
    ((corto_function)corto_script_ast_Visitor_visitExpression_o)->kind == CORTO_PROCEDURE_CDECL \
    ? ((_type_corto_int16 (*)(corto_object, corto_script_ast_Expression))((corto_function)((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitExpression_o)->index - 1])->fptr)(corto_script_ast_Visitor(_this), corto_script_ast_Expression(node)) \
    : *(int16_t*)corto_invoke(((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitExpression_o)->index - 1], alloca(sizeof(int16_t)), corto_script_ast_Visitor(_this), corto_script_ast_Expression(node)) \
    )
#define corto_script_ast_Visitor_visitFunctionArgument(_this, argument) ( \
    ((corto_function)corto_script_ast_Visitor_visitFunctionArgument_o)->kind == CORTO_PROCEDURE_CDECL \
    ? ((_type_corto_int16 (*)(corto_object, corto_script_ast_FunctionArgument))((corto_function)((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitFunctionArgument_o)->index - 1])->fptr)(corto_script_ast_Visitor(_this), corto_script_ast_FunctionArgument(argument)) \
    : *(int16_t*)corto_invoke(((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitFunctionArgument_o)->index - 1], alloca(sizeof(int16_t)), corto_script_ast_Visitor(_this), corto_script_ast_FunctionArgument(argument)) \
    )
#define corto_script_ast_Visitor_visitInitializer(_this, node) ( \
    ((corto_function)corto_script_ast_Visitor_visitInitializer_o)->kind == CORTO_PROCEDURE_CDECL \
    ? ((_type_corto_int16 (*)(corto_object, corto_script_ast_Initializer))((corto_function)((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitInitializer_o)->index - 1])->fptr)(corto_script_ast_Visitor(_this), corto_script_ast_Initializer(node)) \
    : *(int16_t*)corto_invoke(((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitInitializer_o)->index - 1], alloca(sizeof(int16_t)), corto_script_ast_Visitor(_this), corto_script_ast_Initializer(node)) \
    )
#define corto_script_ast_Visitor_visitScope(_this, node) ( \
    ((corto_function)corto_script_ast_Visitor_visitScope_o)->kind == CORTO_PROCEDURE_CDECL \
    ? ((_type_corto_int16 (*)(corto_object, corto_script_ast_Scope))((corto_function)((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitScope_o)->index - 1])->fptr)(corto_script_ast_Visitor(_this), corto_script_ast_Scope(node)) \
    : *(int16_t*)corto_invoke(((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitScope_o)->index - 1], alloca(sizeof(int16_t)), corto_script_ast_Visitor(_this), corto_script_ast_Scope(node)) \
    )
#define corto_script_ast_Visitor_visitStatement(_this, node) ( \
    ((corto_function)corto_script_ast_Visitor_visitStatement_o)->kind == CORTO_PROCEDURE_CDECL \
    ? ((_type_corto_int16 (*)(corto_object, corto_script_ast_Statement))((corto_function)((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitStatement_o)->index - 1])->fptr)(corto_script_ast_Visitor(_this), corto_script_ast_Statement(node)) \
    : *(int16_t*)corto_invoke(((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitStatement_o)->index - 1], alloca(sizeof(int16_t)), corto_script_ast_Visitor(_this), corto_script_ast_Statement(node)) \
    )
#define corto_script_ast_Visitor_visitStorage(_this, node) ( \
    ((corto_function)corto_script_ast_Visitor_visitStorage_o)->kind == CORTO_PROCEDURE_CDECL \
    ? ((_type_corto_int16 (*)(corto_object, corto_script_ast_Storage))((corto_function)((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitStorage_o)->index - 1])->fptr)(corto_script_ast_Visitor(_this), corto_script_ast_Storage(node)) \
    : *(int16_t*)corto_invoke(((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitStorage_o)->index - 1], alloca(sizeof(int16_t)), corto_script_ast_Visitor(_this), corto_script_ast_Storage(node)) \
    )
#define corto_script_ast_Visitor_visitTernary(_this, node) ( \
    ((corto_function)corto_script_ast_Visitor_visitTernary_o)->kind == CORTO_PROCEDURE_CDECL \
    ? ((_type_corto_int16 (*)(corto_object, corto_script_ast_Ternary))((corto_function)((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitTernary_o)->index - 1])->fptr)(corto_script_ast_Visitor(_this), corto_script_ast_Ternary(node)) \
    : *(int16_t*)corto_invoke(((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitTernary_o)->index - 1], alloca(sizeof(int16_t)), corto_script_ast_Visitor(_this), corto_script_ast_Ternary(node)) \
    )
#define corto_script_ast_Visitor_visitUnary(_this, node) ( \
    ((corto_function)corto_script_ast_Visitor_visitUnary_o)->kind == CORTO_PROCEDURE_CDECL \
    ? ((_type_corto_int16 (*)(corto_object, corto_script_ast_Unary))((corto_function)((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitUnary_o)->index - 1])->fptr)(corto_script_ast_Visitor(_this), corto_script_ast_Unary(node)) \
    : *(int16_t*)corto_invoke(((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitUnary_o)->index - 1], alloca(sizeof(int16_t)), corto_script_ast_Visitor(_this), corto_script_ast_Unary(node)) \
    )
#define corto_script_ast_Visitor_visitUse(_this, node) ( \
    ((corto_function)corto_script_ast_Visitor_visitUse_o)->kind == CORTO_PROCEDURE_CDECL \
    ? ((_type_corto_int16 (*)(corto_object, corto_script_ast_Use))((corto_function)((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitUse_o)->index - 1])->fptr)(corto_script_ast_Visitor(_this), corto_script_ast_Use(node)) \
    : *(int16_t*)corto_invoke(((corto_interface)corto_typeof(_this))->methods.buffer[((corto_method)corto_script_ast_Visitor_visitUse_o)->index - 1], alloca(sizeof(int16_t)), corto_script_ast_Visitor(_this), corto_script_ast_Use(node)) \
    )

/* -- Short identifier translation -- */
#define ast_FunctionArgumentList corto_script_ast_FunctionArgumentList
#define ast_InitializerValueList corto_script_ast_InitializerValueList
#define ast_Node_getData corto_script_ast_Node_getData
#define safe_ast_Node_getData safe_corto_script_ast_Node_getData
#define ast_Node_setData corto_script_ast_Node_setData
#define safe_ast_Node_setData safe_corto_script_ast_Node_setData
#define ast_StatementList corto_script_ast_StatementList
#define ast_StorageList corto_script_ast_StorageList
#define ast_Visitor_visitFunctionArguments_v corto_script_ast_Visitor_visitFunctionArguments_v
#define safe_ast_Visitor_visitFunctionArguments_v safe_corto_script_ast_Visitor_visitFunctionArguments_v
#define ast_Visitor_visitFunctionArguments corto_script_ast_Visitor_visitFunctionArguments
#define safe_ast_Visitor_visitFunctionArguments safe_corto_script_ast_Visitor_visitFunctionArguments
#define ast_Node_visit_v corto_script_ast_Node_visit_v
#define safe_ast_Node_visit_v safe_corto_script_ast_Node_visit_v
#define ast_Node_visit corto_script_ast_Node_visit
#define safe_ast_Node_visit safe_corto_script_ast_Node_visit
#define ast_Node corto_script_ast_Node
#define ast_DeclarationIdentifier corto_script_ast_DeclarationIdentifier
#define ast_Expression_fold_v corto_script_ast_Expression_fold_v
#define safe_ast_Expression_fold_v safe_corto_script_ast_Expression_fold_v
#define ast_Expression_fold corto_script_ast_Expression_fold
#define safe_ast_Expression_fold safe_corto_script_ast_Expression_fold
#define ast_Expression_getPtr_v corto_script_ast_Expression_getPtr_v
#define safe_ast_Expression_getPtr_v safe_corto_script_ast_Expression_getPtr_v
#define ast_Expression_getPtr corto_script_ast_Expression_getPtr
#define safe_ast_Expression_getPtr safe_corto_script_ast_Expression_getPtr
#define ast_Expression_getType corto_script_ast_Expression_getType
#define safe_ast_Expression_getType safe_corto_script_ast_Expression_getType
#define ast_Expression_getTypeForTarget corto_script_ast_Expression_getTypeForTarget
#define safe_ast_Expression_getTypeForTarget safe_corto_script_ast_Expression_getTypeForTarget
#define ast_Expression_isReference corto_script_ast_Expression_isReference
#define safe_ast_Expression_isReference safe_corto_script_ast_Expression_isReference
#define ast_Expression_setType_v corto_script_ast_Expression_setType_v
#define safe_ast_Expression_setType_v safe_corto_script_ast_Expression_setType_v
#define ast_Expression_setType corto_script_ast_Expression_setType
#define safe_ast_Expression_setType safe_corto_script_ast_Expression_setType
#define ast_Expression corto_script_ast_Expression
#define ast_Binary_construct corto_script_ast_Binary_construct
#define safe_ast_Binary_construct safe_corto_script_ast_Binary_construct
#define ast_Binary_fold corto_script_ast_Binary_fold
#define safe_ast_Binary_fold safe_corto_script_ast_Binary_fold
#define ast_Binary_setType corto_script_ast_Binary_setType
#define safe_ast_Binary_setType safe_corto_script_ast_Binary_setType
#define ast_Binary corto_script_ast_Binary
#define ast_Initializer_apply corto_script_ast_Initializer_apply
#define safe_ast_Initializer_apply safe_corto_script_ast_Initializer_apply
#define ast_Initializer_fold corto_script_ast_Initializer_fold
#define safe_ast_Initializer_fold safe_corto_script_ast_Initializer_fold
#define ast_Initializer_propagateType corto_script_ast_Initializer_propagateType
#define safe_ast_Initializer_propagateType safe_corto_script_ast_Initializer_propagateType
#define ast_Initializer corto_script_ast_Initializer
#define ast_InitializerValue corto_script_ast_InitializerValue
#define ast_Literal corto_script_ast_Literal
#define ast_Boolean_getPtr corto_script_ast_Boolean_getPtr
#define safe_ast_Boolean_getPtr safe_corto_script_ast_Boolean_getPtr
#define ast_Boolean_init corto_script_ast_Boolean_init
#define safe_ast_Boolean_init safe_corto_script_ast_Boolean_init
#define ast_Boolean corto_script_ast_Boolean
#define ast_Character_getPtr corto_script_ast_Character_getPtr
#define safe_ast_Character_getPtr safe_corto_script_ast_Character_getPtr
#define ast_Character_init corto_script_ast_Character_init
#define safe_ast_Character_init safe_corto_script_ast_Character_init
#define ast_Character corto_script_ast_Character
#define ast_Null corto_script_ast_Null
#define ast_Number corto_script_ast_Number
#define ast_FloatingPoint_getPtr corto_script_ast_FloatingPoint_getPtr
#define safe_ast_FloatingPoint_getPtr safe_corto_script_ast_FloatingPoint_getPtr
#define ast_FloatingPoint_init corto_script_ast_FloatingPoint_init
#define safe_ast_FloatingPoint_init safe_corto_script_ast_FloatingPoint_init
#define ast_FloatingPoint corto_script_ast_FloatingPoint
#define ast_Integer_getPtr corto_script_ast_Integer_getPtr
#define safe_ast_Integer_getPtr safe_corto_script_ast_Integer_getPtr
#define ast_Integer_init corto_script_ast_Integer_init
#define safe_ast_Integer_init safe_corto_script_ast_Integer_init
#define ast_Integer corto_script_ast_Integer
#define ast_SignedInteger_getPtr corto_script_ast_SignedInteger_getPtr
#define safe_ast_SignedInteger_getPtr safe_corto_script_ast_SignedInteger_getPtr
#define ast_SignedInteger_init corto_script_ast_SignedInteger_init
#define safe_ast_SignedInteger_init safe_corto_script_ast_SignedInteger_init
#define ast_SignedInteger corto_script_ast_SignedInteger
#define ast_String_getPtr corto_script_ast_String_getPtr
#define safe_ast_String_getPtr safe_corto_script_ast_String_getPtr
#define ast_String_init corto_script_ast_String_init
#define safe_ast_String_init safe_corto_script_ast_String_init
#define ast_String corto_script_ast_String
#define ast_Storage_get_object corto_script_ast_Storage_get_object
#define safe_ast_Storage_get_object safe_corto_script_ast_Storage_get_object
#define ast_Storage_getPtr_v corto_script_ast_Storage_getPtr_v
#define safe_ast_Storage_getPtr_v safe_corto_script_ast_Storage_getPtr_v
#define ast_Storage_getPtr corto_script_ast_Storage_getPtr
#define safe_ast_Storage_getPtr safe_corto_script_ast_Storage_getPtr
#define ast_Storage_set_object corto_script_ast_Storage_set_object
#define safe_ast_Storage_set_object safe_corto_script_ast_Storage_set_object
#define ast_Storage corto_script_ast_Storage
#define ast_Cast corto_script_ast_Cast
#define ast_FunctionArgument corto_script_ast_FunctionArgument
#define ast_Identifier corto_script_ast_Identifier
#define ast_Member corto_script_ast_Member
#define ast_StorageInitializer corto_script_ast_StorageInitializer
#define ast_Ternary_fold corto_script_ast_Ternary_fold
#define safe_ast_Ternary_fold safe_corto_script_ast_Ternary_fold
#define ast_Ternary_setType corto_script_ast_Ternary_setType
#define safe_ast_Ternary_setType safe_corto_script_ast_Ternary_setType
#define ast_Unary_fold corto_script_ast_Unary_fold
#define safe_ast_Unary_fold safe_corto_script_ast_Unary_fold
#define ast_Unary_setType corto_script_ast_Unary_setType
#define safe_ast_Unary_setType safe_corto_script_ast_Unary_setType
#define ast_Unary corto_script_ast_Unary
#define ast_Scope_addStatement corto_script_ast_Scope_addStatement
#define safe_ast_Scope_addStatement safe_corto_script_ast_Scope_addStatement
#define ast_Scope_visit_v corto_script_ast_Scope_visit_v
#define safe_ast_Scope_visit_v safe_corto_script_ast_Scope_visit_v
#define ast_Scope_visit corto_script_ast_Scope_visit
#define safe_ast_Scope_visit safe_corto_script_ast_Scope_visit
#define ast_Statement corto_script_ast_Statement
#define ast_Declaration corto_script_ast_Declaration
#define ast_Use corto_script_ast_Use
#define ast_Visitor_visit corto_script_ast_Visitor_visit
#define safe_ast_Visitor_visit safe_corto_script_ast_Visitor_visit
#define ast_Scope corto_script_ast_Scope
#define ast_Ternary corto_script_ast_Ternary
#define ast_Visitor_visitBinary_v corto_script_ast_Visitor_visitBinary_v
#define safe_ast_Visitor_visitBinary_v safe_corto_script_ast_Visitor_visitBinary_v
#define ast_Visitor_visitBinary corto_script_ast_Visitor_visitBinary
#define safe_ast_Visitor_visitBinary safe_corto_script_ast_Visitor_visitBinary
#define ast_Visitor_visitDeclaration_v corto_script_ast_Visitor_visitDeclaration_v
#define safe_ast_Visitor_visitDeclaration_v safe_corto_script_ast_Visitor_visitDeclaration_v
#define ast_Visitor_visitDeclaration corto_script_ast_Visitor_visitDeclaration
#define safe_ast_Visitor_visitDeclaration safe_corto_script_ast_Visitor_visitDeclaration
#define ast_Visitor_visitExpression_v corto_script_ast_Visitor_visitExpression_v
#define safe_ast_Visitor_visitExpression_v safe_corto_script_ast_Visitor_visitExpression_v
#define ast_Visitor_visitExpression corto_script_ast_Visitor_visitExpression
#define safe_ast_Visitor_visitExpression safe_corto_script_ast_Visitor_visitExpression
#define ast_Visitor_visitFunctionArgument_v corto_script_ast_Visitor_visitFunctionArgument_v
#define safe_ast_Visitor_visitFunctionArgument_v safe_corto_script_ast_Visitor_visitFunctionArgument_v
#define ast_Visitor_visitFunctionArgument corto_script_ast_Visitor_visitFunctionArgument
#define safe_ast_Visitor_visitFunctionArgument safe_corto_script_ast_Visitor_visitFunctionArgument
#define ast_Visitor_visitInitializer_v corto_script_ast_Visitor_visitInitializer_v
#define safe_ast_Visitor_visitInitializer_v safe_corto_script_ast_Visitor_visitInitializer_v
#define ast_Visitor_visitInitializer corto_script_ast_Visitor_visitInitializer
#define safe_ast_Visitor_visitInitializer safe_corto_script_ast_Visitor_visitInitializer
#define ast_Visitor_visitScope_v corto_script_ast_Visitor_visitScope_v
#define safe_ast_Visitor_visitScope_v safe_corto_script_ast_Visitor_visitScope_v
#define ast_Visitor_visitScope corto_script_ast_Visitor_visitScope
#define safe_ast_Visitor_visitScope safe_corto_script_ast_Visitor_visitScope
#define ast_Visitor_visitStatement_v corto_script_ast_Visitor_visitStatement_v
#define safe_ast_Visitor_visitStatement_v safe_corto_script_ast_Visitor_visitStatement_v
#define ast_Visitor_visitStatement corto_script_ast_Visitor_visitStatement
#define safe_ast_Visitor_visitStatement safe_corto_script_ast_Visitor_visitStatement
#define ast_Visitor_visitStorage_v corto_script_ast_Visitor_visitStorage_v
#define safe_ast_Visitor_visitStorage_v safe_corto_script_ast_Visitor_visitStorage_v
#define ast_Visitor_visitStorage corto_script_ast_Visitor_visitStorage
#define safe_ast_Visitor_visitStorage safe_corto_script_ast_Visitor_visitStorage
#define ast_Visitor_visitTernary_v corto_script_ast_Visitor_visitTernary_v
#define safe_ast_Visitor_visitTernary_v safe_corto_script_ast_Visitor_visitTernary_v
#define ast_Visitor_visitTernary corto_script_ast_Visitor_visitTernary
#define safe_ast_Visitor_visitTernary safe_corto_script_ast_Visitor_visitTernary
#define ast_Visitor_visitUnary_v corto_script_ast_Visitor_visitUnary_v
#define safe_ast_Visitor_visitUnary_v safe_corto_script_ast_Visitor_visitUnary_v
#define ast_Visitor_visitUnary corto_script_ast_Visitor_visitUnary
#define safe_ast_Visitor_visitUnary safe_corto_script_ast_Visitor_visitUnary
#define ast_Visitor_visitUse_v corto_script_ast_Visitor_visitUse_v
#define safe_ast_Visitor_visitUse_v safe_corto_script_ast_Visitor_visitUse_v
#define ast_Visitor_visitUse corto_script_ast_Visitor_visitUse
#define safe_ast_Visitor_visitUse safe_corto_script_ast_Visitor_visitUse
#define ast_Visitor corto_script_ast_Visitor

/* -- Local only short identifier translation -- */
#ifdef CORTO_SCRIPT_AST_IMPL
#ifndef __cplusplus
#define Node ast_Node
#endif
#ifndef __cplusplus
#define DeclarationIdentifier ast_DeclarationIdentifier
#endif
#ifndef __cplusplus
#define Expression ast_Expression
#endif
#ifndef __cplusplus
#define Binary ast_Binary
#endif
#ifndef __cplusplus
#define Initializer ast_Initializer
#endif
#ifndef __cplusplus
#define InitializerValue ast_InitializerValue
#endif
#ifndef __cplusplus
#define Literal ast_Literal
#endif
#ifndef __cplusplus
#define Boolean ast_Boolean
#endif
#ifndef __cplusplus
#define Character ast_Character
#endif
#ifndef __cplusplus
#define Null ast_Null
#endif
#ifndef __cplusplus
#define Number ast_Number
#endif
#ifndef __cplusplus
#define FloatingPoint ast_FloatingPoint
#endif
#ifndef __cplusplus
#define Integer ast_Integer
#endif
#ifndef __cplusplus
#define SignedInteger ast_SignedInteger
#endif
#ifndef __cplusplus
#define String ast_String
#endif
#ifndef __cplusplus
#define Storage ast_Storage
#endif
#ifndef __cplusplus
#define Cast ast_Cast
#endif
#ifndef __cplusplus
#define FunctionArgument ast_FunctionArgument
#endif
#ifndef __cplusplus
#define Identifier ast_Identifier
#endif
#ifndef __cplusplus
#define Member ast_Member
#endif
#ifndef __cplusplus
#define StorageInitializer ast_StorageInitializer
#endif
#ifndef __cplusplus
#define Unary ast_Unary
#endif
#ifndef __cplusplus
#define Statement ast_Statement
#endif
#ifndef __cplusplus
#define Declaration ast_Declaration
#endif
#ifndef __cplusplus
#define Use ast_Use
#endif
#ifndef __cplusplus
#define Scope ast_Scope
#endif
#ifndef __cplusplus
#define Ternary ast_Ternary
#endif
#ifndef __cplusplus
#define Visitor ast_Visitor
#endif
#endif

/* -- Short object variable translation -- */
#define ast_Binary_operand_type_o corto_script_ast_Binary_operand_type_o
#define ast_Binary_operator_o corto_script_ast_Binary_operator_o
#define ast_Boolean_value_o corto_script_ast_Boolean_value_o
#define ast_Character_value_o corto_script_ast_Character_value_o
#define ast_Declaration_is_var_o corto_script_ast_Declaration_is_var_o
#define ast_Declaration_set_scope_o corto_script_ast_Declaration_set_scope_o
#define ast_Expression_is_object_o corto_script_ast_Expression_is_object_o
#define ast_Expression_ref_kind_o corto_script_ast_Expression_ref_kind_o
#define ast_Expression_type_o corto_script_ast_Expression_type_o
#define ast_FloatingPoint_value_o corto_script_ast_FloatingPoint_value_o
#define ast_FunctionArgumentList_o corto_script_ast_FunctionArgumentList_o
#define ast_DeclarationIdentifier_arguments_o corto_script_ast_DeclarationIdentifier_arguments_o
#define ast_FunctionArgument_inout_o corto_script_ast_FunctionArgument_inout_o
#define ast_FunctionArgument_is_reference_o corto_script_ast_FunctionArgument_is_reference_o
#define ast_FunctionArgument_name_o corto_script_ast_FunctionArgument_name_o
#define ast_Identifier_id_o corto_script_ast_Identifier_id_o
#define ast_Initializer_collection_o corto_script_ast_Initializer_collection_o
#define ast_InitializerValueList_o corto_script_ast_InitializerValueList_o
#define ast_Initializer_values_o corto_script_ast_Initializer_values_o
#define ast_InitializerValue_key_o corto_script_ast_InitializerValue_key_o
#define ast_Integer_value_o corto_script_ast_Integer_value_o
#define ast_Member_key_o corto_script_ast_Member_key_o
#define ast_Member_member_o corto_script_ast_Member_member_o
#define ast_Node_getData_o corto_script_ast_Node_getData_o
#define ast_Node_setData_o corto_script_ast_Node_setData_o
#define ast_Number_unit_o corto_script_ast_Number_unit_o
#define ast_SignedInteger_value_o corto_script_ast_SignedInteger_value_o
#define ast_StatementList_o corto_script_ast_StatementList_o
#define ast_Scope_statements_o corto_script_ast_Scope_statements_o
#define ast_Statement_column_o corto_script_ast_Statement_column_o
#define ast_Statement_line_o corto_script_ast_Statement_line_o
#define ast_StorageList_o corto_script_ast_StorageList_o
#define ast_DeclarationIdentifier_ids_o corto_script_ast_DeclarationIdentifier_ids_o
#define ast_Storage_value_o corto_script_ast_Storage_value_o
#define ast_String_delim_o corto_script_ast_String_delim_o
#define ast_String_value_o corto_script_ast_String_value_o
#define ast_Unary_operator_o corto_script_ast_Unary_operator_o
#define ast_Unary_postfix_o corto_script_ast_Unary_postfix_o
#define ast_Use_alias_o corto_script_ast_Use_alias_o
#define ast_Use_as_typesystem_o corto_script_ast_Use_as_typesystem_o
#define ast_Use_package_o corto_script_ast_Use_package_o
#define ast_Visitor_errors_o corto_script_ast_Visitor_errors_o
#define ast_Visitor_file_o corto_script_ast_Visitor_file_o
#define ast_Visitor_visitFunctionArguments_v_o corto_script_ast_Visitor_visitFunctionArguments_v_o
#define ast_Node_data_o corto_script_ast_Node_data_o
#define ast_Declaration_scope_o corto_script_ast_Declaration_scope_o
#define ast_Node_visit_v_o corto_script_ast_Node_visit_v_o
#define ast_Node_o corto_script_ast_Node_o
#define ast_DeclarationIdentifier_o corto_script_ast_DeclarationIdentifier_o
#define ast_Declaration_id_o corto_script_ast_Declaration_id_o
#define ast_Expression_fold_v_o corto_script_ast_Expression_fold_v_o
#define ast_Expression_getPtr_v_o corto_script_ast_Expression_getPtr_v_o
#define ast_Expression_getType_o corto_script_ast_Expression_getType_o
#define ast_Expression_getTypeForTarget_o corto_script_ast_Expression_getTypeForTarget_o
#define ast_Expression_isReference_o corto_script_ast_Expression_isReference_o
#define ast_Expression_setType_v_o corto_script_ast_Expression_setType_v_o
#define ast_Expression_o corto_script_ast_Expression_o
#define ast_Binary_construct_o corto_script_ast_Binary_construct_o
#define ast_Binary_fold_o corto_script_ast_Binary_fold_o
#define ast_Binary_left_o corto_script_ast_Binary_left_o
#define ast_Binary_right_o corto_script_ast_Binary_right_o
#define ast_Binary_setType_o corto_script_ast_Binary_setType_o
#define ast_Binary_o corto_script_ast_Binary_o
#define ast_Cast_expr_o corto_script_ast_Cast_expr_o
#define ast_Initializer_apply_o corto_script_ast_Initializer_apply_o
#define ast_Initializer_fold_o corto_script_ast_Initializer_fold_o
#define ast_Initializer_propagateType_o corto_script_ast_Initializer_propagateType_o
#define ast_Initializer_o corto_script_ast_Initializer_o
#define ast_Declaration_initializer_o corto_script_ast_Declaration_initializer_o
#define ast_StorageInitializer_initializer_o corto_script_ast_StorageInitializer_initializer_o
#define ast_InitializerValue_value_o corto_script_ast_InitializerValue_value_o
#define ast_InitializerValue_o corto_script_ast_InitializerValue_o
#define ast_Literal_o corto_script_ast_Literal_o
#define ast_Boolean_getPtr_o corto_script_ast_Boolean_getPtr_o
#define ast_Boolean_init_o corto_script_ast_Boolean_init_o
#define ast_Boolean_o corto_script_ast_Boolean_o
#define ast_Character_getPtr_o corto_script_ast_Character_getPtr_o
#define ast_Character_init_o corto_script_ast_Character_init_o
#define ast_Character_o corto_script_ast_Character_o
#define ast_Null_o corto_script_ast_Null_o
#define ast_Number_o corto_script_ast_Number_o
#define ast_FloatingPoint_getPtr_o corto_script_ast_FloatingPoint_getPtr_o
#define ast_FloatingPoint_init_o corto_script_ast_FloatingPoint_init_o
#define ast_FloatingPoint_o corto_script_ast_FloatingPoint_o
#define ast_Integer_getPtr_o corto_script_ast_Integer_getPtr_o
#define ast_Integer_init_o corto_script_ast_Integer_init_o
#define ast_Integer_o corto_script_ast_Integer_o
#define ast_SignedInteger_getPtr_o corto_script_ast_SignedInteger_getPtr_o
#define ast_SignedInteger_init_o corto_script_ast_SignedInteger_init_o
#define ast_SignedInteger_o corto_script_ast_SignedInteger_o
#define ast_String_getPtr_o corto_script_ast_String_getPtr_o
#define ast_String_init_o corto_script_ast_String_init_o
#define ast_String_o corto_script_ast_String_o
#define ast_Storage_get_object_o corto_script_ast_Storage_get_object_o
#define ast_Storage_getPtr_v_o corto_script_ast_Storage_getPtr_v_o
#define ast_Storage_set_object_o corto_script_ast_Storage_set_object_o
#define ast_Storage_o corto_script_ast_Storage_o
#define ast_Cast_type_o corto_script_ast_Cast_type_o
#define ast_Cast_o corto_script_ast_Cast_o
#define ast_Declaration_type_o corto_script_ast_Declaration_type_o
#define ast_FunctionArgument_type_o corto_script_ast_FunctionArgument_type_o
#define ast_FunctionArgument_o corto_script_ast_FunctionArgument_o
#define ast_Identifier_o corto_script_ast_Identifier_o
#define ast_Member_expr_o corto_script_ast_Member_expr_o
#define ast_Member_o corto_script_ast_Member_o
#define ast_StorageInitializer_expr_o corto_script_ast_StorageInitializer_expr_o
#define ast_StorageInitializer_o corto_script_ast_StorageInitializer_o
#define ast_Ternary_cond_o corto_script_ast_Ternary_cond_o
#define ast_Ternary_false_o corto_script_ast_Ternary_false_o
#define ast_Ternary_fold_o corto_script_ast_Ternary_fold_o
#define ast_Ternary_setType_o corto_script_ast_Ternary_setType_o
#define ast_Unary_expr_o corto_script_ast_Unary_expr_o
#define ast_Unary_fold_o corto_script_ast_Unary_fold_o
#define ast_Unary_setType_o corto_script_ast_Unary_setType_o
#define ast_Unary_o corto_script_ast_Unary_o
#define ast_Scope_addStatement_o corto_script_ast_Scope_addStatement_o
#define ast_Scope_visit_v_o corto_script_ast_Scope_visit_v_o
#define ast_Statement_o corto_script_ast_Statement_o
#define ast_Declaration_o corto_script_ast_Declaration_o
#define ast_Use_o corto_script_ast_Use_o
#define ast_Visitor_visit_o corto_script_ast_Visitor_visit_o
#define ast_Scope_default_type_o corto_script_ast_Scope_default_type_o
#define ast_Scope_parent_o corto_script_ast_Scope_parent_o
#define ast_Scope_o corto_script_ast_Scope_o
#define ast_Ternary_true_o corto_script_ast_Ternary_true_o
#define ast_Ternary_o corto_script_ast_Ternary_o
#define ast_Visitor_visitBinary_v_o corto_script_ast_Visitor_visitBinary_v_o
#define ast_Visitor_visitDeclaration_v_o corto_script_ast_Visitor_visitDeclaration_v_o
#define ast_Visitor_visitExpression_v_o corto_script_ast_Visitor_visitExpression_v_o
#define ast_Visitor_visitFunctionArgument_v_o corto_script_ast_Visitor_visitFunctionArgument_v_o
#define ast_Visitor_visitInitializer_v_o corto_script_ast_Visitor_visitInitializer_v_o
#define ast_Visitor_visitScope_v_o corto_script_ast_Visitor_visitScope_v_o
#define ast_Visitor_visitStatement_v_o corto_script_ast_Visitor_visitStatement_v_o
#define ast_Visitor_visitStorage_v_o corto_script_ast_Visitor_visitStorage_v_o
#define ast_Visitor_visitTernary_v_o corto_script_ast_Visitor_visitTernary_v_o
#define ast_Visitor_visitUnary_v_o corto_script_ast_Visitor_visitUnary_v_o
#define ast_Visitor_visitUse_v_o corto_script_ast_Visitor_visitUse_v_o
#define ast_Visitor_o corto_script_ast_Visitor_o

#endif

