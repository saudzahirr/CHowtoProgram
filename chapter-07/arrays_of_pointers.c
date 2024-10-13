/*
 * Author  : Saud Zahir
 * Date    : October 13, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Arrays of Pointers
 */

#include <stdio.h>

int main(void) {
    const char *suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    printf("%s\n", suits[0]);

    return 0;
}

/*
NOTE:
    Arrays may contain pointers. A common use of an array pointers
    is to form an array of strings, referred to simply as a string
    array. Each entry in the array is a string, but in C a string
    is essentially a pointer to its first character.

    Although it appears these strings are being placed in the suit
    array, only pointers are actually stored in the array. Each
    pointer points to the first character of its corresponding string.

*/
