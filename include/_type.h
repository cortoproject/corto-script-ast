/* _type.h
 * This file is generated. Do not modify its contents.
 */

#ifndef CORTO_SCRIPT_AST_TYPE_H
#define CORTO_SCRIPT_AST_TYPE_H


/* Private dependencies */
#ifdef CORTO_SCRIPT_AST_IMPL
#endif
#ifdef __cplusplus
extern "C" {
#endif

/* -- Native types -- */
#ifndef CORTO_SCRIPT_AST_H
#endif


/* -- Type definitions -- */

typedef corto_rb corto_objectMap;

/* class corto/script/ast/Node */
typedef struct corto_script_ast_Node_s {
    corto_objectMap data;
} *corto_script_ast_Node;

/* class corto/script/ast/Expression */
typedef struct corto_script_ast_Expression_s {
    struct corto_script_ast_Node_s super;
    corto_ref_kind ref_kind;
    bool is_object;
    corto_type type;
} *corto_script_ast_Expression;

/* class corto/script/ast/Binary */
typedef struct corto_script_ast_Binary_s {
    struct corto_script_ast_Expression_s super;
    corto_script_ast_Expression left;
    corto_script_ast_Expression right;
    corto_operatorKind _operator;
    corto_type operand_type;
} *corto_script_ast_Binary;

/* class corto/script/ast/Literal */
typedef struct corto_script_ast_Literal_s {
    struct corto_script_ast_Expression_s super;
} *corto_script_ast_Literal;

/* class corto/script/ast/Boolean */
typedef struct corto_script_ast_Boolean_s {
    struct corto_script_ast_Literal_s super;
    bool value;
} *corto_script_ast_Boolean;

/* class corto/script/ast/Storage */
typedef struct corto_script_ast_Storage_s {
    struct corto_script_ast_Expression_s super;
    uintptr_t value;
} *corto_script_ast_Storage;

/* class corto/script/ast/Cast */
typedef struct corto_script_ast_Cast_s {
    struct corto_script_ast_Expression_s super;
    corto_script_ast_Storage type;
    corto_script_ast_Expression expr;
} *corto_script_ast_Cast;

/* class corto/script/ast/Character */
typedef struct corto_script_ast_Character_s {
    struct corto_script_ast_Literal_s super;
    char value;
} *corto_script_ast_Character;

/* class corto/script/ast/Statement */
typedef struct corto_script_ast_Statement_s {
    struct corto_script_ast_Node_s super;
    int32_t line;
    int32_t column;
} *corto_script_ast_Statement;

#ifndef corto_script_ast_StorageList_DEFINED
#define corto_script_ast_StorageList_DEFINED
typedef corto_ll corto_script_ast_StorageList;
#endif

/* class corto/script/ast/FunctionArgument */
typedef struct corto_script_ast_FunctionArgument_s {
    struct corto_script_ast_Node_s super;
    corto_string name;
    corto_script_ast_Storage type;
    corto_inout inout;
    bool is_reference;
} *corto_script_ast_FunctionArgument;

#ifndef corto_script_ast_FunctionArgumentList_DEFINED
#define corto_script_ast_FunctionArgumentList_DEFINED
typedef corto_ll corto_script_ast_FunctionArgumentList;
#endif

/* class corto/script/ast/DeclarationIdentifier */
typedef struct corto_script_ast_DeclarationIdentifier_s {
    struct corto_script_ast_Node_s super;
    corto_script_ast_StorageList ids;
    corto_script_ast_FunctionArgumentList arguments;
} *corto_script_ast_DeclarationIdentifier;

/* class corto/script/ast/InitializerValue */
typedef struct corto_script_ast_InitializerValue_s {
    struct corto_script_ast_Node_s super;
    corto_string key;
    corto_script_ast_Expression value;
} *corto_script_ast_InitializerValue;

#ifndef corto_script_ast_InitializerValueList_DEFINED
#define corto_script_ast_InitializerValueList_DEFINED
typedef corto_ll corto_script_ast_InitializerValueList;
#endif

/* class corto/script/ast/Initializer */
typedef struct corto_script_ast_Initializer_s {
    struct corto_script_ast_Expression_s super;
    bool collection;
    corto_script_ast_InitializerValueList values;
} *corto_script_ast_Initializer;

/* class corto/script/ast/Scope */
typedef struct corto_script_ast_Scope_s *corto_script_ast_Scope;

#ifndef corto_script_ast_StatementList_DEFINED
#define corto_script_ast_StatementList_DEFINED
typedef corto_ll corto_script_ast_StatementList;
#endif

/* class corto/script/ast/Scope */
struct corto_script_ast_Scope_s {
    struct corto_script_ast_Node_s super;
    corto_script_ast_Scope parent;
    corto_script_ast_Storage default_type;
    corto_script_ast_StatementList statements;
};

/* class corto/script/ast/Declaration */
typedef struct corto_script_ast_Declaration_s {
    struct corto_script_ast_Statement_s super;
    corto_script_ast_Storage type;
    corto_script_ast_DeclarationIdentifier id;
    bool set_scope;
    bool is_var;
    corto_script_ast_Initializer initializer;
    corto_script_ast_Scope scope;
} *corto_script_ast_Declaration;

/* class corto/script/ast/Number */
typedef struct corto_script_ast_Number_s {
    struct corto_script_ast_Literal_s super;
    corto_string unit;
} *corto_script_ast_Number;

/* class corto/script/ast/FloatingPoint */
typedef struct corto_script_ast_FloatingPoint_s {
    struct corto_script_ast_Number_s super;
    double value;
} *corto_script_ast_FloatingPoint;

/* class corto/script/ast/Identifier */
typedef struct corto_script_ast_Identifier_s {
    struct corto_script_ast_Storage_s super;
    corto_string id;
} *corto_script_ast_Identifier;

/* class corto/script/ast/Integer */
typedef struct corto_script_ast_Integer_s {
    struct corto_script_ast_Number_s super;
    uint64_t value;
} *corto_script_ast_Integer;

/* class corto/script/ast/Member */
typedef struct corto_script_ast_Member_s {
    struct corto_script_ast_Storage_s super;
    corto_script_ast_Storage expr;
    corto_string key;
    corto_member member;
} *corto_script_ast_Member;

/* class corto/script/ast/Null */
typedef struct corto_script_ast_Null_s {
    struct corto_script_ast_Literal_s super;
} *corto_script_ast_Null;

/* class corto/script/ast/SignedInteger */
typedef struct corto_script_ast_SignedInteger_s {
    struct corto_script_ast_Number_s super;
    int64_t value;
} *corto_script_ast_SignedInteger;

/* class corto/script/ast/StorageInitializer */
typedef struct corto_script_ast_StorageInitializer_s {
    struct corto_script_ast_Storage_s super;
    corto_script_ast_Storage expr;
    corto_script_ast_Initializer initializer;
} *corto_script_ast_StorageInitializer;

/* class corto/script/ast/String */
typedef struct corto_script_ast_String_s {
    struct corto_script_ast_Literal_s super;
    corto_string value;
    char delim;
} *corto_script_ast_String;

/* class corto/script/ast/Ternary */
typedef struct corto_script_ast_Ternary_s {
    struct corto_script_ast_Expression_s super;
    corto_script_ast_Expression cond;
    corto_script_ast_Expression _true;
    corto_script_ast_Expression _false;
} *corto_script_ast_Ternary;

/* class corto/script/ast/Unary */
typedef struct corto_script_ast_Unary_s {
    struct corto_script_ast_Expression_s super;
    corto_script_ast_Expression expr;
    corto_operatorKind _operator;
    bool postfix;
} *corto_script_ast_Unary;

/* class corto/script/ast/Use */
typedef struct corto_script_ast_Use_s {
    struct corto_script_ast_Statement_s super;
    corto_string package;
    corto_string alias;
    bool as_typesystem;
} *corto_script_ast_Use;

/* class corto/script/ast/Visitor */
typedef struct corto_script_ast_Visitor_s {
    corto_string file;
    int32_t errors;
} *corto_script_ast_Visitor;


#ifdef __cplusplus
}
#endif
#endif

