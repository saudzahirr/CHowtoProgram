/*
 * Author  : Saud Zahir
 * Date    : September 04, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Pass-By-Reference
*/

#include <stdio.h>

int cubeByValue(int);
void cubeByReference(int *);

int main() {
    int number = 2;
    printf("%s", "Enter a number: ");
    printf("Cube by Value: %d\n", cubeByValue(number));
    cubeByReference(&number);
    printf("Cube by Reference: %d\n", number);

    return 0;
}

int cubeByValue(int n) {
    return n * n * n;
}

void cubeByReference(int *nPtr) {
    *nPtr = *nPtr * *nPtr * *nPtr;
}

/*
NOTE:
    The compiler does not differentiate between a function
    that receives a pointer and one that receives a one
    dimensional array. When compiler encounters a function
    parameter for a one dimensional array of the form int b[],
    the compiler converts the parameter to the pointer notation
    int *b. The two forms are interchangeable.
*/
