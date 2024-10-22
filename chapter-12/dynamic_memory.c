/*
 * Author  : Saud Zahir
 * Date    : October 22, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Dynamic Memory Allocation
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;

    int *array = (int *) malloc(n * sizeof(int));

    if (array == NULL) {
        puts("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < n; i++) {
        array[i] = i * 2;
    }

    printf("Allocated integers: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    puts("");

    free(array);

    return 0;
}

/*
NOTE:
    Creating and maintaining dynamic data structures that can grow and shrink
    as the program runs requires dynamic memory allocation—the ability for a
    program to obtain more memory space at execution time to hold new data,
    and to release space no longer needed.

    Functions malloc and free, and operator sizeof, are essential to dynamic memory
    allocation. Function malloc takes as an argument the number of bytes to be
    allocated and returns a pointer of type void * (pointer to void) to the allocated
    memory. As you recall, a void * pointer may be assigned to a variable of any pointer
    type. Function malloc is normally used with the sizeof operator. For instance,

            ptr = malloc(sizeof(C_object))

    evaluates sizeof(C_object) to determine a C object’s size in bytes,
    allocates a new area in memory of that number of bytes and stores a pointer to the
    allocated memory in ptr. The memory is not guaranteed to be initialized, though many
    implementations initialize it for security. If no memory is available, malloc returns
    NULL. Function free deallocates memory—i.e., the memory is returned to the system so that
    it can be reallocated in the future. To free memory dynamically allocated by the preceding
    malloc call, use the statement
    
            free(ptr);

    C also provides functions calloc and realloc for creating and modifying dynamic arrays.
    These functions are discussed in chapter 14.
*/
