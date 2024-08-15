/*
 * Author  : Saud Zahir
 * Date    : August 15, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Enumeration constants
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};

int rollDice(void); // Function prototype

int main()
{
    // randomize using current time
    srand(time(NULL));

    int points;
    enum Status status;
    int sum = rollDice();

    switch (sum) {
        case 7:
        case 11:
            status = WON;
            break;

        case 2:
        case 3:
        case 12:
            status = LOST;
            break;

        default:
            status = CONTINUE;
            points = sum;
            printf("Point is %d\n", points);
            break;
    }

    while (CONTINUE == status)
    {
        sum = rollDice();
        if (sum == points) {
            status = WON;
        }
        else {
            if (sum == 7) {
                status = LOST;
            }
        }
    }

    if (WON == status) {
        puts("Player wins");
    }
    else {
        puts("Player loses");
    }
}

int rollDice(void)
{
    int d1 = 1 + (rand() % 6);
    int d2 = 1 + (rand() % 6);

    printf("Player rolled %d + %d = %d\n", d1, d2, d1 + d2);
    return d1 + d2;
}

/*
NOTE:
    To randomize without entering a seed each time,
    use a statement like srand(time(NULL));
    This causes the computer to read its clock to
    obtain the value for the seed automatically.
    Function time returns the number of seconds that
    have passed since midnight on January 1, 1970.
    This value is converted to an unsigned integer and
    used as the seed to the random number generator.
    The function prototype for time is in <time.h>.

    An enumeration, introduced by the keyword enum,
    is a set of integer constants represented by identifiers.
    Enumeration constants help make programs more readable
    and easier to maintain. It’s also possible to assign an
    integer value to each identifier in an enum.
    The identifiers in an enumeration must
    be unique, but the values may be duplicated.
*/
