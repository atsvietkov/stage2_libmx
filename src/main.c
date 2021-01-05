#include "inc/libmx.h"
#include <stdio.h>

int main() {

    // quick_sort
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

    printf("%i\n", mx_quicksort(arr1, 0, 5));   // 3
    printf("%i\n", mx_quicksort(arr2, 0, 6));   // 6
    printf("%i\n", mx_quicksort(arr3, 0, 6));   // 3
    printf("%i\n", mx_quicksort(arr4, 0, 0));   // 0
    printf("%i\n", mx_quicksort(arr5, 0, 1));   // 1
    printf("%i\n", mx_quicksort(arr6, 0, 9));   // 8
    printf("%i\n", mx_quicksort(arr7, 0, 4));   // 4
    printf("%i\n", mx_quicksort(arr8, 0, 3));   // 3
    printf("%i\n", mx_quicksort(arr9, 0, 9));   // 8
    printf("%i\n", mx_quicksort(arr10, 0, 9));  // 8
    printf("%i\n", mx_quicksort(arr11, 4, 11)); // 5
    printf("%i\n", mx_quicksort(arr12, 5, 6));  // 0
    // EOF quick_sort
}
