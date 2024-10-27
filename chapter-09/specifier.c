/*
 * Author  : Saud Zahir
 * Date    : October 27, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Other Conversion Specifiers
 */

#include <stdio.h>

int main(void) {
    char c = 'A';
    char *s = "Hello, World!";

    printf("%c\n", c);
    printf("%s\n", s);
    printf("Address: %p\n", s);
    printf("Percentage symbol '%%'\n");

    return 0;
}

/*
NOTE:
    %p prints the value of ptr and the address of x;
    these values are identical because ptr is assigned
    the address of x. The last printf statement uses %%
    to print the % character in a character string.
*/
