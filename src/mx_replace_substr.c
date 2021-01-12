#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    if (!str || !sub || !replace) {
        return NULL;
    }
    else if(mx_strlen(str) < mx_strlen(sub)) {
        return (char*)str;
    }
    else {
        char *new_str = mx_strnew(mx_strlen(str) - 
                                 (mx_count_substr(str, sub) * mx_strlen(sub)) + 
                                 (mx_count_substr(str, sub) * mx_strlen(replace)));
        int i = 0;
        while(str+i) {
            if(mx_get_substr_index(str+i, sub) == -1) {
                break;
            }
            else {
                mx_strncat(new_str, str+i, mx_get_substr_index(str+i, sub));
                mx_strcat(new_str, replace);
                i += mx_get_substr_index(str+i, sub) + mx_strlen(sub);
            }
        }
        return (char*)new_str;
    }
}
