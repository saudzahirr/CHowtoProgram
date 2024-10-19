/*
 * Author  : Saud Zahir
 * Date    : October 19, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Static Assertions
 */

#include <stdio.h>

#define CHECK_TYPE_SIZE(type, expected_size) \
    _Static_assert(sizeof(type) == expected_size, \
    #type " must be " #expected_size " bytes.");

int main(void) {
    CHECK_TYPE_SIZE(int, 4);
    CHECK_TYPE_SIZE(char, 1);
    CHECK_TYPE_SIZE(double, 8);

    return 0;
}

/*
NOTE:
    The Standard C's assert macro tests the value of an
    expression at execution time. If the condition’s value
    is false, assert prints an error message and calls function
    abort to terminate the program. This is useful for debugging
    purposes. C11 now provides _Static_assert for compile-time
    assertions that test constant expressions after the
    preprocessor executes and at a point during compilation
    when the types of expressions are known. For more details
    see Section 6.7.10 of the C11 standard document.
*/
