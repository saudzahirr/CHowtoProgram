/*
 * Author  : Saud Zahir
 * Date    : October 19, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Dynamic Memory Allocation: Functions calloc and realloc
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    size_t n_elems = 5;

    array = (int *) calloc(n_elems, sizeof(int));
    if (array == NULL) {
        puts("Memory allocation failed!");
        exit(EXIT_FAILURE);
    }

    for (size_t i = 0; i < n_elems; i++) {
        array[i] = i + 1;
    }

    n_elems = 10;
    array = (int *) realloc(array, n_elems * sizeof(int));
    if (array == NULL) {
        puts("Reallocation failed!");
        exit(EXIT_FAILURE);
    }

    for (size_t i = 5; i < n_elems; i++) {
        array[i] = i * 2;
    }

    for (size_t i = 0; i < n_elems; i++) {
        printf("arr[%zu] = %d\n", i, array[i]);
    }

    free(array);
    return 0;
}

/*
NOTE:
    The ability for a program to obtain more memory space
    at execution time and to release space no longer neaded.

    Arrays are better than linked lists for rapid sorting,
    searching and data access. However, arrays are normally
    static data structures. The general utilities library
    (stdlib.h) provides two other functions for dynamic memory
    allocation—calloc and realloc. These functions can be used to
    create and modify dynamic arrays. Function calloc dynamically
    allocates memory for an array. The prototype for calloc is

        void *calloc(size_t nmemb, size_t size);

    Its two arguments represent the number of elements (nmemb)
    and the size of each element (size). Function calloc also
    initializes the elements of the array to zero. The function
    returns a pointer to the allocated memory, or a NULL pointer if
    the memory is not allocated. The primary difference between malloc
    and calloc is that calloc clears the memory it allocates and
    malloc does not.

    Function realloc changes the size of an object allocated by a
    previous call to malloc, calloc or realloc. The original object’s
    contents are not modified provided that the amount of memory
    allocated is larger than the amount allocated previously. Otherwise,
    the contents are unchanged up to the size of the new object. The
    prototype for realloc is
    
        void *realloc(void *ptr, size_t size);

    The two arguments are a pointer to the original object (ptr)
    and the new size of the object (size). If ptr is NULL, realloc
    works identically to malloc. If ptr is not NULL and size is
    greater than zero, realloc tries to allocate a new block of memory
    for the object. If the new space cannot be allocated, the object
    pointed to by ptr is unchanged. Function realloc returns either
    a pointer to the reallocated memory, or a NULL pointer to indicate
    that the memory was not reallocated.

    Avoid zero-sized allocations in calls to malloc, calloc and realloc.
*/
