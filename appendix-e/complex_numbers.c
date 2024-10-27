/*
 * Author  : Saud Zahir
 * Date    : October 27, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * Topic: Complex Numbers
*/

#include <stdio.h>
#include <complex.h>

int main(void) {
    double complex a = 3.1 + 2.4 * I;
    double complex b = 2.3 + 4.1 * I;
    _Complex double z = 3.0 + 4.0 * I; // 3 + 4i

    double complex c = a + b; // complex addition
    double complex d = cpow(a, b); // complex exponentiation

    printf("a = %f %+fi\n", creal(a), cimag(a));
    printf("b = %f %+fi\n", creal(b), cimag(b));
    printf("a + b = %f %+fi\n", creal(c), cimag(c));
    printf("a - b = %f %+fi\n", creal(a - b), cimag(a - b));
    printf("a * b = %f %+fi\n", creal(a * b), cimag(a * b));
    printf("a / b = %f %+fi\n", creal(a / b), cimag(a / b));
    printf("a ^ b = %f %+fi\n", creal(d), cimag(d));

    return 0;
}

/*
NOTE:
    For C99 to recognize complex, include the <complex.h> header.
    This will expand the macro complex to the keyword _Complex—a
    type that reserves an array of exactly two elements, corresponding
    to the complex number’s real part and imaginary part.
*/
