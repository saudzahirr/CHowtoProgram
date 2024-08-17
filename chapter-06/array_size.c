/*
 * Author  : Saud Zahir
 * Date    : August 17, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Specifying Array's Size with a Symbolic Constant
*/

#include <stdio.h>

#define SIZE 8 // symbolic constant

int main() {
    int array[SIZE];

    for (size_t i = 0; i < SIZE; ++i) {
        array[i] = 2 + 2 * i;
    }
    printf("%s: %s\n", "Element", "Value");
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%7lu: %5d\n", i, array[i]);
    }

    return 0;
}

/*
NOTE:
    The #define preprocessor directive is used in this program.
    #define SIZE 8, defines a symbolic constant whose value is 8.
    A symbolic constant is an identifier that's replaced with
    replacement text by the C preprocessor before the program is
    compiled. When the program is preprocessed, all occurrences of
    the symbolic constant SIZE are replaced with the text 8.

    If the #define preprocessor directive is terminated with a semicolon,
    the preprocessor replaces all occurrences of the symbolic constant
    SIZE with text "8;". This will lead to syntax errors at compile time,
    or logic errors at execution time. Remember that 'the preprocessor is
    not the C compiler'.
*/
