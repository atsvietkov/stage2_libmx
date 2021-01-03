#pragma once

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

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
