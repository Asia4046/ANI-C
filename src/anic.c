#include "include/anic.h"
#include "include/lexer.h"
#include "include/parser.h"
#include "include/io.h"
#include <stdlib.h>

void anic_compile(char* src){
    lexer_T* lexer = init_lexer(src);
    parser_T* parser = init_parser(lexer);
    AST_T* root = parser_parse(parser);
    token_T* tok = 0;

    while((tok = lexer_next_token(lexer))->type != TOKEN_EOF){
        printf("%s\n", token_to_str(tok));
    }
}

void anic_compile_file(const char* filename){
    char* src = anic_read_file(filename);
    anic_compile(src);
    free(src);
}