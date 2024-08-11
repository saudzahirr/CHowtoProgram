/*
 * Author  : Saud Zahir
 * Date    : August 10, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Compound Interest.
*/

#include <stdio.h>
#include <math.h>

int main() {
    double principal = 1000.0; // starting principal
    double rate = 0.01; // annual interest rate

    printf("%4s%21s\n", "Year", "Amount on deposit");

    for (unsigned int year = 0; year <= 10; ++year) {
        double amount = principal * pow(1.0 + rate, year);

        printf("%4u%21.2f\n", year, amount);
    }

    return 0;
}

/*
NOTE:
    On many Linux/UNIX C compilers,
    you must include the '-lm' option
    when compiling. This links the math
    libray to the program.

    gcc -lm <filename>.c
*/
