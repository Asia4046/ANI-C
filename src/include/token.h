#ifndef ANIC_TOKEN_H
#define ANIC_TOKEN_H

typedef struct TOKEN_STRUCT
{
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
        TOKEN_SEMI,
        TOKEN_INT

    }type;
}token_T;

token_T* init_token(char* value, int type);

#endif