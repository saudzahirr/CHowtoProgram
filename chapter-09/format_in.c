/*
 * Author  : Saud Zahir
 * Date    : October 27, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: C Formatted Input
 */

#include <stdio.h>

int main(void) {
    int i;
    float f;
    char c;
    char s[8];

    printf("%s", "Enter a number: ");
    scanf("%d", &i);
    printf("Input integer: %d\n", i);

    printf("%s", "Enter an octal number: ");
    scanf("%o", &i);
    printf("Input octal number: %o\n", i);

    printf("%s", "Enter a hexadecimal number: ");
    scanf("%x", &i); // or %X
    printf("Input hexadecimal number: %#X\n", i);

    printf("%s", "Enter a floating point number: ");
    scanf("%g", &f); // %G, %f, %F, %e or %E
    printf("Input floating point number: %G\n", f);
    // Placing l or L before floating point specifier
    // indicates a double or long double

    printf("Enter a string: ");
    scanf("%c%8s", &c, s);
    printf("Input character: %c\n", c);
    printf("Input string: %s\n", s);

    return 0;
}

/*
NOTE:
    %i  Read an optionally signed decimal, octal or
        hexadecimal integer. The corresponding argument
        is a pointer to an int.
*/
