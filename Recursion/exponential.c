/*
 * Author  : Saud Zahir
 * Date    : June 19, 2024
 * Contact : m.saud.zahir@gmail.com
*/


#include "stdio.h"


int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n = 10;
    float exp = 0.0;
    float x;

    puts("**************************");
    puts("** Exponential Function **");
    puts("**************************");
    printf("x = ");
    scanf("%f", &x);

    for (int i = 0; i <= n; i++) {
        float pow = 1.0;
        for (int k = 1; k <= i; k++) {
            pow *= x;
        }
        exp += pow/factorial(i);
    }
    printf("exp(%f) = %.32f\n", x, exp);

    return 0;
}
