#include "mult.h"
#include "token.h"

error_type err = ERROR_NO;

void parse(token* tz, char* f) {
    FILE* file = fopen(f, "r");
    if(file != NULL) {
        int i = 1, ip = 1;
        token t = {TOKEN_NAN, "", 0}; token* ts = malloc(sizeof(token));
        char ch; while((ch = fgetc(file)) != EOF) {
            if(ch != '\n' && ch != '\t' && ch != ' ') { taddc(&t, ch); } else {
                if(t.length >= 1) {
                    i++; ip = i + 1;
                    token temp = {TOKEN_NAN, t.value, t.length};
                    ts = (token*)realloc(ts, ip * sizeof(token));
                    ts[i - 1] = temp; tempty(&t); tempty(&temp);
                }
            }
        }
        tz = (token*)realloc(tz, ip * sizeof(token));
        for(int j = 1; j < ip; j++) {
            tz[j] = ts[j];
            tprint(&tz[j]);
        }
        err = ERROR_NO;
    } else { err = ERROR_FILE_NOT_FOUND; }
}

int main(int argc, char** argw) {
    token* tokens = malloc(sizeof(token));
    if(argc > 1) {
        if(argc > 2) {
            for(int i = 1; i < argc; i++) { printf("- %s\n", argw[i]); }
        } else {
            char* file = argw[1];
            parse(tokens, file);
        }
    } else { INFO_PRINT; }
    return 0;
}