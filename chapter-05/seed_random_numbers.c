/*
 * Author  : Saud Zahir
 * Date    : August 15, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Random Number Generation
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int seed;
    int face;

    printf("%s", "Enter seed: ");
    scanf("%u", &seed);

    srand(seed);

    for (unsigned int i = 1; i <= 20; ++i) {
        face = 1 + rand() % 6;
        printf("%10d", face);

        if (i % 5 == 0) {
            puts("");
        }
    }

    return 0;
}

/*
NOTE:
    Function rand actually generates pseudorandom numbers.
    Calling rand repeatedly produces a sequence of numbers
    that appears to be random. However, the sequence repeats
    itself each time the program is executed. Once a program
    has been thoroughly debugged, it can be conditioned to
    produce a different sequence of random numbers for each
    execution. This is called randomizing and is accomplished
    with the standard library function srand. Function srand
    takes an unsigned int argument and seeds function rand to
    produce a different sequence of random numbers for each
    execution of the program.
*/
