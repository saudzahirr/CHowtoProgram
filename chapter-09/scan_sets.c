/*
 * Author  : Saud Zahir
 * Date    : October 27, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Scan Sets
 */

#include <stdio.h>

int main(void) {
    char string[8];

    printf("Enter a string: ");
    scanf("%7[aeiou]", string);
    printf("The input was \"%s\"\n", string);

    // Scan sets also support patterns like: %7[0-9]
    // (match up to 7 digits) or %7[^a-zA-Z] (match up
    // to 7 non-alphabetic characters)

    return 0;
}

/*
NOTE:
    A sequence of characters can be input using a scan set.
    A scan set is a set of characters enclosed in square brackets,
    [], and preceded by a percent sign in the format control string.
    A scan set scans the characters in the input stream, looking only
    for those characters that match characters contained in the scan set.
    Each time a character is matched, it’s stored in the scan set’s
    corresponding argument—a pointer to a character array. The scan set
    stops inputting characters when a character that’s not contained in
    the scan set is encountered. If the first character in the input stream
    does not match a character in the scan set, the array is not modified.

    The scan set can also be used to scan for characters not contained in
    the scan set by using an inverted scan set. To create an inverted scan
    set, place a caret (^) in the square brackets before the scan characters.
    This causes characters not appearing in the scan set to be stored. When a
    character contained in the inverted scan set is encountered, input
    terminates.
*/
