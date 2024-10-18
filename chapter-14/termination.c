/*
 * Author  : Saud Zahir
 * Date    : October 18, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Program Termination with exit and atexit
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Function to be called at program termination
void log_on_exit(void) {
    puts("INFO: Program is terminating ...");
}

int main(void) {
    // Register the function with atexit
    atexit(log_on_exit);

    char n;
    printf("%s", "Enter an even number: ");
    scanf("%c", &n);

    if isdigit(n) {
        n = (int) n;
        if (n % 2 != 0) {
            puts("WARNING: Number is not an even number");
            exit(EXIT_SUCCESS);
        }

        else {
            exit(EXIT_SUCCESS);
        }
    }

    else {
        puts("ERROR: Invalid input!");
        exit(EXIT_FAILURE);
    }

    return 0;
}

/*
NOTE:
    The general utilities library (<stdlib.h>) provides
    methods of terminating program execution by means
    other than a conventional return from function main.

    Function exit causes a program to terminate immediately.
    The function often is used to terminate a program when
    an input error is detected, or when a file to be processed
    by the program cannot be opened.

    Function atexit registers a function that should be called
    when the program terminates by reaching the end of main
    or when exit is invoked. Function atexit takes as an argument
    a pointer to a function.

    Functions called at program termination cannot have
    arguments and cannot return a value. Function exit takes
    one argument. The argument is normally the symbolic constant
    EXIT_SUCCESS or the symbolic constant EXIT_FAILURE.
*/
