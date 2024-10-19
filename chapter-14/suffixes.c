/*
 * Author  : Saud Zahir
 * Date    : October 19, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Suffixes for Integer and Floating-Point Literals
 */

#include <stdio.h>

int main() {
    unsigned int u = 174U;
    long int l = 8358L;
    unsigned long int ul = 28373UL;
    unsigned long long int llu = 9876543210LLU;

    float f = 1.28F;
    long double ld = 3.14159L;

    printf("Unsigned int: %u\n", u);
    printf("Long int: %ld\n", l);
    printf("Unsigned long int: %lu\n", ul);
    printf("Unsigned long long int: %llu\n", llu);
    
    printf("Float: %.2f\n", f);
    printf("Long double: %.5Lf\n", ld);

    return 0;
}

/*
NOTE:
    C provides integer and floating-point suffixes for
    explicitly specifying the data types of integer and
    floating-point literal values. (The C standard refers
    to such literal values as constants). If an integer
    literal is not suffixed, its type is determined by the
    first type capable of storing a value of that size (first
    int, then long int, then unsigned long int, etc.). A
    floating-point literal that’s not suffixed is automatically
    of type double.

    The integer suffixes are: u or U for an unsigned int, l
    or L for a long int, and ll or LL for a long long int.
    You can combine u or U with those for long int and long
    long int to create unsigned literals for the larger integer
    types.
*/
