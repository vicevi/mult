#include "token.h"

const void taddc(token* t, char c) {
	size_t l = strlen(t->value); char* s = malloc(l + 2);
    strcpy(s, t->value); s[l] = c; s [l + 1]  = '\0';
    t->value = s; t->length++;
}
const void tempty(token *t) { t->value = ""; t->length = 0; }
const void tprint(token *t) { printf("{%d, \"%s\", %d}\n", t->type, t->value, t->length); }