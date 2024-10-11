/*
 * Author  : Saud Zahir
 * Date    : October 11, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: for Iteration Statement
*/

#include <stdio.h>

int main() {
    for (unsigned int counter = 1; counter <= 10; counter++) {
        printf("%u\n", counter);
    }

    return 0;
}

/*
NOTE:
    The for iteration statement handles the counter
    controlled iteration.

    for (initialization; condition; increment) {
        statement(s)
    }

    A common logic error called an off-by-one error,
    occurs if you incorrectly write counter < 10.
*/
