#include "../inc/libmx.h"

int main() {
    // Memory: basic

    // int arr[10] = { 3,3,3,3,3,3,3,3,3,3 };
    // mx_print_intarr(arr, 10);
    // mx_memset(arr, 0, 10*sizeof(int));
    // mx_print_intarr(arr, 10);

    int arr1[10];
    int arr2[10];
    mx_memset(arr1, 0, 10 * sizeof(int));
    mx_memset(arr2, 1, 10 * sizeof(int));
    mx_print_intarr(arr1, 10);
    mx_print_intarr(arr2, 10);
    mx_memcpy(arr2, arr1, 10 * sizeof(int));
    mx_print_intarr(arr1, 10);
    mx_print_intarr(arr2, 10);

}
