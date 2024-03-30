#ifndef ANI_C_TOKEN_H
#define ANI_C_TOKEN_H

#include <stdio.h>
#include <string.h>

typedef struct TOKEN_STRUCT{

    char* value;
    enum{

        TOKEN_ID,
        TOKEN_EQUALS,
        TOKEN_LPAREN,
        TOKEN_RPAREN,
        TOKEN_LBRACE,
        TOKEN_RBRACE,
        TOKEN_COLON,
        TOKEN_COMMA,
        TOKEN_LT,
        TOKEN_GT,
        TOKEN_RIGHT_ARROW,
        TOKEN_INT,
        TOKEN_SEMI,
        TOKEN_EOF

    } type;

} token_T;

token_T* init_token(char* value, int type);

#endif