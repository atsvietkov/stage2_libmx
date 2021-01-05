#include "../inc/libmx.h"

// void print_intarr(int *arr, int n);

int mx_quicksort(int *arr, int left, int right) {
    int swap = 0;
    if (!arr) {
        swap = -1;
    }
    else {
        if (left < right) {
            int l = left;
            int r = right;
            int pivot = arr[right];

            while (l <= r) {
                while (arr[l] < pivot) {
                    l++;
                }
                while (arr[r] > pivot) {
                    r--;
                }
                if (l <= r) {
                    if (arr[r] != arr[l]) {
                        // print_intarr(arr,6);
                        int temp = arr[l];
                        arr[l] = arr[r];
                        arr[r] = temp;
                        swap++;
                        // print_intarr(arr,6);
                    }
                    r--;
                    l++;
                }
            }
            swap += mx_quicksort(arr, left, r);
            swap += mx_quicksort(arr, l, right);
        }
    }
    return swap;
}

// int mx_quicksort(int *arr, int left, int right) {
//     int swap = 0;
//     if (!arr) {
//         swap = -1;
//     }
//     else {
//         if(left < right) {
//             // int l = left-1;
//             // int r = right;
//             int pivot = arr[right];
//             int l = left-1;
//             for(int j = left; j <= right-1; j++) {
//                 if(arr[j] <= pivot) {
//                     l++;
//                     int temp = arr[l];
//                     arr[l] = arr[j];
//                     arr[j] = temp;
//                     swap++;
//                     // print_intarr(arr,6);
//                 }
//             }
//             int temp = arr[l+1];
//             arr[l+1] = arr[right];
//             arr[right] = temp;
//             print_intarr(arr,6);
//             swap++;
//             pivot = l+1;
//             swap += mx_quicksort(arr, left, pivot-1);
//             swap += mx_quicksort(arr, pivot+1, right);
//         }
//     }
//     return swap;
// }

// #include <stdio.h>
// void print_intarr(int *arr, int n) {
//     int i = 0;
//     while (i<n) {
//         printf ("%i  ",arr[i]);
//         i++;
//     }
//     printf("\n");
// }

// int main() {
//     int arr1[] = { 19,83,68,-20,2,-6 };
//     int arr2[] = { 53,79,-30,-25,-18,-28,-3 };
//     int arr3[] = { -23,19,10,22,33,19,39 };
//     int arr4[] = { 10 };
//     int arr5[] = { 69,48 };
//     int arr6[] = { 25,67,-4,2,37,20,3,-11,79,69 };
//     int arr7[] = { -23,2,43,66,-25 };
//     int arr8[] = { 38,61,84,7 };
//     int arr9[] = { 83,-2,34,-2,20,54,86,60,73,52 };
//     int arr10[] = { 25,67,-4,2,37,20,3,-11,79,69 };
//     int arr11[] = { 33,19,39,47,10,63,69,48,26,25,67,-4,2 };
//     int arr12[] = { -6,-9,27,41,38,-13,8,67 };

//     print_intarr(arr1,6);
//     printf("%i\n", mx_quicksort(arr1, 0, 5));   // 3
//     print_intarr(arr1,6);
//     printf("-----------\n");
//     print_intarr(arr2,7);
//     printf("%i\n", mx_quicksort(arr2, 0, 6));   // 6
//     print_intarr(arr2,7);
//     printf("-----------\n");
//     print_intarr(arr3,7);
//     printf("%i\n", mx_quicksort(arr3, 0, 6));   // 3
//     print_intarr(arr3,7);
//     printf("-----------\n");
//     print_intarr(arr4,1);
//     printf("%i\n", mx_quicksort(arr4, 0, 0));   // 0
//     print_intarr(arr4,1);
//     printf("-----------\n");
//     print_intarr(arr5,2);
//     printf("%i\n", mx_quicksort(arr5, 0, 1));   // 1
//     print_intarr(arr5,2);
//     printf("-----------\n");
//     print_intarr(arr6,10);
//     printf("%i\n", mx_quicksort(arr6, 0, 9));   // 8
//     print_intarr(arr6,10);
//     printf("-----------\n");
//     print_intarr(arr7,5);
//     printf("%i\n", mx_quicksort(arr7, 0, 4));   // 4
//     print_intarr(arr7,5);
//     printf("-----------\n");
//     print_intarr(arr8,4);
//     printf("%i\n", mx_quicksort(arr8, 0, 3));   // 3
//     print_intarr(arr8,4);
//     printf("-----------\n");
//     print_intarr(arr9,10);
//     printf("%i\n", mx_quicksort(arr9, 0, 9));   // 8
//     print_intarr(arr9,10);
//     printf("-----------\n");
//     print_intarr(arr10,10);
//     printf("%i\n", mx_quicksort(arr10, 0, 9));  // 8
//     print_intarr(arr10,10);
//     printf("-----------\n");
//     print_intarr(arr11,13);
//     printf("%i\n", mx_quicksort(arr11, 4, 11)); // 5
//     print_intarr(arr11,13);
//     printf("-----------\n");
//     print_intarr(arr12,8);
//     printf("%i\n", mx_quicksort(arr12, 5, 6));  // 0
//     print_intarr(arr12,8);
//     printf("-----------\n");
// }
