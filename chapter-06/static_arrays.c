/*
 * Author  : Saud Zahir
 * Date    : August 21, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Static Arrays
*/

#include <stdio.h>
#define SIZE 8

void staticArray(void);

void autoArray(void);

int main() {
    autoArray();
    staticArray();
    puts("");
    autoArray();
    // The second time the function is called, the static array contains
    // the values stored during the first function call.
    staticArray();

    return 0;
}

void staticArray(void) {
    static int array[SIZE];
    ++array[0];
    ++array[2];
    ++array[4];

    for (size_t i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    puts("");
}

void autoArray(void) {
    auto int array[SIZE] = {0}; // Same as int array[SIZE] = {0}
    ++array[0];
    ++array[2];
    ++array[4];

    for (size_t i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    puts("");
}

/*
NOTE:
    A static local array is not created and initialized each time the function
    is called and the array is not destroyed each time the function is exited
    in the program. This reduces program execution time, particularly for programs
    with frequently called functions that contain large arrays.

    Arrays that are static are initialized once at program startup. If not explicitly
    initialize a static array, that array’s elements are initialized to zero by default.
*/
