/*
 * Author  : Saud Zahir
 * Date    : October 26, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Memory Functions of the String-Handling Library
 */

#include <stdio.h>
#include <string.h>

#define SIZE 16

void display(const int * const aPtr, const size_t n);

int main(void) {
    const int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arrayCopy[SIZE] = {0};
    const int *aPtr = arrayCopy;

    puts("Before memcpy:");
    display(aPtr, SIZE);

    // Function memcpy
    memcpy(arrayCopy, array, sizeof(int) * SIZE);
    puts("After memcpy:");
    display(aPtr, SIZE);

    // Function memmove
    memmove(arrayCopy + 8, arrayCopy, sizeof(int) * 8);
    puts("After memmove:");
    display(aPtr, SIZE);

    // Function memcmp
    if (memcmp(array, arrayCopy, 8) == 0) {
        puts("First 8 elements are the equal");
    }
    else {
        puts("First 8 elements are not the equal");
    }

    char string[] = "C How to Program";
    char key = 'w';

    char *value = (char *) memchr(string, key, sizeof string);
    if (value != NULL) {
        printf("'%c' found in %s\n", key, string);
    }
    else {
        printf("'%c' not found in %s\n", key, string);
    }

    // Function memset
    memset(string, 'H', 8);
    puts("After memset:");
    printf("%s\n", string);

    return 0;
}

void display(const int * const aPtr, const size_t n) {
    printf("[");
    for (size_t i = 0; i < n; i++) {
        printf("%d%s", aPtr[i], (i + 1 < n) ? ", " : "");
    }
    puts("]");
}

/*
NOTE:
    Function memcpy copies a specified number of bytes from the object
    pointed to by its second argument into the object pointed to by its
    first argument. The function can receive a pointer to any type of object.
    The result of this function is undefined if the two objects overlap in
    memory (i.e., if they are parts of the same object)—in such cases, use
    memmove. memcpy is more efficient than strcpy when you know the size of
    the string you are copying.

    Function memmove, like memcpy, copies a specified number of bytes from
    the object pointed to by its second argument into the object pointed to
    by its first argument. Copying is performed as if the bytes were copied
    from the second argument into a temporary array, then copied from the
    temporary array into the first argument. This allows bytes from one part
    of a string to be copied into another part of the same string, even if
    the two portions overlap.

    Function memcmp compares the specified number of bytes of its first argument
    with the corresponding bytes of its second argument. The function returns a
    value greater than 0 if the first argument is greater than the second, returns
    0 if the arguments are equal and returns a value less than 0 if the first
    argument is less than the second.

    Function memchr searches for the first occurrence of a byte, represented as
    unsigned char, in the specified number of bytes of an object. If the byte is
    found, a pointer to the byte in the object is returned; otherwise, a NULL
    pointer is returned.

    Function memset copies the value of the byte in its second argument into the
    first n bytes of the object pointed to by its first argument, where n is
    specified by the third argument.
*/
