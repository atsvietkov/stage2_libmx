#include "../inc/libmx.h"
#include <string.h>

int main() {
    // Memory: basic

    // char*arr = mx_strnew(10);
    // mx_memset(arr, '2', 5*sizeof(char));
    // mx_printstrn(arr);
    // mx_memset(arr, '1', 10*sizeof(char));
    // mx_printstrn(arr);

    // char *arr1 = mx_strnew(10);
    // char *arr2 = mx_strnew(10);
    // mx_memset(arr1, '1', 10*sizeof(char));
    // mx_memset(arr2, '2', 10*sizeof(char));
    // mx_printstrn(arr1);
    // mx_printstrn(arr2);
    // mx_printstrn("----");
    // mx_memcpy(arr2, arr1, 5*sizeof(char));
    // mx_printstrn(arr1);
    // mx_printstrn(arr2);

    // char *arr1 = mx_strnew(10);
    // char *arr2 = mx_strnew(10);
    // char *arr3 = mx_strnew(10);
    // char *arr4 = mx_strnew(10);
    // mx_memset(arr1, '1', 10*sizeof(char));
    // mx_memset(arr2, '2', 10*sizeof(char));
    // mx_memset(arr3, '3', 10*sizeof(char));
    // mx_strcpy(arr4, "111122");
    // mx_printintn(mx_memcmp(arr1, arr1, 10*sizeof(char)));
    // mx_printintn(mx_memcmp(arr2, arr1, 10*sizeof(char)));
    // mx_printintn(mx_memcmp(arr3, arr1, 10*sizeof(char)));
    // mx_printintn(mx_memcmp(arr4, arr1, 4*sizeof(char)));
    // mx_printintn(mx_memcmp(arr4, arr1, 5*sizeof(char)));

    // char *arr1 = mx_strnew(5);
    // mx_strcpy(arr1, "Hello");
    // mx_printstrn(arr1);
    // char *arr2 = realloc(arr1, 10);
    // // arr1 = mx_realloc(arr1, 10);
    // mx_strcat(arr2, ", Neo");
    // mx_printstrn(arr2);

    // char *arr1 = mx_strdup("Hello.");
    // mx_printstrn(arr1);
    // char *arr2 = mx_strnew(6);
    // mx_memmove(arr2, arr1, 1);
    // mx_printstrn(arr2);
    // mx_memmove(arr2, arr1, 3);
    // mx_printstrn(arr2);
    // mx_memmove(arr2, arr1, 6);
    // mx_printstrn(arr2);

    // mx_printstrn(mx_memrchr("Trinity", 'i', 5));  // returns "ity"
    // mx_printstrn(mx_memrchr("Trinity", 'i', 3));  // returns "inity"
    // mx_printstrn(mx_memrchr("Trinity", 'T', 1));  // returns "Trinity"
    // mx_printstrn(mx_memrchr("Trinity", 'T', 7));  // returns "Trinity"
    // mx_printstrn(mx_memrchr("Trinity", 'n', 1));  // returns NULL
    // mx_printstrn(mx_memrchr("Trinity", 'n', 7));  // returns "nity"

    // char *arr = mx_strnew(20);
    // mx_memccpy(arr, "Hello, Neo", 'N', 20);
    // mx_printstrn(arr);

    // mx_printstrn(mx_memchr("Trinity", 'i', 5));  // returns "inity""
    // mx_printstrn(mx_memchr("Trinity", 'i', 3));  // returns "inity"
    // mx_printstrn(mx_memchr("Trinity", 'y', 1));  // returns "Trinity"
    // mx_printstrn(mx_memchr("Trinity", 'y', 7));  // returns "Trinity"
    // mx_printstrn(mx_memchr("Trinity", 'n', 1));  // returns NULL
    // mx_printstrn(mx_memchr("Trinity", 'n', 7));  // returns "nity"

    char *str0 = mx_strdup("Follow the white rabbit. Wake up, Neo.");
    char *str1 = mx_strdup("white rabbit");
    char *str2 = mx_strdup(". Wake");
    char *str3 = mx_strdup(".Wake");
    char *str4 = mx_strdup("Follow the white rabbit. Wake up, Neo. ");
    mx_printstrn(mx_memmem(str0, mx_strlen(str0), str1, mx_strlen(str1)));
    mx_printstrn(mx_memmem(str0, mx_strlen(str0), str2, mx_strlen(str2)));
    mx_printstrn(mx_memmem(str0, mx_strlen(str0), str3, mx_strlen(str3)));
    mx_printstrn(mx_memmem(str0, mx_strlen(str0), str4, mx_strlen(str4)));
    // mx_printstrn(mx_memmem(str0, mx_strlen(str0), str1, mx_strlen(str1)));
    // mx_printstrn(mx_memmem(str0, mx_strlen(str0), str1, mx_strlen(str1)));



}
