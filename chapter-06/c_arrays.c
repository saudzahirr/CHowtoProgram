/*
 * Author  : Saud Zahir
 * Date    : August 16, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Arrays
*/

#include <stdio.h>

int main() {
    int array[6] = {1, 2, 3, 4, 5, 6};

    for (size_t i = 0; i < 6; ++i) {
        printf("%ld: %d\n", i, array[i]);
    }

    return 0;
}

/*
NOTE:
    The C standard represents an unsigned integral type 'size_t'.
    On some compilers, size_t represents unsigned int and
    on others it represents unsigned long. Compilers that
    use unsigned long typically generate a warning on line 16,
    because %u is for displaying unsigned ints, not unsigned longs.
    To eliminate this warning, replace the format specification %u with %lu.
*/
