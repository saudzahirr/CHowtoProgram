/*
 * Author  : Saud Zahir
 * Date    : October 26, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Function strlen
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char *string = "Hello, World!";
    printf("Length of %s: %zu\n", string, strlen(string));

    return 0;
}

/*
NOTE:
    Function strlen takes a string as an argument and returns
    the number of characters in the string—the terminating null
    character is not included in the length.

        size_t strlen(const char *s);

    Determines the length of string s. The number of characters
    preceding the terminating null character is returned.
*/
