/*
 * Author  : Saud Zahir
 * Date    : August 16, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Storage Classes
*/

#include <stdio.h>

/*
NOTE:
    static functions are like private
    functions and cannot be accessed
    outside this file.
*/
static void staticVariable(void);

static int x; // Only accessible within this file

int main() {
    staticVariable();
    printf("Static global variable: %d\n", x);
    staticVariable();

    return 0;
}

static void staticVariable(void) {
    printf("Static global variable: %d\n", x);

    static int x; // Static storage class assigns zero.
    // Only accessible within this function
    printf("Static local variable x: %d\n", x);
    ++x;
    printf("Static local variable updated: %d\n", x);
}

/*
NOTE:
    storage class determines its storage duration,
    scope and linkage. An identifier’s storage duration
    is the period during which the identifier exists in memory.
    An identifier’s linkage determines for a multiple-source-file
    program whether the identifier is known only in the current
    source file or in any source file with proper declarations.

    Local variables are declared with keyword static are
    still known only in the function in which they are defined,
    but unlike automatic variables, static variables retain there
    value when the function was is excited.
*/
