/*
 * Author  : Saud Zahir
 * Date    : October 17, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Assertions
*/

#include <stdio.h>
#include <assert.h>

int main(void) {
    int x;
    printf("%s", "Enter an even number: ");
    scanf("%d", &x);

    assert(x % 2 == 0);

    return 0;
}

/*
NOTE:
    The assert macro—defined in <assert.h>—tests the value of
    an expression at execution time. If the value is false (0),
    assert prints an error message and calls function abort (of
    the general utilities library—<stdlib.h>) to terminate program
    execution. This is a useful debugging tool for testing whether
    a variable has a correct value.

    If the expression fails, the program displays an error message
    containing the line number and filename where the assert statement
    appears, then terminates. You then concentrate on this area of the
    code to find the error. If the symbolic constant NDEBUG is defined,
    subsequent assertions will be ignored.
    Thus, when assertions are no longer needed, you can insert the line:
    
        #define NDEBUG
    
    in the code file rather than delete each assertion manually. Many
    compilers have debug and release modes that automatically define
    and undefine NDEBUG, respectively.

    Assertions are not meant as a substitute for error handling during
    normal runtime conditions. Their use should be limited to finding
    logic errors during program development.

    The C standard also includes a capability called _Static_assert,
    which is essentially a compile-time version of assert that produces
    a compilation error if the assertion fails. We discuss _Static_assert
    in Appendix E.
*/
