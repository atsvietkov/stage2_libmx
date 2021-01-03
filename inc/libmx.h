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
int mx_quicksort(int *arr, int left, int right);
//char *mx_itoa(int number);

//Utils: advanced

int mx_sqrt(int x);
