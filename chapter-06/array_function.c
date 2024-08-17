/*
 * Author  : Saud Zahir
 * Date    : August 17, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Passing Arrays to Functions
*/

#include <stdio.h>

void displayArray(const int array[], size_t size);
void modifyArray(int array[], size_t size);

int main() {
    int number[] = {1, 2, 3, 4, 5, 6, 7, 8};

    printf("    array: %p\n", number);
    printf("   &array: %p\n", &number);
    printf("&array[0]: %p\n\n", &number[0]);

    displayArray(number, sizeof(number) / sizeof(int));
    puts("");

    modifyArray(number, sizeof(number) / sizeof(int));
    displayArray(number, sizeof(number) / sizeof(int));

    return 0;
}

void displayArray(const int array[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        printf("%8d", array[i]);
    }
}

void modifyArray(int array[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        if (i % 2 == 0) {
            array[i] *= array[i]; 
        }
    }
}

/*
NOTE:
    In C, all arguments are passed by value. C automatically
    passes arrays to function by refernce. The value of an
    array name is really the address of the first element of
    the array (i.e array, &array[0] and &array are the same).
    The %p conversion specifier normally outputs the address
    in hexadecimal numbers (base 16), but this is compiler
    dependent.

    Although entire arrays are passed by refernce, individual
    array elements are passed by value exactly as simple as
    variables are. Such single pieces of data (ints, floats and
    chars) are called scalars.

    The size of array is not required between array brackets. If
    it's included the compiler checks that it's greater than zero,
    then ignores it. Specifying a negative size is a compilation
    error.(i.e void modifyArray(int array[-8], size_t size);)

    There may be situations in which a function should not be allowed
    to modify array elements. C provides type qualifier 'const' (for
    constants) that can be used to prevent modification of array values.
    When an array parameter is preceded by the const qualifier, the array
    elements become constant in the function body.
*/
