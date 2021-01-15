#include "../inc/libmx.h"
#include <string.h>

int main() {
    // Memory: basic

    // int arr[10] = { 3,3,3,3,3,3,3,3,3,3 };
    // mx_print_intarr(arr, 10);
    // mx_memset(arr, 2, 10*sizeof(int));
    // mx_print_intarr(arr, 10);

    // int arr1[10];
    // int arr2[10];
    // mx_memset(arr1, 0, 10 * sizeof(int));
    // mx_memset(arr2, 1, 10 * sizeof(int));
    // mx_print_intarr(arr1, 10);
    // mx_print_intarr(arr2, 10);
    // mx_memcpy(arr2, arr1, 10 * sizeof(int));
    // mx_print_intarr(arr1, 10);
    // mx_print_intarr(arr2, 10);

    // int arr1[10];
    // int arr2[10];
    // mx_memset(arr1, 0, 10*sizeof(int));
    // mx_memset(arr2, 0, 10*sizeof(int));
    // arr2[9] = 2;
    // mx_printintn(mx_memcmp(arr1, arr2, 10*sizeof(int)));

    char *arr1 = mx_strnew(10);
    mx_strcpy(arr1, "Hello, Neo");
    mx_printstrn(arr1);
    mx_printintn(malloc_usable_size(arr1));
    char *arr2;
    arr2 = (char*)mx_realloc(arr1, 1);
    printf("%s\n", arr2);
    mx_printintn(malloc_usable_size(arr2));

}
