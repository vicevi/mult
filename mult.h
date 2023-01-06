#ifndef MULT_H
#define MULT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INFO_PROJECT "Mult"
#define INFO_VERSION "v0 \"eternal\""
#define INFO_AUTHOR "Vice"

#define INFO_PRINT printf("%s %s by %s.\n", INFO_PROJECT, INFO_VERSION, INFO_AUTHOR);

typedef enum {
    ERROR_NO,
    ERROR_UNEXPECTED,
    ERROR_FILE_NOT_FOUND
} error_type;

#endif