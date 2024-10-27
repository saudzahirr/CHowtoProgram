/*
 * Author  : Saud Zahir
 * Date    : October 27, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * Topic: Empty Arguments
*/

#include <stdio.h>
#define PTR(type, cv, name) type * cv name

int main(void) {
    int x = 7;
    PTR(int, , ptr) = &x;
    PTR(int, const, cPtr) = &x;

    return 0;
}

/*
NOTE:
    The C99 preprocessor allows passing empty arguments to
    a macro call—in the previous version, the behavior of an
    empty argument was undefined, though gcc acts according
    to the C99 standard even in C89 mode. In many cases, it
    results in a syntax error, but in some cases it can be useful.
    For instance, consider a macro PTR(type, cv, name) defined
    to be type * cv name (where cv means const or volatile).

    In some cases, there is no const or volatile declaration on
    the pointer, so the second argument will be empty. When an
    empty macro argument is used with the # or ## operator, the
    result is the empty string or the identifier the argument was
    concatenated with, respectively.
*/
