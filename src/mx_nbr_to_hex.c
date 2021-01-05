// #include "../inc/../inc/libmx.h"
#include "../inc/libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    // LONG MAX = 4 294 967 295
    short hex_len = 1;
    unsigned long nbr_cpy = nbr;
    for ( ; nbr_cpy /= 16 ; hex_len++);
    char *hex = (char*)malloc((sizeof(char)) * hex_len);
    if (!hex) {
        exit(-1);
    }
    for (int i = hex_len-1; i >= 0; i--) {
        if (nbr % 16 < 10) {
            hex[i] = (nbr % 16) + 48;
        }
        else {
            hex[i] = (nbr % 16) + 87;
        }
        nbr /= 16;
    }
    return hex;
}

// #include <stdio.h>
// int main() {
//     for (unsigned long int i = 1024; i <= 2048; i++) {
//         printf("%lu\t -- %s\n", i, mx_nbr_to_hex(i));
//     }
//     unsigned long int i = 4294967295;
//     printf("%lu\t -- %s\n", i, mx_nbr_to_hex(i));
// }
