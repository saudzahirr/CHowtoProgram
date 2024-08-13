/*
 * Author  : Saud Zahir
 * Date    : August 13, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Math Library Functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592654

int main() {
    // Square root function
    printf("%f\n", sqrt(2));
    
    // Cube root function
    printf("%f\n", cbrt(2));
    
    // Exponential function
    printf("%f\n", exp(2));
    
    // Natural logarithm (base e) function
    printf("%f\n", log(2));
    
    // Logarithm (base 10) function
    printf("%f\n", log10(2));
    
    // Absolute function
    printf("%d\n", abs(-2));
    
    // Floating point absolute function
    printf("%f\n", fabs(-sqrt(2)));
    
    // Ceil function
    printf("%f\n", ceil(sqrt(2)));
    
    // Floor function
    printf("%f\n", floor(sqrt(2)));
    
    // Power function
    printf("%f\n", pow(sqrt(2), 3));
    
    // Floating point modulus function
    // printf("%f\n", fmod(13.657, 2.333));
    
    // Sine function
    printf("%f\n", sin(PI/3));
    
    // Cosine function
    printf("%f\n", cos(PI/3));
    
    // Tangent function
    printf("%f\n", tan(PI/3));

    return 0;
}
