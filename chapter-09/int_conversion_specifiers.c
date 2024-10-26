/*
 * Author  : Saud Zahir
 * Date    : October 27, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Printing Integers
 */

#include <stdio.h>

int main(void) {
    int n = 255;

    printf("%d\n", n);
    printf("%i\n", n);
    printf("%o\n", n);
    printf("%u\n", n);
    printf("%x\n", n);
    printf("%X\n", n);
    printf("%hd\n", (short) n);
    printf("%ld\n", (long) n);
    printf("%lld\n", (long long) n);

    return 0;
}

/*
NOTE:
    Integer conversion specifier.
    d       Display as a signed decimal integer.

    i       Display as a signed decimal integer.
            [Note: The i and d specifiers are different when used with scanf.]

    o       Display as an unsigned octal integer.

    u       Display as an unsigned decimal integer.

    x or X  Display as an unsigned hexadecimal integer. X causes the digits 0-9
            and the uppercase letters A-F to be used in the display and x causes
            the digits 0-9 and the lowercase letters a-f to be used in the display.

    h,l, ll Place before any integer conversion specifier to indicate that a short,
            long or long long integer is displayed, respectively. These are called
            length modifiers.
*/
