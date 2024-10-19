/*
 * Author  : Saud Zahir
 * Date    : October 19, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Unconditional Branching with goto
 */

#include <stdio.h>

int main(void) {
    int n = 0;

    start:
        if (n > 10) {
            goto end;
        }

        printf("%d ", n);
        ++n;
        goto start;

    end:
        puts("End");

    return 0;   
}

/*
NOTE:
    In some cases, performance is more important than
    strict adherence to structured programming techniques.
    In these cases, some unstructured programming techniques
    may be used. For example, using break to terminate execution
    of an iteration statement before the loop-continuation
    condition becomes false. This saves unnecessary iterations
    of the loop if the task is completed before loop termination.

    Another instance of unstructured programming is the goto
    statement—an unconditional branch. The result of the goto
    statement is a change in the flow of control to the first
    statement after the label specified in the goto statement.
    A label is an identifier followed by a colon. A label must
    appear in the same function as the goto statement that refers
    to it. Labels need not be unique among functions (because labels
    have block scope, they only exist within the function or block
    in which they are defined).

    The goto statement can be used to exit from deeply nested control
    structures efficiently. The goto statement is unstructured and
    can lead to programs that are more difficult to debug, maintain and
    modify.

    Consider using a Goto-Chain when leaving a function on error
    when using and releasing resources.
*/
