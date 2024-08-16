/*
 * Author  : Saud Zahir
 * Date    : August 16, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Scope Rules
*/

#include <stdio.h>

void functionScope(void);

int main() {
    functionScope();

    return 0;
}

void functionScope(void) {
    int i = 0;

    // goto statement
    start: // label
        printf("i = %d\n", i);
        i++;
        if (i < 5) {
            goto start;
        }

    // switch statement
    int number;
    printf("%s", "Enter a number: ");
    scanf("%d", &number);

    switch (number % 2) {
        case 0: // case label
            printf("%d is even number.\n", number);
            break;
        default:
            printf("%d is odd number.\n", number);
            break;
    }
}

/*
NOTE:
    Labels (identifiers followed by a colon such as start:)
    are the only identifiers with function scope. Labels can
    be used anywhere in the function in which they appear, but
    cannot be referenced outside the function body. Labels are
    used in switch statements (as case labels) and in goto statements.
    Labels are hidden in the function in which they’re defined.
    This hiding—more formally called information hiding—is a means
    of implementing the principle of least privilege—a fundamental
    principle of good software engineering.
    In the context of an application, the principle states that
    code should be granted only the amount of privilege and
    access that it needs to accomplish its designated task, but no more.
*/
