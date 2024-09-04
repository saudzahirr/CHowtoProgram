/*
 * Author  : Saud Zahir
 * Date    : September 04, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: C Pointers
*/

#include <stdio.h>

int main() {
    int *countPtr, count;
    // countPtr points to an object of type int.
    // In C, an 'object' is a region of memory that
    // can hold a value, such as ints, floats, doubles,
    // chars, as well as aggregate types such as arrays
    // and structs.

    count = 8;
    countPtr = NULL;
    countPtr = &count;
    // Pointer should be initialized to either NULL, 0 or
    // an address. Here & is the address operator and * is
    // the indirection operator.

    printf("%d\n", *countPtr); // dereferencing a pointer

    return 0;
}

/*
NOTE:
    Pointers are variables whose values are memory addresses.
    The indirection operator is also known as dereferencing
    operator, it returns the value of the object to which its
    operand (i.e, a pointer) points.
*/
