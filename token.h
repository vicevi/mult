#ifndef MULT_TOKEN_H
#define MULT_TOKEN_H

#include "mult.h"

typedef enum {
    TOKEN_NAN
} token_type;
typedef struct {
    token_type type;
    char* value;
    int length;
} token;

// token basic operations
const void taddc(token* t, char c);
const void tempty(token *t); const void tprint(token *t);
// token arrays

#endif