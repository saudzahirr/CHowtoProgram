/*
 * Author  : Saud Zahir
 * Date    : August 9, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Cast Operator in C.
*/

#include <stdio.h>

int main() {
    int x = 100;
    int y = 256;

    float z = y / x;
    printf("z = %f\n", z);

    // Explicit conversion by cast operator
    z = (float) y / x;
    printf("z = %f\n", z);

    // Implicit conversion by compiler
    float a = 1.414214;
    int b = 2;

    float c = a / b;
    printf("c = %f\n", c);

    return 0;
}
