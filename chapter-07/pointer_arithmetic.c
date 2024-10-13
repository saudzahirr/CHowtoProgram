/*
 * Author  : Saud Zahir
 * Date    : October 10, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Pointer Arithmetic
*/

#include <stdio.h>

int main(void) {
    int x[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *xPtr = x; // x, &x, &x[0] are same

    xPtr += 4;
    printf("%d\n", *xPtr); // Outputs 5
    xPtr -= 2;
    printf("%d\n", *xPtr); // Outputs 3
    ++xPtr;
    printf("%d\n", *xPtr); // Outputs 4
    xPtr--;
    printf("%d\n", *xPtr); // Outputs 3

    --xPtr;
    xPtr--;

    // Number of array elements
    int *yPtr = &x[8]; // x[8] --> 0
    int n = yPtr - xPtr;
    printf("Number of array elements: %d\n", n);

    ++xPtr;
    int **ptr = &xPtr; // Assigning pointer another pointer
    printf("%d\n", **ptr);

    void *vPtr = &x;
    // A pointer to void cannot be dereferenced.
    int *iPtr = (int *) vPtr; // Casting void * ---> int *
    printf("%d\n", *iPtr);


    return 0;
}


/*
NOTE:
    xPtr += n expands to xPtr + n * 4
    where 4 here is the byte size of
    int memory.

    A pointer can be assigned to another pointer if both
    have same type. The exception is the pointer to void
    (i.e void *), which is a generic pointer that can
    represent any pointer type. All pointer types can be
    assigned a pointer to void, and a pointer to void
    can be assigned a pointer of any type (including another
    pointer to void). In both cases a cast operation is not
    required.

    A pointer to void cannot be dereferenced.

    Pointers can be compared using equality and relational
    operators, but such comparisons are meaningless unless
    the pointers point to elements of the same array.

    A common use of pointer comparison is determining whether
    a pointer is NULL.

*/
