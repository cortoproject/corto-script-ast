/* This is a managed file. Do not delete this comment. */

#include <corto/script/ast/ast.h>
#include "ast.h"

corto_string ast_Context_id(corto_object o, corto_id buffer) {

    if (!o) {
        sprintf(buffer, "null");
    } else if (corto_check_attr(o, CORTO_ATTR_NAMED)) {
        if (corto_parentof(o) == corto_lang_o) {
            strcpy(buffer, corto_idof(o));
        } else {
            corto_fullpath(buffer, o);
        }
    } else {
        corto_id tmp;
        corto_string_ser_t serData;
        corto_walk_opt s;
        serData.buffer = CORTO_BUFFER_INIT;
        serData.buffer.buf = tmp;
        serData.buffer.max = sizeof(corto_id)-strlen("<anonymous>");
        serData.compactNotation=TRUE;
        serData.prefixType = TRUE;
        serData.enableColors = FALSE;
        s = corto_string_ser(CORTO_LOCAL, CORTO_NOT, CORTO_WALK_TRACE_NEVER);
        corto_walk(&s, o, &serData);
        strcpy(buffer, tmp);
    }

    return buffer;
}

void ast_Context_addStatement(
    ast_Context _this,
    ast_Statement statement)
{
    ast_Block_addStatement(_this->block, statement);
}

void ast_Context_collect(
    ast_Context _this,
    corto_object o)
{
    /* Insert implementation */
}

int16_t ast_Context_construct(
    ast_Context _this)
{
    if (corto_tls_set(ast_PARSER_KEY, _this)) {
        return -1;
    }
    return 0;
}

void ast_Context_destruct(
    ast_Context _this)
{
    corto_iter it = corto_ll_iter(_this->defineAtFinalize);
    while (corto_iter_hasNext(&it)) {
        corto_object o = corto_iter_next(&it);
        if (corto_define(o)) {
            corto_error("error: defining object '%s' failed", corto_fullpath(NULL, o));
            _this->errors++;
        }
    }
}

void ast_Context_displayRecognitionError(
    ast_Context _this,
    uintptr_t recognizer,
    uintptr_t tokenNames)
{

}

int16_t ast_Context_init(
    ast_Context _this)
{
    corto_set_ref(&_this->defaultType, corto_int32_o);
    return 0;
}
