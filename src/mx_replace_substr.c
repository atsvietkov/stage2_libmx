#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    if (!str || !sub || !replace) {
        return NULL;
    }
    else {
        int mem = mx_count_substr(str, sub);
        char *dst = mx_strnew(mx_strlen(str) + (mx_strlen(replace) - mx_strlen(sub)) * mem);
        int j = 0;
        for (int i = 0; str[i]; ) {
            
        }

    }
}
