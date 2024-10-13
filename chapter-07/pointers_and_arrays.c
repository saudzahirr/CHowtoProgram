/*
 * Author  : Saud Zahir
 * Date    : October 13, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Pointers and Arrays
*/

#include <stdio.h>

int main(void) {
    int array[] = {2, 4, 8, 16};
    int *arrayPtr = array; // Equivalent to &array[0]

    // Pointer/Offset Notation
    printf("%d\n", *(arrayPtr + 1)); // Outputs 4

    // Pointer/Index Notation
    printf("%d\n", arrayPtr[2]); // Outputs 8

    return 0;   
}

/*
NOTE:
    Arrays and pointers are intimately related in C
    and often may be used interchangeably. An array
    name can be thought of as a constant pointer to
    non constant data. Pointers can be used to do any
    operation involving array indexing. Array name
    without an index is a pointer to array's first
    element.

    Pointers can be indexed like arrays.
    Remember that an array name is a constant pointer
    (it always points to the beginning of the array),
    thus the expression:

        array += 1
    
    is invalid because it attempts to modify the array
    name's value with pointer arithmetic.

*/
