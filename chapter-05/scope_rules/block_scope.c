/*
 * Author  : Saud Zahir
 * Date    : August 16, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Scope Rules
*/

#include <stdio.h>

void staticVariable(void);
void blockScope(void);

int main() {
    blockScope();
    staticVariable();
    staticVariable();

    return 0;
}

void staticVariable(void) {
    static int x;
    // Only accessible within this function
    printf("Static local variable x: %d\n", x);
    ++x;
    printf("Static local variable updated: %d\n", x);
}

void blockScope(void) {
    int x = 10; // Outer block variable
    {
        int x = 20; // Inner block variable
        printf("Inner x: %d\n", x);
    }
    printf("Outer x: %d\n", x);
}

/*
NOTE:
    Identifiers defined inside a block have block scope.
    Block scope ends at the terminating right brace (})
    of the block.

    Local variables declared static still have block scope,
    even though they exist from before program startup.
    Thus, storage duration does not affect the scope of an
    identifier.
*/
