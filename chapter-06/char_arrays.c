/*
 * Author  : Saud Zahir
 * Date    : August 17, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Character Arrays
*/

#include <stdio.h>

int main() {
    char string[] = "CHowtoProgram"; // Initialized using  string literal.

    for (size_t i = 0; i < sizeof(string) / sizeof(char); ++i) {
        printf("%c ", string[i]);
    }
    puts("");
    printf("%s\n", string);

    char char_array[] = {'C', 'H', 'o', 'w',
                         't', 'o', 'P', 'r',
                         'o', 'g', 'r', 'a',
                         'm', '\0'};

    for (size_t i = 0; i < sizeof(char_array) / sizeof(char); ++i) {
        printf("%c ", char_array[i]);
    }
    puts("");
    printf("%s\n", char_array);

    puts("Enter a string: ");
    scanf("%s", string);
    /*
        Array's are passed by reference by default.
        Therefore & is not necessary.
    */

    printf("%s\n", string);

    return 0;
}

/*
NOTE:
    A character array can be initialized using a string literal.
    The string contains the characters plus a special string
    terminating character called the null character '\0'

    In line 34, if the user enters a string with length greater
    than the assigned length, program will crash or create security
    vulnerability called 'buffer overflow'. C provides no automatic
    bound checking for arrays. Bound checking is also important in
    string processing.

    In C11 standard's optional Annex K provides a new, more secure, version
    of many string processing input/output functions. When reading a string
    into a character array function 'scanf_s' performs additional checks to
    ensure that it does not write beyond the end of the array.
*/
