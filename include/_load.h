/* _load.h
 * This file is generated. Do not modify the contents of this file.
 */

#ifndef CORTO_SCRIPT_AST_LOAD_H
#define CORTO_SCRIPT_AST_LOAD_H


#ifdef __cplusplus
extern "C" {
#endif

CORTO_SCRIPT_AST_EXPORT extern corto_package corto_script_ast_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Binary_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Binary_left_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Binary_operand_type_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Binary_operator_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Binary_right_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Boolean_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Boolean_value_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Cast_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Cast_expr_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Cast_type_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Character_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Character_value_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Declaration_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Declaration_id_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Declaration_initializer_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Declaration_is_var_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Declaration_scope_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Declaration_set_scope_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Declaration_type_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_DeclarationIdentifier_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_DeclarationIdentifier_arguments_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_DeclarationIdentifier_ids_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Expression_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Expression_is_object_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Expression_ref_kind_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Expression_type_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_FloatingPoint_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_FloatingPoint_value_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_FunctionArgument_o;
CORTO_SCRIPT_AST_EXPORT extern corto_list corto_script_ast_FunctionArgumentList_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_FunctionArgument_inout_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_FunctionArgument_is_reference_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_FunctionArgument_name_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_FunctionArgument_type_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Identifier_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Identifier_id_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Initializer_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Initializer_collection_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Initializer_values_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_InitializerValue_o;
CORTO_SCRIPT_AST_EXPORT extern corto_list corto_script_ast_InitializerValueList_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_InitializerValue_key_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_InitializerValue_value_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Integer_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Integer_value_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Literal_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Member_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Member_expr_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Member_key_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Member_member_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Node_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Node_data_o;
CORTO_SCRIPT_AST_EXPORT extern corto_method corto_script_ast_Node_getData_o;
CORTO_SCRIPT_AST_EXPORT extern corto_method corto_script_ast_Node_setData_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Null_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Number_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Number_unit_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Scope_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Scope_default_type_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Scope_parent_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Scope_statements_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_SignedInteger_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_SignedInteger_value_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Statement_o;
CORTO_SCRIPT_AST_EXPORT extern corto_list corto_script_ast_StatementList_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Statement_column_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Statement_line_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Storage_o;
CORTO_SCRIPT_AST_EXPORT extern corto_list corto_script_ast_StorageList_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Storage_value_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_StorageInitializer_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_StorageInitializer_expr_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_StorageInitializer_initializer_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_String_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_String_delim_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_String_value_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Ternary_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Ternary_cond_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Ternary_false_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Ternary_true_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Unary_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Unary_expr_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Unary_operator_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Unary_postfix_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Use_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Use_alias_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Use_as_typesystem_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Use_package_o;
CORTO_SCRIPT_AST_EXPORT extern corto_class corto_script_ast_Visitor_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Visitor_errors_o;
CORTO_SCRIPT_AST_EXPORT extern corto_member corto_script_ast_Visitor_file_o;
CORTO_SCRIPT_AST_EXPORT extern corto_overridable corto_script_ast_Visitor_visitFunctionArguments_o;
CORTO_SCRIPT_AST_EXPORT extern corto_map corto_objectMap_o;
CORTO_SCRIPT_AST_EXPORT extern corto_overridable corto_script_ast_Node_visit_o;
CORTO_SCRIPT_AST_EXPORT extern corto_overridable corto_script_ast_Expression_fold_o;
CORTO_SCRIPT_AST_EXPORT extern corto_overridable corto_script_ast_Expression_getPtr_o;
CORTO_SCRIPT_AST_EXPORT extern corto_method corto_script_ast_Expression_getType_o;
CORTO_SCRIPT_AST_EXPORT extern corto_method corto_script_ast_Expression_getTypeForTarget_o;
CORTO_SCRIPT_AST_EXPORT extern corto_method corto_script_ast_Expression_isReference_o;
CORTO_SCRIPT_AST_EXPORT extern corto_overridable corto_script_ast_Expression_setType_o;
CORTO_SCRIPT_AST_EXPORT extern corto_method corto_script_ast_Binary_construct_o;
CORTO_SCRIPT_AST_EXPORT extern corto_override corto_script_ast_Binary_fold_o;
CORTO_SCRIPT_AST_EXPORT extern corto_override corto_script_ast_Binary_setType_o;
CORTO_SCRIPT_AST_EXPORT extern corto_method corto_script_ast_Initializer_apply_o;
CORTO_SCRIPT_AST_EXPORT extern corto_override corto_script_ast_Initializer_fold_o;
CORTO_SCRIPT_AST_EXPORT extern corto_method corto_script_ast_Initializer_propagateType_o;
CORTO_SCRIPT_AST_EXPORT extern corto_override corto_script_ast_Boolean_getPtr_o;
CORTO_SCRIPT_AST_EXPORT extern corto_method corto_script_ast_Boolean_init_o;
CORTO_SCRIPT_AST_EXPORT extern corto_override corto_script_ast_Character_getPtr_o;
CORTO_SCRIPT_AST_EXPORT extern corto_method corto_script_ast_Character_init_o;
CORTO_SCRIPT_AST_EXPORT extern corto_override corto_script_ast_FloatingPoint_getPtr_o;
CORTO_SCRIPT_AST_EXPORT extern corto_method corto_script_ast_FloatingPoint_init_o;
CORTO_SCRIPT_AST_EXPORT extern corto_override corto_script_ast_Integer_getPtr_o;
CORTO_SCRIPT_AST_EXPORT extern corto_method corto_script_ast_Integer_init_o;
CORTO_SCRIPT_AST_EXPORT extern corto_override corto_script_ast_SignedInteger_getPtr_o;
CORTO_SCRIPT_AST_EXPORT extern corto_method corto_script_ast_SignedInteger_init_o;
CORTO_SCRIPT_AST_EXPORT extern corto_override corto_script_ast_String_getPtr_o;
CORTO_SCRIPT_AST_EXPORT extern corto_method corto_script_ast_String_init_o;
CORTO_SCRIPT_AST_EXPORT extern corto_method corto_script_ast_Storage_get_object_o;
CORTO_SCRIPT_AST_EXPORT extern corto_overridable corto_script_ast_Storage_getPtr_o;
CORTO_SCRIPT_AST_EXPORT extern corto_method corto_script_ast_Storage_set_object_o;
CORTO_SCRIPT_AST_EXPORT extern corto_override corto_script_ast_Ternary_fold_o;
CORTO_SCRIPT_AST_EXPORT extern corto_override corto_script_ast_Ternary_setType_o;
CORTO_SCRIPT_AST_EXPORT extern corto_override corto_script_ast_Unary_fold_o;
CORTO_SCRIPT_AST_EXPORT extern corto_override corto_script_ast_Unary_setType_o;
CORTO_SCRIPT_AST_EXPORT extern corto_method corto_script_ast_Scope_addStatement_o;
CORTO_SCRIPT_AST_EXPORT extern corto_overridable corto_script_ast_Scope_visit_o;
CORTO_SCRIPT_AST_EXPORT extern corto_method corto_script_ast_Visitor_visit_o;
CORTO_SCRIPT_AST_EXPORT extern corto_overridable corto_script_ast_Visitor_visitBinary_o;
CORTO_SCRIPT_AST_EXPORT extern corto_overridable corto_script_ast_Visitor_visitDeclaration_o;
CORTO_SCRIPT_AST_EXPORT extern corto_overridable corto_script_ast_Visitor_visitExpression_o;
CORTO_SCRIPT_AST_EXPORT extern corto_overridable corto_script_ast_Visitor_visitFunctionArgument_o;
CORTO_SCRIPT_AST_EXPORT extern corto_overridable corto_script_ast_Visitor_visitInitializer_o;
CORTO_SCRIPT_AST_EXPORT extern corto_overridable corto_script_ast_Visitor_visitScope_o;
CORTO_SCRIPT_AST_EXPORT extern corto_overridable corto_script_ast_Visitor_visitStatement_o;
CORTO_SCRIPT_AST_EXPORT extern corto_overridable corto_script_ast_Visitor_visitStorage_o;
CORTO_SCRIPT_AST_EXPORT extern corto_overridable corto_script_ast_Visitor_visitTernary_o;
CORTO_SCRIPT_AST_EXPORT extern corto_overridable corto_script_ast_Visitor_visitUnary_o;
CORTO_SCRIPT_AST_EXPORT extern corto_overridable corto_script_ast_Visitor_visitUse_o;

#ifdef __cplusplus
}
#endif
#endif
