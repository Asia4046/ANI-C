#ifndef ANIC_AST_H
#define ANIC_AST_H

typedef struct AST_STRUCT
{
  enum
  {
    AST_COMPOUND,
    AST_FUNCTION,
    AST_CALL,
    AST_ASSIGNMENT,
    AST_DEFINITION_TYPE,
    AST_VARIABLE,
    AST_STATEMENT,
    AST_ACCESS,
    AST_INT,
    AST_NOOP,
  } type;
  
} AST_T;


#endif