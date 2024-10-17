/*
 * Author  : Saud Zahir
 * Date    : October 17, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Command-Line Arguments
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("Count: %d\n", argc);

    for (size_t i = 0; i < argc; i++) {
        puts(argv[i]);
    }

    return 0;
}

/*
NOTE:
    On many systems, it’s possible to pass arguments to main from a command line
    by including parameters int argc and char *argv[] in the parameter list of main.
    Parameter argc receives the number of command-line arguments that the user has
    entered. Parameter argv is an array of strings in which the actual command-line
    arguments are stored. Common uses of command-line arguments include passing options
    to a program and passing filenames to a program.

    $ ./a.out 1 2 3
    Count: 4
    ./a.out
    1
    2
    3
*/
