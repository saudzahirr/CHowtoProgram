/*
 * Author  : Saud Zahir
 * Date    : October 28, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * Topic: The restrict Keyword
*/

#include <stdio.h>

void add(int *restrict a, int *restrict b, int *restrict c, size_t n);
void display(int *array, size_t n);

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {5, 6, 7, 8};
    int c[4];

    add(a, b, c, 4);
    printf("a = ");
    display(a, 4);
    printf("b = ");
    display(b, 4);
    printf("c = ");
    display(c, 4);
    
    return 0;
}

void add(int *restrict a, int *restrict b, int *restrict c, size_t n) {
    for (size_t i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }
}

void display(int *array, size_t n) {
    printf("[");
    for (size_t i = 0; i < n; i++) {
        printf("%d%s", array[i], (i + 1 < n) ? ", " : "");
    }
    puts("]");
}

/*
NOTE:
    The keyword restrict is used to declare restricted pointers.
    We declare a restricted pointer when that pointer should have
    exclusive access to a region of memory. Objects accessed through
    a restricted pointer cannot be accessed by other pointers except
    when the value of those pointers was derived from the value of
    the restricted pointer.

    Restricted pointers allow the compiler to optimize the way the
    program accesses memory. For example, the standard library function
    memcpy is defined in the C99 standard as follows:

        void *memcpy(void *restrict s1, const void *restrict s2, size_t n);

    The specification of the memcpy function states that it should not be
    used to copy between overlapping regions of memory. Using restricted
    pointers allows the compiler to see that requirement, and it can optimize
    the copy by copying multiple bytes at a time, which is more efficient.
    Incorrectly declaring a pointer as restricted when another pointer points
    to the same region of memory can result in undefined behavior.
*/
