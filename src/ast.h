
#include <corto/script/ast/ast.h>

extern corto_tls ast_PARSER_KEY;

void ast_Context_error(
    ast_Context _this,
    char* fmt,
    ... );

void ast_Context_warning(
    ast_Context _this,
    char* fmt,
    ... );

corto_string ast_Context_id(
    corto_object o,
    corto_id buffer);

ast_Context ast_ctx(void);
