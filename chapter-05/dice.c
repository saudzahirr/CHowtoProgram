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
    int face;
    for (unsigned int i = 1; i <= 20; ++i) {
        face = 1 + rand() % 6;
        printf("%10d", face);

        if (i % 5 == 0) {
            puts("");
        }
    }

    return 0;
}