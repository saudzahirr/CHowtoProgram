/*
 * Author  : Saud Zahir
 * Date    : August 15, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Storage Classes
*/

#include <stdio.h>

int main() {
    /*
    Keyword register is archaic and should not be used.
    Register variables are used to store frequently
    accessed variables directly in the CPU registers,
    providing faster access compared to memory storage.
    Because they reside in registers, the address of a
    register variable cannot be obtained.
    */
    register int i = 32;
    printf("%d\n", i);

    return 0;
}

/*
NOTE:
    C provides the storage class specifiers
    auto, register, extern and static. An
    identifier’s storage class determines
    its storage duration, scope and linkage.
    The C11 standard adds the storage class
    specifier _Thread_local, it indicates
    thread storage duration.
*/
