/*
 * Author  : Saud Zahir
 * Date    : October 27, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * Topic: Type-Generic Expressions
*/

#include <stdio.h>

#define mul(a, b) _Generic((a), \
        int: (b) * (a), \
        float: (b) * (a), \
        double: (b) * (a), \
        default: (b) * (a) \
    )

int main(void) {
    int a = 3;
    int b = 5;
    float c = 2.717f;
    double d = 3.141592654;

    printf("Multiply int: %d\n", mul(a, b));
    printf("Multiply float: %f\n", mul(c, c));
    printf("Multiply double: %f\n", mul(d, d));

    return 0;
}

/*
NOTE:
    C11’s new _Generic keyword provides a mechanism that
    you can use to create a macro that can invoke different
    type-specific versions of functions based on the macro’s
    argument type. Section 6.5.1.1 of the C11 standard discusses
    the details of using _Generic.
*/
