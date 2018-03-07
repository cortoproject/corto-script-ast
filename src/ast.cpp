/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>

corto_tls ast_PARSER_KEY;

void ast_report(
    corto_string kind,
    corto_string filename,
    uint32_t line,
    uint32_t column,
    corto_string error)
{
    if (filename) {
        corto_error("%s:%d:%d: %s: %s", filename, line, column, kind, error);
    } else {
        corto_error("%d:%d: %s: %s", line, column, kind, error);
    }

}

void ast_Context_error(
    ast_Context _this,
    char* fmt, ... )
{
    va_list args;
    int line = _this->line;

    va_start(args, fmt);
    char *err = corto_vasprintf(fmt, args);
    va_end(args);

    ast_report("error", _this->filename, _this->column ? line : line - 1, _this->column, err);

    corto_dealloc(err);
    _this->errors++;
}

void ast_Context_warning(
    ast_Context _this,
    char* fmt, ... )
{
    va_list args;
    char msgbuff[1024];
    int line = _this->line;

    va_start(args, fmt);
    vsprintf(msgbuff, fmt, args);
    va_end(args);

    ast_report("warning", _this->filename, line, _this->column, msgbuff);

    _this->warnings++;
}

/* Obtain parser */
ast_Context ast_ctx(void) {
    return (ast_Context)corto_tls_get(ast_PARSER_KEY);
}

/* Indentation for debugging code */
int32_t ast_indent = 0;

void ast_doIndent(
    char *buffer)
{
    corto_uint32 indent = ast_indent;
    buffer[0] = '\0';
    while (indent--) {
        strcat(buffer, "| ");
    }

}

extern "C"
int cortomain(int argc, char *argv[]) {

    /* Insert implementation */

    return 0;
}
