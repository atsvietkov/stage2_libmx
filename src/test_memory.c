#include "../inc/libmx.h"

int main() {
    // Memory: basic
    int arr[10] = { 3,3,3,3,3,3,3,3,3,3 };
    mx_print_intarr(arr, 10);
    mx_memset(arr, 0, 10*sizeof(int));
    mx_print_intarr(arr, 10);

}
