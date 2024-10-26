/*
 * Author  : Saud Zahir
 * Date    : October 26, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Function strerror
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    for (int i = 0; i < 134; i++) {
        printf("%s\n", strerror(i));
    }

    return 0;
}

/*
NOTE:
    Function strerror takes an error number and creates an
    error message string. A pointer to the string is returned.

        char *strerror(int errornum);
    
    Maps errornum into a full text string in a compiler- and locale-
    specific manner (e.g. the message may appear in different spoken
    languages based on the computer’s locale). A pointer to the string
    is returned. Error numbers are defined in errno.h.
*/
