#include "../inc/libmx.h"
// #include <stdio.h>

void print_intarr(int *arr, int n) {
    int i = 0;
    while (i<n) {
        mx_printint(arr[i]);
        mx_printchar(' ');
        i++;
    }
    mx_printchar(10);
}

int main() {

    // Utils

    // mx_printchar('x');
    // mx_printchar(10);

    // mx_printstr("Hello");
    // mx_printchar(10);

    // char *arr1[] = { "Good", "morning", "mr", "Anderson", "wake up", "l0l", NULL };
    // mx_print_strarr(arr1, " -\n");

    // mx_printintn(-1234);
    // mx_printintn(0);
    // mx_printintn(INT_MIN);
    // mx_printintn(INT_MAX);
    // mx_printintn(1234);

    //  for (unsigned long int i = 0; i <= 128; i++) {
    //      mx_printint(i);
    //      mx_printchar('\t');
    //      mx_printstrn(mx_nbr_to_hex(i));
    //  }

    // int arr1[9] = {68, -20, 2, -6, 8, 53, 79, -30, -25};
    // int arr2[2] = {-7, -23};
    // int arr3[13] = {33,19,39,47,10,63,69,48,26,25,67,-4,2};
    // int arr4[15] = {-11,79,69,-9,-23,2,43,66,-25,35,38,61,84,7,11};
    // int arr5[7] = {-2,20,54,86,60,73,52};
    // mx_printint(mx_bubble_sort(arr1, 9));
    // mx_printchar(10);
    // mx_printint(mx_bubble_sort(arr2, 2));
    // mx_printchar(10);
    // mx_printint(mx_bubble_sort(arr3, 13));
    // mx_printchar(10);
    // mx_printint(mx_bubble_sort(arr4, 15));
    // mx_printchar(10);
    // mx_printint(mx_bubble_sort(arr5, 7));
    // mx_printchar(10);

    int arr1[] = { 19,83,68,-20,2,-6 };
    int arr2[] = { 53,79,-30,-25,-18,-28,-3 };
    int arr3[] = { -23,19,10,22,33,19,39 };
    int arr4[] = { 10 };
    int arr5[] = { 69,48 };
    int arr6[] = { 25,67,-4,2,37,20,3,-11,79,69 };
    int arr7[] = { -23,2,43,66,-25 };
    int arr8[] = { 38,61,84,7 };
    int arr9[] = { 83,-2,34,-2,20,54,86,60,73,52 };
    int arr10[] = { 25,67,-4,2,37,20,3,-11,79,69 };
    int arr11[] = { 33,19,39,47,10,63,69,48,26,25,67,-4,2 };
    int arr12[] = { -6,-9,27,41,38,-13,8,67 };
    print_intarr(arr1,6);
    printf("%i\n", mx_quicksort(arr1, 0, 5));   // 3
    print_intarr(arr1,6);
    printf("-----------\n");
    print_intarr(arr2,7);
    printf("%i\n", mx_quicksort(arr2, 0, 6));   // 6
    print_intarr(arr2,7);
    printf("-----------\n");
    print_intarr(arr3,7);
    printf("%i\n", mx_quicksort(arr3, 0, 6));   // 3
    print_intarr(arr3,7);
    printf("-----------\n");
    print_intarr(arr4,1);
    printf("%i\n", mx_quicksort(arr4, 0, 0));   // 0
    print_intarr(arr4,1);
    printf("-----------\n");
    print_intarr(arr5,2);
    printf("%i\n", mx_quicksort(arr5, 0, 1));   // 1
    print_intarr(arr5,2);
    printf("-----------\n");
    print_intarr(arr6,10);
    printf("%i\n", mx_quicksort(arr6, 0, 9));   // 8
    print_intarr(arr6,10);
    printf("-----------\n");
    print_intarr(arr7,5);
    printf("%i\n", mx_quicksort(arr7, 0, 4));   // 4
    print_intarr(arr7,5);
    printf("-----------\n");
    print_intarr(arr8,4);
    printf("%i\n", mx_quicksort(arr8, 0, 3));   // 3
    print_intarr(arr8,4);
    printf("-----------\n");
    print_intarr(arr9,10);
    printf("%i\n", mx_quicksort(arr9, 0, 9));   // 8
    print_intarr(arr9,10);
    printf("-----------\n");
    print_intarr(arr10,10);
    printf("%i\n", mx_quicksort(arr10, 0, 9));  // 8
    print_intarr(arr10,10);
    printf("-----------\n");
    print_intarr(arr11,13);
    printf("%i\n", mx_quicksort(arr11, 4, 11)); // 5
    print_intarr(arr11,13);
    printf("-----------\n");
    print_intarr(arr12,8);
    printf("%i\n", mx_quicksort(arr12, 5, 6));  // 0
    print_intarr(arr12,8);
    printf("-----------\n");

    // EOF Utils

    // // quick_sort
    // int arr1[] = { 19,83,68,-20,2,-6 };
    // int arr2[] = { 53,79,-30,-25,-18,-28,-3 };
    // int arr3[] = { -23,19,10,22,33,19,39 };
    // int arr4[] = { 10 };
    // int arr5[] = { 69,48 };
    // int arr6[] = { 25,67,-4,2,37,20,3,-11,79,69 };
    // int arr7[] = { -23,2,43,66,-25 };
    // int arr8[] = { 38,61,84,7 };
    // int arr9[] = { 83,-2,34,-2,20,54,86,60,73,52 };
    // int arr10[] = { 25,67,-4,2,37,20,3,-11,79,69 };
    // int arr11[] = { 33,19,39,47,10,63,69,48,26,25,67,-4,2 };
    // int arr12[] = { -6,-9,27,41,38,-13,8,67 };

    // printf("%i\n", mx_quicksort(arr1, 0, 5));   // 3
    // printf("%i\n", mx_quicksort(arr2, 0, 6));   // 6
    // printf("%i\n", mx_quicksort(arr3, 0, 6));   // 3
    // printf("%i\n", mx_quicksort(arr4, 0, 0));   // 0
    // printf("%i\n", mx_quicksort(arr5, 0, 1));   // 1
    // printf("%i\n", mx_quicksort(arr6, 0, 9));   // 8
    // printf("%i\n", mx_quicksort(arr7, 0, 4));   // 4
    // printf("%i\n", mx_quicksort(arr8, 0, 3));   // 3
    // printf("%i\n", mx_quicksort(arr9, 0, 9));   // 8
    // printf("%i\n", mx_quicksort(arr10, 0, 9));  // 8
    // printf("%i\n", mx_quicksort(arr11, 4, 11)); // 5
    // printf("%i\n", mx_quicksort(arr12, 5, 6));  // 0
    // // EOF quick_sort
}
