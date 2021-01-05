#include "../inc/libmx.h"

// #include "../inc/../inc/libmx.h"
// void mx_printchar(char c) {
//     write(1, &c, 1);
// }

void mx_print_strarr(char **arr, const char *delim) {
    if (arr != NULL && delim != NULL) {
        for (int i = 0; arr[i] != NULL; i++) {
            for (int j = 0; arr[i][j] != '\0'; j++) {
                write(1, &arr[i][j], 1);
            }
            if (arr[i+1] != NULL) {
                for (int j = 0; delim[j] != '\0'; j++) {
                    write(1, &delim[j], 1);
                }
            }
        }
        mx_printchar(10);
    }
}

// int main() {
//     char *arr[] = {"Hello", "mr", "Anderson"};
//     mx_print_strarr(arr, "----");
// }
