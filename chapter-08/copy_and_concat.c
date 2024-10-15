/*
 * Author  : Saud Zahir
 * Date    : October 15, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: String Copy and Concatenation
 */

#include <stdio.h>
#include <string.h>
#define SIZE_32_BYTES 32
#define SIZE_16_BYTES 16

int main(void) {
    char x[] = "C How to Program";
    char y[SIZE_32_BYTES];
    char z[SIZE_16_BYTES];

    printf("%s%s\n%s%s\n",
           "The string in array x is: ", x,
           "The string in array y is: ", strcpy(y, x));

    strncpy(z, x, SIZE_16_BYTES - 1);
    z[SIZE_16_BYTES - 1] = '\0';
    printf("The string in array z is: %s\n", z);

    char dest[SIZE_32_BYTES] = "Hello, ";
    char source[SIZE_16_BYTES] = "world!";

    // strcat
    strcat(dest, source);
    printf("%s\n", dest);

    // strncat
    strncat(dest, source, 8);
    printf("%s\n", dest);

    return 0;
}

/*
NOTE:
    strcpy: Copies string s2 into array s1.
            The value of s1 is returned.

    strncpy: Copies at most n characters of
             string s2 into array s1 and returns s1.

             Function strncpy does not necessarily copy
             the terminating null character of its second
             argument. This occurs only if the number of
             characters to be copied is more than the length
             of the string.

    strcat: Appends string s2 to array s1. The first
            character of s2 overwrites the terminating
            null character of s1. The value of s1 is
            returned.

    strncat: Appends at most n characters of string s2
             to array s1. The first character of s2 overwrites
             the terminating null character of s1. The value
             of s1 is returned.

             One must ensure that the array used to store the
             first string is large enough to store the first
             string, the second string and the terminating null
             character copied from the second string.
*/
