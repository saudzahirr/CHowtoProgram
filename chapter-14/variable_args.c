/*
 * Author  : Saud Zahir
 * Date    : October 17, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Variable-Length Argument Lists
 */

#include <stdio.h>
#include <stdarg.h>

double sum(int i, ...);

int main(void) {
    double x0 = 1.2;
    double x1 = 1.5;
    double x2 = 1.7;
    double x3 = 0.9;

    printf("sum(x0, x1, x2) = %f\n", sum(3, x0, x1, x2));
    printf("sum(x0, x1, x2, x3) = %f\n", sum(4, x0, x1, x2, x3));

    return 0;
}

double sum(int n, ...) {
    double total = 0;
    va_list ap;       // stores information needed by va_start and va_end
    va_start(ap, n);  // initializes the va_list object
    // process variable-length argument list
    for (int i = 1; i <= n; ++i) {
        total += va_arg(ap, double);
    }

    va_end(ap); // clean up variable-length argument list
    return total;
}

/*
NOTE:
    The ellipsis (...) in the function prototype indicates
    that the function receives a variable number of arguments
    of any type. The ellipsis must always be placed at the end
    of the parameter list.

    The macros and definitions of the variable arguments headers
    <stdarg.h> provide the capabilities necessary to build functions
    with variable-length argument lists.
*/
