/*
 * Author  : Saud Zahir
 * Date    : October 15, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Fundamentals of Strings and Characters
*/

#include <stdio.h>

int main(void) {
    char string[] = "Hello, world!";
    // char string[] = {'H', 'e', 'l', 'l', 'o', ..., '\0'};
    printf("%s\n", string);

    const char *sPtr = "Hello, world!"; // read-only
    printf("%s\n", sPtr);

    return 0;
}

/*
NOTE:
    A character constant is an int value represented as a
    character in single quotes. A string is a series of
    characters treated as a single unit.

    A string in C is an array of characters ending with the
    null character ('\0'). A string is accessed via a pointer
    to the first character in the string. The value of a
    string is the address of its first character.

    Processing a single character as a string. A string is
    a pointer—probably a respectably large integer. However,
    a character is a small integer (ASCII values range 0–255).
    On many systems this causes an error, because low memory
    addresses are reserved for special purposes such as operating-system
    interrupt handlers—so “access violations” occur.

    char* str = 'A';
    // WRONG: str expects a pointer, but 'A' is a character (small integer 65)
    printf("%s", str); // ERROR

*/