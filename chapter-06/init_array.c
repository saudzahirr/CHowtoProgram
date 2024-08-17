/*
 * Author  : Saud Zahir
 * Date    : August 17, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Initializing an Array
*/

#include <stdio.h>

int main() {
    int array[4] = {0}; // Initializes entire array to zeros.

    printf("%s: %s\n", "Index", "Value");
    for (size_t i = 0; i < 4; ++i) {
        printf("%5lu: %5d\n", i, array[i]);
    }

    return 0;
}

/*
NOTE:
    Like variables, uninitialized array elements contain grabage values.
    If there are fewer initializers than elements in the array, the
    remaining elements are initialized to zero.

    If the array size is omitted from a definition with an initializer list,
    the number of elements in the array will be the number of elements in the
    initializer list.

    int array[] = {1, 2, 3, 4};

    C has no array bounds checking to prevent program from referring to an
    element that does not exist.
*/
