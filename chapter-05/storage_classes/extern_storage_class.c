/*
 * Author  : Saud Zahir
 * Date    : August 16, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Storage Classes
*/

#include <stdio.h>

extern int x;
extern long long int mul(long long int, long long int);

int main() {
    long long int a, b;
    a = (long long int) 3141592654;
    b = (long long int) 2718281828;
    printf("c = %lld\n", mul(a, b));
    printf("x = %d\n", x);

    return 0;
}

/*
NOTE:
    gcc extern_storage_class.c mul.c

    A global variable declared in one file
    can be used in another file using extern.
    The declaration with extern does not
    allocate storage for the variable;
    it simply tells the compiler that the
    variable exists and is defined elsewhere.

    Functions are automatically treated as
    extern by default. However, extern is used
    for clarity or in specific contexts
    (e.g., declaring C functions in C++ code).
*/
