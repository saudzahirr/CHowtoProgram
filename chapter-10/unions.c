/*
 * Author  : Saud Zahir
 * Date    : October 16, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Unions
*/

#include <stdio.h>

int main(void) {
    typedef union {
        int x;
        double y;
    } Number;

    Number number;
    number.x = 7;
    printf("%d\n", number.x);

    number.y = 3.141592;
    printf("%lf\n", number.y);
    printf("Size of Number (union): %ld bytes\n", sizeof number);

    return 0;
}

/*
NOTE:
    The union definition is normally placed in a header
    and included in all source files that use the union
    type.

    The operations that can be performed on a union are:
        1. Assigning a union to another union of the same type.
        2. Taking the address (&) of a union variable.
        3. Accessing union members using the structure member
           operator and the structure pointer operator.

    Unions may not be compared using operators == and != for the
    same reasons that structures cannot be compared.

    The amount of storage required to store a union is implementation
    dependent but will always be at least as large as the largest member
    of the union.

    Placing a union or struct definition outside any function does not
    create a global variable.

    A union may be initialized with a value of the same type as the
    first union member. For example:

            Number number = {7};
            Number number = {3.14159};
*/
