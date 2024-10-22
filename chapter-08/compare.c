/*
 * Author  : Saud Zahir
 * Date    : October 22, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Comparison Functions of the String-Handling Library
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char name[32];

    printf("%s", "Enter name: ");
    scanf("%s", name);

    if (strncmp(name, "Bob", 3) == 0) {
        puts("C How to Program");
    }
    else if (strcmp(name, "Alice") == 0) {
        puts("Perl How to Program");
    }
    else {
        puts("Enter the correct name!");
    }

    return 0;
}

/*
NOTE:
    Function strcmp compares its first string argument with
    its second string argument, character by character. The
    function returns 0 if the strings are equal, a negative
    value if the first string is less than the second string
    and a positive value if the first string is greater than
    the second string. Function strncmp is equivalent to strcmp,
    except that strncmp compares up to a specified number of
    characters. Function strncmp does not compare characters
    following a null character in a string.
*/
