/* _interface.h
 * This file is generated. Do not modify the contents of this file.
 */

#ifndef CORTO_SCRIPT_AST_INTERFACE_H
#define CORTO_SCRIPT_AST_INTERFACE_H


#ifdef __cplusplus
extern "C" {
#endif


/* class corto/script/ast/Binary */

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Binary_construct(
    corto_script_ast_Binary _this);

CORTO_SCRIPT_AST_EXPORT
corto_script_ast_Expression _corto_script_ast_Binary_fold(
    corto_script_ast_Binary _this);

CORTO_SCRIPT_AST_EXPORT
void _corto_script_ast_Binary_setType(
    corto_script_ast_Binary _this,
    corto_type type);


/* class corto/script/ast/Boolean */

CORTO_SCRIPT_AST_EXPORT
uintptr_t _corto_script_ast_Boolean_getPtr(
    corto_script_ast_Boolean _this);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Boolean_init(
    corto_script_ast_Boolean _this);


/* class corto/script/ast/Character */

CORTO_SCRIPT_AST_EXPORT
uintptr_t _corto_script_ast_Character_getPtr(
    corto_script_ast_Character _this);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Character_init(
    corto_script_ast_Character _this);


/* class corto/script/ast/Expression */

CORTO_SCRIPT_AST_EXPORT
corto_script_ast_Expression _corto_script_ast_Expression_fold_v(
    corto_script_ast_Expression _this);

CORTO_SCRIPT_AST_EXPORT
uintptr_t _corto_script_ast_Expression_getPtr_v(
    corto_script_ast_Expression _this);

CORTO_SCRIPT_AST_EXPORT
corto_type _corto_script_ast_Expression_getType(
    corto_script_ast_Expression _this);

CORTO_SCRIPT_AST_EXPORT
corto_type _corto_script_ast_Expression_getTypeForTarget(
    corto_script_ast_Expression _this,
    corto_type target,
    corto_script_ast_Expression target_expr);

CORTO_SCRIPT_AST_EXPORT
bool _corto_script_ast_Expression_isReference(
    corto_script_ast_Expression _this);

CORTO_SCRIPT_AST_EXPORT
void _corto_script_ast_Expression_setType_v(
    corto_script_ast_Expression _this,
    corto_type type);


/* class corto/script/ast/FloatingPoint */

CORTO_SCRIPT_AST_EXPORT
uintptr_t _corto_script_ast_FloatingPoint_getPtr(
    corto_script_ast_FloatingPoint _this);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_FloatingPoint_init(
    corto_script_ast_FloatingPoint _this);


/* class corto/script/ast/Initializer */

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Initializer_apply(
    corto_script_ast_Initializer _this,
    uintptr_t helper);

CORTO_SCRIPT_AST_EXPORT
corto_script_ast_Expression _corto_script_ast_Initializer_fold(
    corto_script_ast_Initializer _this);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Initializer_propagateType(
    corto_script_ast_Initializer _this,
    corto_type type);


/* class corto/script/ast/Integer */

CORTO_SCRIPT_AST_EXPORT
uintptr_t _corto_script_ast_Integer_getPtr(
    corto_script_ast_Integer _this);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Integer_init(
    corto_script_ast_Integer _this);


/* class corto/script/ast/Node */

CORTO_SCRIPT_AST_EXPORT
corto_object _corto_script_ast_Node_getData(
    corto_script_ast_Node _this,
    const char *key);

CORTO_SCRIPT_AST_EXPORT
void _corto_script_ast_Node_setData(
    corto_script_ast_Node _this,
    const char *key,
    corto_object value);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Node_visit_v(
    corto_script_ast_Node _this,
    corto_script_ast_Visitor visitor);


/* class corto/script/ast/Scope */

CORTO_SCRIPT_AST_EXPORT
void _corto_script_ast_Scope_addStatement(
    corto_script_ast_Scope _this,
    corto_script_ast_Statement node);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Scope_visit_v(
    corto_script_ast_Scope _this,
    corto_script_ast_Visitor visitor);


/* class corto/script/ast/SignedInteger */

CORTO_SCRIPT_AST_EXPORT
uintptr_t _corto_script_ast_SignedInteger_getPtr(
    corto_script_ast_SignedInteger _this);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_SignedInteger_init(
    corto_script_ast_SignedInteger _this);


/* class corto/script/ast/Storage */

CORTO_SCRIPT_AST_EXPORT
corto_object _corto_script_ast_Storage_get_object(
    corto_script_ast_Storage _this);

CORTO_SCRIPT_AST_EXPORT
uintptr_t _corto_script_ast_Storage_getPtr_v(
    corto_script_ast_Storage _this);

CORTO_SCRIPT_AST_EXPORT
void _corto_script_ast_Storage_set_object(
    corto_script_ast_Storage _this,
    corto_object obj);


/* class corto/script/ast/String */

CORTO_SCRIPT_AST_EXPORT
uintptr_t _corto_script_ast_String_getPtr(
    corto_script_ast_String _this);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_String_init(
    corto_script_ast_String _this);


/* class corto/script/ast/Ternary */

CORTO_SCRIPT_AST_EXPORT
corto_script_ast_Expression _corto_script_ast_Ternary_fold(
    corto_script_ast_Ternary _this);

CORTO_SCRIPT_AST_EXPORT
void _corto_script_ast_Ternary_setType(
    corto_script_ast_Ternary _this,
    corto_type type);


/* class corto/script/ast/Unary */

CORTO_SCRIPT_AST_EXPORT
corto_script_ast_Expression _corto_script_ast_Unary_fold(
    corto_script_ast_Unary _this);

CORTO_SCRIPT_AST_EXPORT
void _corto_script_ast_Unary_setType(
    corto_script_ast_Unary _this,
    corto_type type);


/* class corto/script/ast/Visitor */

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Visitor_visit(
    corto_script_ast_Visitor _this,
    corto_script_ast_Node node);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Visitor_visitBinary_v(
    corto_script_ast_Visitor _this,
    corto_script_ast_Binary node);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Visitor_visitDeclaration_v(
    corto_script_ast_Visitor _this,
    corto_script_ast_Declaration node);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Visitor_visitExpression_v(
    corto_script_ast_Visitor _this,
    corto_script_ast_Expression node);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Visitor_visitFunctionArgument_v(
    corto_script_ast_Visitor _this,
    corto_script_ast_FunctionArgument argument);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Visitor_visitFunctionArguments_v(
    corto_script_ast_Visitor _this,
    corto_script_ast_FunctionArgumentList arguments);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Visitor_visitInitializer_v(
    corto_script_ast_Visitor _this,
    corto_script_ast_Initializer node);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Visitor_visitScope_v(
    corto_script_ast_Visitor _this,
    corto_script_ast_Scope node);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Visitor_visitStatement_v(
    corto_script_ast_Visitor _this,
    corto_script_ast_Statement node);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Visitor_visitStorage_v(
    corto_script_ast_Visitor _this,
    corto_script_ast_Storage node);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Visitor_visitTernary_v(
    corto_script_ast_Visitor _this,
    corto_script_ast_Ternary node);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Visitor_visitUnary_v(
    corto_script_ast_Visitor _this,
    corto_script_ast_Unary node);

CORTO_SCRIPT_AST_EXPORT
int16_t _corto_script_ast_Visitor_visitUse_v(
    corto_script_ast_Visitor _this,
    corto_script_ast_Use node);

#ifdef __cplusplus
}
#endif

#endif

