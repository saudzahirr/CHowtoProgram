/*
 * Author  : Saud Zahir
 * Date    : October 17, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: # and ## Operators
*/

#include <stdio.h>

#define HELLO(name) puts("Hello " #name)
#define TOKENCONCAT(x, y) x ## y

int main(void) {
    HELLO(Bob!); // Output "Hello, Bob!"

    int p_0 = 2;
    int p_1 = 3;

    printf("%d\n", TOKENCONCAT(p_, 0)); // Output 2
    printf("%d\n", TOKENCONCAT(p_, 1)); // Output 3

    return 0;
}

/*
NOTE:
    The # operator causes a replacement-text token to be
    converted to a string surrounded by quotes. The #
    operator is also known as stringizing operator. It
    converts macro parameters to string literals without
    expanding the parameter definition.

    The ## (token-pasting or concatenation) operator must
    be used in a macro with arguments because the operand
    of # refers to an argument of the macro. The ## operator
    concatenates two tokens.

    A token in C is the smallest meaningful unit of the C
    programming language that the compiler recognizes. There
    are six types of tokens in C: keywords, identifiers,
    constants, operators, special symbols, and strings.
*/
