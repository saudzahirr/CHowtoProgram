/*
 * Author  : Saud Zahir
 * Date    : October 15, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Standard Input/Output Library Functions
 */

#include <stdio.h>
#define SIZE 256

int main(void) {
    char sentence[SIZE];
    int i = 0;
    int c;

    while ((i < SIZE - 1) && (c = getchar()) != EOF){
        sentence[i] = c;
        i++;
    }

    puts(sentence);

    return 0;
}

/*
NOTE:
    On UNIX (Linux or macOS), press Ctrl+D to send
    an EOF signal from the terminal.
    On Windows, press Ctrl+Z and then Enter.
*/
