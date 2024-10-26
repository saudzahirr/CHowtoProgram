/*
 * Author  : Saud Zahir
 * Date    : October 27, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Printing Floating-Point Numbers
 */

#include <stdio.h>

int main(void) {
    double m = 0.00023571113171923;

    printf("%f\n", m);
    printf("%F\n", m);
    printf("%e\n", m);
    printf("%E\n", m);
    printf("%g\n", m);
    printf("%G\n\n", m);

    m = 0.000023571113171923;

    printf("%f\n", m);
    printf("%F\n", m);
    printf("%e\n", m);
    printf("%E\n", m);
    printf("%g\n", m);
    printf("%G\n\n", m);

    m = 0.000023571113171923E11;

    printf("%f\n", m);
    printf("%F\n", m);
    printf("%e\n", m);
    printf("%E\n", m);
    printf("%g\n", m);
    printf("%G\n", m);

    return 0;
}

/*
NOTE:
    Floating-point conversion specifiers.
    e or E Display a floating-point value in exponential notation.

    f or F Display floating-point values in fixed-point notation
           (F is supported in the Microsoft Visual C++ compiler in
           Visual Studio 2015 and higher).

    g or G Display a floating-point value in either the floating-point
           form f or the exponential form e (or E), based on the magnitude
           of the value.

    L      Place before any floating-point conversion specifier to indicate
           that a long double floating-point value should be displayed.
    
    Values displayed with the conversion specifiers e, E and f show six
    digits of precision to the right of the decimal point by default (e.g.,
    1.045927); other precisions can be specified explicitly. Conversion
    specifier f always prints at least one digit to the left of the decimal
    point. Conversion specifiers e and E print lowercase e and uppercase E,
    respectively, preceding the exponent, and print exactly one digit to the
    left of the decimal point.
    
    Conversion specifier g (or G) prints in either e (E) or f format
    with no trailing zeros (1.234000 is printed as 1.234). Values are printed
    with e (E) if, after conversion to exponential notation, the value’s exponent
    is less than -4, or the exponent is greater than or equal to the specified
    precision (six significant digits by default for g and G). Otherwise,
    conversion specifier f is used to print the value. At least one decimal digit
    is required for the decimal point to be output.

    The precision for conversion specifiers g and G indicates the maximum number
    of significant digits printed, including the digit to the left of the decimal
    point.
*/