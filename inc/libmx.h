#pragma once

#define INT_MAX  2147483647
#define INT_MIN -2147483648
#define LONG MAX 4294967295

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>
#include <fcntl.h>

// not task func
void mx_printstrn(const char *s);
void mx_printintn(int n);
void mx_print_intarr(int *arr, int n);
int mx_strncmp(const char *s1, const char *s2, int n);

//Utils: basic
void mx_printchar(char c);
void mx_printstr(const char *s);
void mx_print_strarr(char **arr, const char *delim);
void mx_printint(int n);
char *mx_nbr_to_hex(unsigned long nbr);
int mx_bubble_sort(int *arr, int size);
int mx_quicksort(int *arr, int left, int right);    // check validity
//char *mx_itoa(int number);

//Utils: advanced
//void mx_print_unicode(wchar_t c);
double mx_pow(double n, unsigned int pow);
int mx_sqrt(int x);
unsigned long mx_hex_to_nbr(const char *hex);
void mx_foreach(int *arr, int size, void (*f)(int));
int mx_binary_search(char **arr, int size, const char *s, int *count);

//Strings: basic
int mx_strlen(const char *s);
void mx_swap_char(char *s1, char *s2);
char *mx_strcpy(char *dst, const char *src);
int mx_strcmp(const char *s1, const char *s2);
char *mx_strcat(char *restrict s1, const char *restrict s2);
char *mx_strnew(const int size);
char *mx_strdup(const char *s1);
char *mx_strjoin(const char *s1, const char *s2);
void mx_strdel(char **str);
void mx_del_strarr(char ***arr);
char *mx_file_to_str(const char *file);
// int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd);

// Strings: advanced
char *mx_strncpy(char *dst, const char *src, int len);
void mx_str_reverse(char *s);
char *mx_strndup(const char *s1, size_t n);
char *mx_strstr(const char *haystack, const char *needle);
int mx_count_words(const char *str, char delimeter);
int mx_count_substr(const char *str, const char *sub);
