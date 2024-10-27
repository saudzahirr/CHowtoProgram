/*
 * Author  : Saud Zahir
 * Date    : October 27, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Skipping Characters in an Input Stream
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int day, month, year;

    printf("%s", "Enter date (DD-MM-YYYY): ");
    scanf("%d%*c%d%*c%d", &day, &month, &year);
    printf("Day: %d\nMonth: %d\nYear:%d\n", day, month, year);

    return 0;
}

/*
NOTE:
    Often it’s necessary to skip certain characters in the input stream.
    For this reason, scanf provides the assignment suppression character *.
    This character enables scanf to read any type of data from the input
    and discard it without assigning it to a variable. The assignment
    suppression character used in the %c conversion specifier indicates that
    a character appearing in the input stream should be read and discarded.
*/
