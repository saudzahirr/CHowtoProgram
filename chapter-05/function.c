/*
 * Author  : Saud Zahir
 * Date    : August 15, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Functions
*/

#include <stdio.h>

double square(double); // Function prototype

int main() {
    printf("%f\n", square(2.5));

    return 0;
}

double square(double x) { // Function definition
    return x * x;
}
