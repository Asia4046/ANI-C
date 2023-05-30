#include "include/anic.h"
#include "include/lexer.h"
#include "include/io.h"
#include <stdlib.h>

void anic_compile(char* src){
    lexer_T* lexer = init_lexer(src);
    token_T* tok = 0;

    while((tok = lexer_next_token(lexer))->type != TOKEN_EOF){
        printf("TOK(%s) (%d)\n", tok->value, tok->type);
    }
}

void anic_compile_file(const char* filename){
    char* src = anic_read_file(filename);
    anic_compile(src);
    free(src);
}