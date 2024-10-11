/*
 * Author  : Saud Zahir
 * Date    : October 11, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: switch Multiple-Selection Statement
*/

#include <stdio.h>

int main() {
    int number;
    int temp;

    printf("%s", "Enter a number: ");
    scanf("%d", &number);

    temp = number % 2;

    switch (temp) {
        case 0:
            printf("%d is even number", number);
            break;
        
        default:
            printf("%d is odd number", number);
            break;
    }

    return 0;
}

/*
NOTE:
    The switch statment consists of a series of
    case labels, an optional default case label.
    Each case can have one or more actions.
    If break is not used anywhere in the switch
    statement, then each time a match occurs in
    the statement, the statements for all remaining
    cases will be executed.
    A case can test only 'constant integral expression
    -i.e., any combination of character constants and
    integer constants that evaluates to a constant
    integer value.
    A character constant can be represented as the
    specific character in "single quotes" such as
    'A'. Characters must be enclosed with single
    quotes to be recognized as character constants.
    Characters in double quotes are recognized as
    strings.
*/
