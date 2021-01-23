#include "../inc/libmx.h"
#include <string.h>

int main() {
    // mx_print_unicode('X');

    // mx_printintn(mx_pow(3, 3));
    // mx_printintn(mx_pow(2.5, 3));
    // mx_printintn(mx_pow(2, 0));
    // mx_printintn(mx_pow(2, 1));
    // mx_printintn(mx_pow(INT_MIN, 2));
    // mx_printintn(mx_pow(0, 3));
    // mx_printintn(mx_pow(3, 3));

    // mx_printintn(mx_sqrt(3));
    // mx_printintn(mx_sqrt(4));
    // mx_printintn(mx_sqrt(9));
    // mx_printintn(mx_sqrt(INT_MIN));
    // mx_printintn(mx_sqrt(INT_MAX));
    // mx_printintn(mx_sqrt(100));
    // mx_printintn(mx_sqrt(400));

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

    // int arr[] = {1, 2, 3, 4, 5};
    // mx_foreach(arr, 5, mx_printint);

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

    // mx_printintn(mx_strlen("Hello"));
    // mx_printintn(mx_strlen(""));

    // char str[] = "ONE";
    // mx_printstrn(str);
    // mx_swap_char(&str[0], &str[1]);
    // mx_printstrn(str);
    // mx_swap_char(&str[1], &str[2]);
    // mx_printstrn(str);

    // char str1[] = "Hello, Neo.";
    // char str2[32];
    // mx_strcpy(str2, str1);
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

    // char str1[] = "Hello";
    // char str2[32] = "Neo ";
    // mx_strcat(str2, str1);
    // mx_printstrn(str2);

    // char *new_str = mx_strnew(1);   // use valgrind
    
    // char *str1 = "1234";
    // char *str2 = mx_strdup(str1);
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

    // char str[] = "Game-over";
    // mx_printstrn(str);
    // mx_str_reverse(str);
    // mx_printstrn(str);

    // char str[] = "Hello, Neo. Wake up.";
    // mx_printstrn(mx_strndup(str, 40));

    // char str[] = "Hello, Neo. Wake up.";
    // mx_printintn(mx_strncmp(str, "Hello,", 6));
    // mx_printstrn(str);
    // mx_printstrn(mx_strstr(str, "Wak"));
    // mx_printstrn(str);
    // mx_printstrn(strstr(str, "Wak"));

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

    // char name[] = "\t. .  .   .    My name...     is     Neo   .   ";
    // mx_printchar('|');
    // mx_printstr(name);
    // mx_printchar('|');
    // mx_printchar(10);
    // mx_printchar('|');
    // mx_printstr(mx_strtrim(name));
    // mx_printchar('|');
    // mx_printchar(10);
    // mx_printchar('|');
    // mx_printstr(mx_del_extra_spaces(name));
    // mx_printchar('|');
    // mx_printchar(10);

    // char s1[] = "**Good bye,**Mr.*Anderson.****";
    // char **arr1 = mx_strsplit(s1, '-');
    // mx_print_strarr_br(arr1);
    // char s2[] = "Knock, knock,    Neo.   ";
    // char **arr2 = mx_strsplit(s2, ' ');
    // mx_print_strarr_br(arr2);

    // mx_printstrn(mx_replace_substr("McDonalds tru", "alds", "uts"));    // returns "McDonuts"
    // mx_printstrn(mx_replace_substr("Ururu turupru oruel", "ru", "kyky"));      // returns "Utata tuta"
    // mx_printstrn(mx_replace_substr("cdabcdef", "cd", ""));
    // mx_printstrn(mx_replace_substr("abcdef", "0", "0123"));
    // mx_printstrn(mx_replace_substr("abcdef", NULL, "0123"));
    // mx_printstrn(mx_replace_substr(NULL, "cd", "32"));
    // mx_printstrn(mx_replace_substr("abcdef", "0", NULL));
    // mx_printstrn(mx_replace_substr("", "", "0123"));
    // mx_printstrn(mx_replace_substr("", "1", "0123"));

    // int fd = open("fragment1", O_RDONLY);
    // char *str = mx_strnew(128);
    // // int res = 0;
    // mx_printintn(mx_read_line(&str, 7, '\n', fd));

}
