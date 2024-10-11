/*
 * Author  : Saud Zahir
 * Date    : October 11, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Selection Statements in C.
*/

#include <stdio.h>

int main() {
    int grade;

    printf("Enter grade: ");
    scanf("%d", &grade);

    if (grade >= 50) {
        puts("Passed");
    }

    return 0;
}

/*
NOTE:
    The if statement is called single-selection statement.
    The if...else statement is called double-selection
    statement. The switch statement is called multiple-
    selection statement.

    A set of statements contained within a pair of braces
    is called a compound statement or a block.
    Always include your control statements' bodies in braces
    even if those bodies contain only single statement. This
    solves the "dangling-else" problem.
*/
