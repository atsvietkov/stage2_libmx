#include "../inc/libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
    int i;
    int j = 0;
    for(i = mx_strlen(s1); s2[j] != '\0'; i++) {
        s1[i] = s2[j];
        j++;
    }
    s1[i] = '\0';
    return (char*)s1;
}
