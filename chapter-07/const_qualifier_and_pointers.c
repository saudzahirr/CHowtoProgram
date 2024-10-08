/*
 * Author  : Saud Zahir
 * Date    : October 08, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: The const Qualifier and Pointers
 */

#include <stdio.h>
#include <ctype.h>

// prototype
void convertToUppercase(char *sPtr);
void printCharacters(const char *sPtr);

int main() {
    char string[] = "hello, world!";
    printCharacters(string);
    puts("");
    convertToUppercase(string);
    printCharacters(string);
    puts("");

    int x = 0;
    int y = 1;

    // a constant pointer to nonconstant data.
    int * const xPtr = &x;

    *xPtr = 1; // allowed: *ptr is not const
    // ptr = &y; // error: ptr is const; cannot assign new address
    printf("%d\n", *xPtr);

    // a constant pointer to constant data.
    const int *const yPtr = &y;

    // *ptr = 7; // error: *ptr is const; cannot assign new value
    // ptr = &y; // error: ptr is const; cannot assign new address
    printf("%d\n", *yPtr);

    return 0;
}

// non-constant pointer to non-constant data.
void convertToUppercase(char *sPtr) {
    while (*sPtr != '\0') {     // current character is not '\0'
        *sPtr = toupper(*sPtr); // convert to uppercase
        ++sPtr;                 // make sPtr point to the next character
    }
}

// a non-constant pointer to constant data.
void printCharacters(const char *sPtr) {
    // loop through entire string
    for (; *sPtr != '\0'; ++sPtr) { // no initialization
        printf("%c", *sPtr);
    }
}

/*
NOTE:
    Six possibilities exist for using (or not using) const
    with function parameters — two with pass-by-value parameter
    passing and four with pass-by-reference parameter passing.
    How do you choose one of the six possibilities? Let the principle
    of least privilege be your guide—always award a function enough
    access to the data in its parameters to accomplish its specified
    task, but absolutely no more.

    There are four ways to pass a pointer to a function:
        * a non-constant pointer to non-constant data.
        * a constant pointer to nonconstant data.
        * a non-constant pointer to constant data.
        * a constant pointer to constant data.

*/
