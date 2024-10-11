/*
 * Author  : Saud Zahir
 * Date    : October 11, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: do...while Iteration Statement
*/

#include <stdio.h>

int main() {
    unsigned int counter = 1;
    do {
        printf("%u\n", counter);
    } while (++counter <= 10);

    return 0;
}

/*
NOTE:
    The do...while iteration statement is similar to
    while statement. In while iteration, loop-continuation
    is tested at the beginning of the loop before loop body.
    In do...while, loop-continuation is tested after the loop
    body is performed.

    do {
        statement(s)
    } while (condition);

*/
