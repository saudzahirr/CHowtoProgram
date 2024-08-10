/*
 * Author  : Saud Zahir
 * Date    : August 8, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Problem 2.17
*/

#include <stdio.h>

int main() {
    float u, a, t, v, s;
    printf("%s", "Enter initial velocity: ");
    scanf("%f", &u);
    printf("%s", "Enter acceleration: ");
    scanf("%f", &a);
    printf("%s", "Enter elapsed time: ");
    scanf("%f", &t);

    v = u + a * t;
    s = u * t + 1/2 * a * t * t;

    printf("Final velocity: %f\n", v);
    printf("Distance traversed: %f\n", s);

    return 0;
}
