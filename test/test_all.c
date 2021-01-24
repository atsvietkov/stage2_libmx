#include "../inc/libmx.h"
#include <string.h>

int main() {

    // Utils pack

    // mx_printchar(32);
    // mx_printchar(10);

    // char str1[] = "World";
    // mx_printstr(NULL);
    // mx_printstr("Hello ");
    // mx_printstrn(str1);
    // mx_printchar(10);

    // char *arr1[] = { "Good", "morning", "mr", "Anderson", "wake up", "l0l", NULL };
    // mx_print_strarr(arr1, " -\n");
    // mx_print_strarr(NULL, " -\n");

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
    // mx_printstrn(mx_nbr_to_hex(-1));
    // mx_printstrn(mx_nbr_to_hex(2047));
    // mx_printstrn(mx_nbr_to_hex(2048));

    // int arr1[9] = {68, -20, 2, -6, 8, 53, 79, -30, -25};
    // int arr2[2] = {-7, -23};
    // int arr3[13] = {33,19,39,47,10,63,69,48,26,25,67,-4,2};
    // int arr4[15] = {-11,79,69,-9,-23,2,43,66,-25,35,38,61,84,7,11};
    // int arr5[7] = {-2,20,54,86,60,73,52};
    // mx_printintn(mx_bubble_sort(arr1, 9));
    // mx_printintn(mx_bubble_sort(arr2, 2));
    // mx_printintn(mx_bubble_sort(arr3, 13));
    // mx_printintn(mx_bubble_sort(arr4, 15));
    // mx_printintn(mx_bubble_sort(arr5, 7));
    // mx_printintn(mx_bubble_sort(arr1, 0));

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
    // mx_print_intarr(arr1,6);
    // mx_printintn(mx_quicksort(arr1, 0, 5));   // 3
    // mx_print_intarr(arr1,6);
    // mx_printstrn("--------");
    // mx_print_intarr(arr2,7);
    // mx_printintn(mx_quicksort(arr2, 0, 6));   // 6
    // mx_print_intarr(arr2,7);
    // mx_printstrn("--------");
    // mx_print_intarr(arr3,7);
    // mx_printintn(mx_quicksort(arr3, 0, 6));   // 3
    // mx_print_intarr(arr3,7);
    // mx_printstrn("--------");
    // mx_print_intarr(arr4,1);
    // mx_printintn(mx_quicksort(arr4, 0, 0));   // 0
    // mx_print_intarr(arr4,1);
    // mx_printstrn("--------");
    // mx_print_intarr(arr5,2);
    // mx_printintn(mx_quicksort(arr5, 0, 1));   // 1
    // mx_print_intarr(arr5,2);
    // mx_printstrn("--------");
    // mx_print_intarr(arr6,10);
    // mx_printintn(mx_quicksort(arr6, 0, 9));   // 8
    // mx_print_intarr(arr6,10);
    // mx_printstrn("--------");
    // mx_print_intarr(arr7,5);
    // mx_printintn(mx_quicksort(arr7, 0, 4));   // 4
    // mx_print_intarr(arr7,5);
    // mx_printstrn("--------");
    // mx_print_intarr(arr8,4);
    // mx_printintn(mx_quicksort(arr8, 0, 3));   // 3
    // mx_print_intarr(arr8,4);
    // mx_printstrn("--------");
    // mx_print_intarr(arr9,10);
    // mx_printintn(mx_quicksort(arr9, 0, 9));   // 8
    // mx_print_intarr(arr9,10);
    // mx_printstrn("--------");
    // mx_print_intarr(arr10,10);
    // mx_printintn(mx_quicksort(arr10, 0, 9));  // 8
    // mx_print_intarr(arr10,10);
    // mx_printstrn("--------");
    // mx_print_intarr(arr11,13);
    // mx_printintn(mx_quicksort(arr11, 4, 11)); // 5
    // mx_print_intarr(arr11,13);
    // mx_printstrn("--------");
    // mx_print_intarr(arr12,8);
    // mx_printintn(mx_quicksort(arr12, 5, 6));  // 0
    // mx_print_intarr(arr12,8);
    // mx_printstrn("--------");
    // mx_print_intarr(NULL,8);
    // mx_printintn(mx_quicksort(NULL, 5, 6));  // 0
    // mx_printstrn("--------");

    // mx_printstrn(mx_itoa(123456789));
    // mx_printstrn(mx_itoa(1));
    // mx_printstrn(mx_itoa(12));
    // mx_printstrn(mx_itoa(123));
    // mx_printstrn(mx_itoa(1234));
    // mx_printstrn(mx_itoa(-1));
    // mx_printstrn(mx_itoa(-11));
    // mx_printstrn(mx_itoa(128));
    // mx_printstrn(mx_itoa(INT_MIN));
    // mx_printstrn(mx_itoa(INT_MAX));
    
    // mx_print_unicode(0x0);
    // mx_print_unicode(0x41f);
    // mx_print_unicode(0x440);
    // mx_print_unicode(0x438);
    // mx_print_unicode(0x432);
    // mx_print_unicode(0x435);
    // mx_print_unicode(0x442);
    // mx_print_unicode(0x20);
    // mx_print_unicode(0x41c);
    // mx_print_unicode(0x438);
    // mx_print_unicode(0x440);

    // mx_printintn(mx_pow(3,3));
    // mx_printintn(mx_pow(2.5,3));
    // mx_printintn(mx_pow(2,0));
    // mx_printintn(mx_pow(2, 1));
    // mx_printintn(mx_pow(INT_MIN, 2));
    // mx_printintn(mx_pow(0, 3));
    // mx_printintn(mx_pow(3, 3));

    // mx_printintn(mx_sqrt(3));
    // mx_printintn(mx_sqrt(4));
    // mx_printintn(mx_sqrt(400));
    // mx_printintn(mx_sqrt(625));
    // mx_printintn(mx_sqrt(45543));
    // mx_printintn(mx_sqrt(354355655));
    // mx_printintn(mx_sqrt(3));
    // mx_printintn(mx_sqrt(4));
    // mx_printintn(mx_sqrt(9));
    // mx_printintn(mx_sqrt(INT_MIN));
    // mx_printintn(mx_sqrt(INT_MAX));
    // mx_printintn(mx_sqrt(100));
    // mx_printintn(mx_sqrt(400));


    // mx_printintn(mx_hex_to_nbr("C4"));
    // mx_printintn(mx_hex_to_nbr("FADe"));
    // mx_printintn(mx_hex_to_nbr("fffff"));   // return 1048575
    // mx_printintn(mx_hex_to_nbr("x1"));
    // mx_printintn(mx_hex_to_nbr(NULL));
    // mx_printintn(mx_hex_to_nbr("4ff"));
    // mx_printintn(mx_hex_to_nbr("0"));
    // mx_printintn(mx_hex_to_nbr("1"));
    // mx_printintn(mx_hex_to_nbr("15"));
    // mx_printintn(mx_hex_to_nbr("10"));
    // mx_printintn(mx_hex_to_nbr("1f"));
    // mx_printintn(mx_hex_to_nbr("20"));
    // mx_printintn(mx_hex_to_nbr("2f"));
    // mx_printintn(mx_hex_to_nbr("30"));
    // mx_printintn(mx_hex_to_nbr("3x"));
    // mx_printintn(mx_hex_to_nbr("c4"));
    // mx_printintn(mx_hex_to_nbr("FAdE"));
    // mx_printintn(mx_hex_to_nbr("ffffffffffff"));

    // int arr[] = {1,2,3,4,5,6};
    // mx_foreach(arr, 6, mx_printint);
    // mx_foreach(NULL, 6, mx_printint);

    // char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
    // int count = 0;
    // mx_printint(mx_binary_search(arr, 6, "ab", &count));
    // mx_printstr(" :: ");
    // mx_printintn(count);
    // count = 0;
    // mx_printint(mx_binary_search(arr, 6, "aBc", &count));
    // mx_printstr(" :: ");
    // mx_printintn(count);
    // count = 0;
    // mx_printint(mx_binary_search(arr, 6, "aBz", &count));
    // mx_printstr(" :: ");
    // mx_printintn(count);
    // count = 0;
    // mx_printint(mx_binary_search(NULL, 6, "aBc", &count));
    // mx_printstr(" :: ");
    // mx_printintn(count);
    // count = 0;
    // mx_printint(mx_binary_search(arr, 0, "aBc", &count));
    // mx_printstr(" :: ");
    // mx_printintn(count);
    // count = 0;
    // mx_printint(mx_binary_search(arr, 6, NULL, &count));
    // mx_printstr(" :: ");
    // mx_printintn(count);
    // count = 0;
    // mx_printint(mx_binary_search(arr, 6, "aBc", NULL));
    // mx_printstr(" :: ");
    // mx_printintn(count);

    // EOF Utils

    // Strings pack

    // mx_printintn(mx_strlen("Hello"));
    // mx_printintn(mx_strlen(""));
    // mx_printintn(mx_strlen(NULL));

    // char str[] = "ONE";
    // mx_printstrn(str);
    // mx_swap_char(&str[0], &str[1]);
    // mx_printstrn(str);
    // mx_swap_char(&str[1], &str[2]);
    // mx_printstrn(str);
    // mx_swap_char(&str[1], NULL);
    // mx_printstrn(str);

    // char str1[] = "Hello, Neo.";
    // char str2[32];
    // mx_strcpy(str2, str1);
    // mx_printstrn(str2);
    // mx_strcpy(str2, NULL);
    // mx_printstrn(str2);
    // mx_strcpy(NULL, str1);
    // mx_printstrn(str2);
    // mx_printstrn(str1);
    // mx_strcpy(str2, "");
    // mx_printstrn(str2);

    // char str1[] = "AAAAA";
    // char str2[] = "AAA";
    // char str3[] = "AAAAa";
    // char str4[] = "";
    // mx_printint(strcmp(str1, str2));
    // mx_printchar(' ');
    // mx_printintn(mx_strcmp(str1, str2));
    // mx_printint(strcmp(str1, str3));
    // mx_printchar(' ');
    // mx_printintn(mx_strcmp(str1, str3));
    // mx_printint(strcmp(str1, str4));
    // mx_printchar(' ');
    // mx_printintn(mx_strcmp(str1, str4));
    // mx_printint(strcmp(str2, str3));
    // mx_printchar(' ');
    // mx_printintn(mx_strcmp(str2, str3));
    // mx_printint(strcmp(str2, str4));
    // mx_printchar(' ');
    // mx_printintn(mx_strcmp(str2, str4));
    // mx_printint(strcmp(str3, str4));
    // mx_printchar(' ');
    // mx_printintn(mx_strcmp(str3, str4));
    // mx_printint(strcmp(str3, str3));
    // mx_printchar(' ');
    // mx_printintn(mx_strcmp(str3, str3));
    // // mx_printint(strcmp(NULL, str3));
    // mx_printchar(' ');
    // mx_printintn(mx_strcmp(NULL, str3));

    // char str1[] = "Hello";
    // char str2[32] = "Neo ";
    // mx_strcat(str2, str1);
    // mx_printstrn(str2);
    // mx_strcat(str2, NULL);
    // mx_printstrn(str2);

    // char *new_str1 = mx_strnew(-1);   // use valgrind
    // char *new_str2 = mx_strnew(0); 
    // char *new_str3 = mx_strnew(1); 
    // char *new_str4 = mx_strnew(2); 
    // char *new_str5 = mx_strnew(3); 
    // char *new_str6 = mx_strnew(4); 
    // printf("%zu\n", malloc_usable_size(new_str1));
    // printf("%zu\n", malloc_usable_size(new_str2));
    // printf("%zu\n", malloc_usable_size(new_str3));
    // printf("%zu\n", malloc_usable_size(new_str4));
    // printf("%zu\n", malloc_usable_size(new_str5));
    // printf("%zu\n", malloc_usable_size(new_str6));
    
    // char *str1 = "1234";
    // char *str2 = mx_strdup(NULL);
    // mx_printstrn(str2);
    // mx_printstrn(str1);

    // char *str0 = "";
    // char *strn = NULL;
    // char *str1 = "Wake up, Neo. ";
    // char *str2 = "Matrix has you.";
    // mx_printstrn(mx_strjoin(str1, str2));
    // mx_printstrn(mx_strjoin(str1, strn));
    // mx_printstrn(mx_strjoin(str0, str2));
    // mx_printstrn(mx_strjoin(strn, strn));

    // char *str = mx_strnew(4);
    // str = mx_strdup("qwer");
    // mx_printstrn(str);
    // mx_strdel(&str);
    // mx_printstrn(str);

    // mx_del_strarr() // TODO

    // mx_printstrn(mx_file_to_str("./src/mx_pow.c"));

    // mx_read_line();  // TODO

    // char str1[] = "Hello, Neo. Wake up.";
    // char str2[32];
    // mx_strncpy(str2, str1, 11);
    // mx_printstrn(str2);
    // mx_strncpy(NULL, str1, 11);
    // mx_printstrn(str1);
    // mx_strncpy(str2, NULL, 11);
    // mx_printstrn(str2);
    // mx_strncpy(str2, str1, -1);
    // mx_printstrn(str2);
    // mx_strncpy(str2, str1, 0);
    // mx_printstrn(str2);

    // char str[] = "Game-over";
    // mx_printstrn(str);
    // mx_str_reverse(str);
    // mx_printstrn(str);

    // char str[] = "Hello, Neo. Wake up.";
    // mx_printstrn(mx_strndup(str, 40));
    // mx_printstrn(mx_strndup(NULL, 40));
    // mx_printstrn(mx_strndup(str, 0));

    // char str[] = "Hello, Neo. Wake up.";
    // mx_printintn(mx_strncmp(str, "Hello,", 6));
    // mx_printstrn(str);
    // mx_printstrn(mx_strstr(str, "Wak"));
    // mx_printstrn(str);
    // mx_printstrn(strstr(str, "Neo"));

    // char str[] = "  follow  *   the  white rabbit   ";
    // mx_printintn(mx_count_words(str, '*'));     // returns 2
    // mx_printintn(mx_count_words(str, ' '));     // returns 5
    // mx_printintn(mx_count_words(NULL, ' '));    // returns -1

    // char str[] = "yoyoyoy Neo";
    // char sub[] = "yoy";
    // mx_printintn(mx_count_substr(str, sub));    // returns 3
    // mx_printintn(mx_count_substr(str, NULL));   // returns -1
    // mx_printintn(mx_count_substr(NULL, sub));   // returns -1
    // mx_printintn(mx_count_substr(str, ""));    // returns 0

    // char str[] = "Hello, Neo. Wake up.";
    // mx_printintn(mx_get_char_index(str, 'o'));
    // mx_printintn(mx_get_char_index(str, 'W'));
    // mx_printintn(mx_get_char_index(str, ' '));
    // mx_printintn(mx_get_char_index(str, 'x'));
    // mx_printintn(mx_get_char_index(NULL, '7'));

    // mx_printintn(mx_get_substr_index("McDonalds", "Don"));          // returns 2
    // mx_printintn(mx_get_substr_index("McDonalds Donuts", "on"));    // returns 3
    // mx_printintn(mx_get_substr_index("McDonalds", "Donatello"));    // returns -1
    // mx_printintn(mx_get_substr_index("McDonalds", NULL));           // returns -2
    // mx_printintn(mx_get_substr_index(NULL, "Don"));                 // returns -2
    // mx_printintn(mx_get_substr_index("McDonalds", "McDonalds"));    // returns 0
    // mx_printintn(mx_get_substr_index("McDonalds", "McDonalds1"));   // returns -1

    // char name[] = "\f\t   My name... is Neo\t\n";
    // mx_printstrn(mx_strtrim(name));     // returns "My name... is Neo"
    // mx_printstrn(mx_strtrim(NULL));

    // char name[] = "\t. .  .   .    My name...     is     Neo   .   ";
    // mx_printchar('[');
    // mx_printstr(name);
    // mx_printchar(']');
    // mx_printchar(10);
    // mx_printchar('[');
    // mx_printstr(mx_strtrim(name));
    // mx_printchar(']');
    // mx_printchar(10);
    // mx_printchar('[');
    // mx_printstr(mx_del_extra_spaces(name));
    // mx_printchar(']');
    // mx_printchar(10);
    // mx_printstr(mx_del_extra_spaces(NULL));

    // char s1[] = "**Good bye,**Mr.*Anderson.****";
    // char **arr1 = mx_strsplit(s1, '-');
    // mx_print_strarr_br(arr1);
    // char s2[] = "Knock, knock,    Neo.   ";
    // char **arr2 = mx_strsplit(s2, ' ');
    // mx_print_strarr_br(arr2);
    // char **arr3 = mx_strsplit(NULL, ' ');
    // mx_print_strarr_br(arr3);

    // mx_printstrn(mx_replace_substr("McDonalds tru", "alds", "uts"));    // returns "McDonuts"
    // mx_printstrn(mx_replace_substr("Ururu turupru oruel", "ru", "kyky"));      // returns "Utata tuta"
    // mx_printstrn(mx_replace_substr("cdabcdef", "cd", ""));
    // mx_printstrn(mx_replace_substr("abcdef", "0", "0123"));
    // mx_printstrn(mx_replace_substr("abcdef", NULL, "0123"));
    // mx_printstrn(mx_replace_substr(NULL, "cd", "32"));
    // mx_printstrn(mx_replace_substr("abcdef", "0", NULL));
    // mx_printstrn(mx_replace_substr("", "", "0123"));
    // mx_printstrn(mx_replace_substr("", "1", "0123"));

    int fd = open("fragment1", O_RDONLY);
    char *str = mx_strnew(128);
    // int res = 0;
    mx_printintn(mx_read_line(&str, 7, '\n', fd));
    mx_printintn(mx_read_line(&str, 35, 'a', fd));
    mx_printintn(mx_read_line(&str, 1, '.', fd));
    mx_printintn(mx_read_line(&str, 10, '\n', fd));

}
