#include "include/lexer.h"
#include <stdlib.h>

lexer_T* init_lexer(char* src){
    lexer_T* lexer = calloc(1, sizeof(struct LEXER_STRUCT));
    lexer->src = src;
    lexer->src_size = strlen(src);
    lexer->i = 0;
    lexer->c = src[lexer->i];

    return lexer;
}

void lexer_advance(lexer_T* lexer){

}

token_T* lexer_next_token(lexer_T* lexer){

}