#include "../inc/libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
    if (arr && delim) {
        for (int i = 0; arr[i] != NULL; i++) {
            mx_printstr(arr[i]);
            if(arr[i+1]) {
                mx_printstr(delim);
            }
        }
        mx_printchar(10);
    }
}
