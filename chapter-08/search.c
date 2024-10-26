/*
 * Author  : Saud Zahir
 * Date    : October 26, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Search Functions of the String-Handling Library
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    const char *string = "Hello, World!";
    char key = 'l';

    // Function strchr
    char *value = strchr(string, key);

    if (value != NULL) {
        printf("'%c' found in %s\n", key, string);
        printf("Remaining string: '%s'\n", value); // Outputs: llo, World!
    }
    else {
        printf("'%c' not found in %s\n", key, string);
    }

    // Calculate the length of the initial segment of string
    // that does not contain any characters from chars
    size_t len;
    const char *chars = "lWd";

    // Function strcspn
    len = strcspn(string, chars); // Stops when character in first string is in second
    printf("Length: %zu\n", len); // Output: 2

    len = strcspn(string, "W");
    printf("Length: %zu\n", len); // Output: 7

    // Function strpbrk
    value = strpbrk(string, chars);
    if (value != NULL) {
        printf("First occurrence of any character from '%s' in '%s' is: '%c'\n",
                chars, string, *value);
        printf("Remaining string: '%s'\n", value);
    }
    else {
        printf("No characters from '%s' found in '%s'.\n", chars, string);
    }

    // Function strrchr
    value = strrchr(string, key);

    if (value != NULL) {
        printf("'%c' found in %s\n", key, string);
        printf("Remaining string: '%s'\n", value); // Outputs: ld!
    }
    else {
        printf("'%c' not found in %s\n", key, string);
    }

    // Function strspn
    len = strspn(string, "lHeo "); // Stops when a character in first string is not second
    printf("Length: %zu\n", len); // Output: 5

    len = strspn(string, "W");
    printf("Length: %zu\n", len); // Output: 0

    // Function strstr
    char *search_string = "World!";
    value = strstr(string, search_string);

    if (value != NULL) {
        printf("'%s' found in %s\n", search_string, string);
        printf("Remaining string: '%s'\n", value); // Outputs: World!
    }
    else {
        printf("'%s' not found in %s\n", search_string, string);
    }

    char title[] = "C How to Program";
    const char *delimiter = " ";
    // Function strtok
    const char *tokPtr = strtok(title, delimiter);
    while (tokPtr != NULL) {
        printf("%s\n", tokPtr);
        tokPtr = strtok(NULL, delimiter);
    }

    return 0;
}

/*
NOTE:
    Function strchr searches for the first occurrence of a character
    in a string. If the character is found, strchr returns a pointer
    to the character in the string; otherwise, strchr returns NULL.

    Function strcspn determines the length of the initial part of the
    string in its first argument that does not contain any characters
    from the string in its second argument. The function returns the
    length of the segment.

    Function strpbrk searches its first string argument for the first
    occurrence of any character in its second string argument. If a
    character from the second argument is found, strpbrk returns a
    pointer to the character in the first argument; otherwise, strpbrk
    returns NULL.

    Function strrchr searches for the last occurrence of the specified
    character in a string. If the character is found, strrchr returns
    a pointer to the character in the string; otherwise, strrchr returns
    NULL.

    Function strspn determines the length of the initial part of the
    string in its first argument that contains only characters from
    the string in its second argument. The function returns the length
    of the segment.

    Function strstr searches for the first occurrence of its second
    string argument in its first string argument. If the second string
    is found in the first string, a pointer to the location of the string
    in the first argument is returned.

    Function strtok is used to break a string into a series of tokens.
    A token is a sequence of characters separated by delimiters (usually
    spaces or punctuation marks, but a delimiter can be any character).
    For example, in a line of text, each word can be considered a token,
    and the spaces and punctuation separating the words can be considered
    delimiters.
*/
