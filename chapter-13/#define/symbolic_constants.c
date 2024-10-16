/*
 * Author  : Saud Zahir
 * Date    : October 16, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: #define Preprocessor Directive: Symbolic Constants
*/

#include <stdio.h>

#define PI 3.141593

int main(void) {
    printf("%lf\n", PI);

    return 0;
}

/*
NOTE:
    The #define directive creates symbolic constants—constants
    represented as symbols—and macros—operations defined as symbols.
    The #define directive format is

            #define identifier replacement-text
    
    When this line appears in a file, all subsequent occurrences
    of identifier that do not appear in string literals or comments
    will be replaced by replacement text automatically before the
    program is compiled. For instance,

            #define PI 3.141593

    replaces all subsequent occurrences of the symbolic constant PI
    with the numeric constant 3.141593. Symbolic constants enable you
    to create a name for a constant and use the name throughout the program.
*/
