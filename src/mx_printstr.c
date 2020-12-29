#include "libmx.h"

void mx_printstr(const char *s) {
    int strlen = 0;
    for ( ; s[strlen] != '\0'; strlen++);
    write(1, s, mx_strlen(s));
}
