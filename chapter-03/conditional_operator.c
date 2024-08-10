/*
 * Author  : Saud Zahir
 * Date    : August 10, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Conditional Operator in C.
*/

#include <stdio.h>

int main() {
    int grade;

    printf("Enter grade: ");
    scanf("%d", &grade);

    grade >= 50 ? puts("Passed") : puts("Failed");

    return 0;
}
