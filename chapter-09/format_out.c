/*
 * Author  : Saud Zahir
 * Date    : October 27, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: C Formatted Output
 */

#include <stdio.h>

int main(void) {
    int i = 7;
    float f = 3.141592654;
    double d = 0.000023571113171923;

    printf("%8d|%.8f\n", i, f); // right justify
    printf("%-8d|%.8f\n", i, f); // left justify

    printf("%8.2f|%d\n", f, i); // right justify
    printf("%-8.2f|%d\n", f, i); // left justify

    printf("%f\n", d); // default 6 decimal place precision
    printf("%.16f\n", d); // 16 decimal place precision
    printf("%G\n", d);
    printf("%.16G\n", d);
    printf("%d|%16G\n", i, d);

    // Combining field width with precision
    printf("%16.8f\n", f);
    printf("%*.*f\n", 16, 8, f); // 16 for the field width, 8 for the precision

    // space flag
    printf("% d\n% d\n", i, -i); // aligning positive and negative numbers

    // + flag
    printf("%+d\n%+d\n", i, -i);

    // # flag
    printf("%#o\n", 31415);
    printf("%#x\n", 31415);
    printf("%#X\n", 31415);

    printf("%G\n", 7.0);
    printf("%#G\n", 7.0);

    // 0 flag
    printf("%+08d\n", i);
    printf("%08d\n", i);

    return 0;
}

/*
NOTE:
    It’s possible to specify the field width and the precision
    using integer expressions in the argument list following the
    format control string. To use this feature, insert an asterisk
    (*) in place of the field width or precision (or both). The
    matching int argument in the argument list is evaluated and
    used in place of the asterisk. A field width’s value may be
    either positive or negative (which causes the output to be left
    justified in the field).

    Function printf also provides flags to supplement its output
    formatting capabilities. Five flags are available for use in
    format control strings. To use a flag in a format control string,
    place the flag immediately to the right of the percent sign. Several
    flags may be combined in one conversion specifier.

    -   Left justify the output within the specified field.

    +   Display a plus sign preceding positive values and a
        minus sign preceding negative values.

    ' ' Print a space before a positive value not printed with the + flag.

    #   Prefix 0 to the output value when used with the octal conversion
        specifier o.
        Prefix 0x or 0X to the output value when used with the hexadecimal
        conversion specifiers x or X.
        Force a decimal point for a floating-point number printed with
        e, E, f, g or G that does not contain a fractional part. (Normally
        the decimal point is printed only if a digit follows it.) For g and
        G specifiers, trailing zeros are not eliminated.

    0   Pad a field with leading zeros.


    Literals and Escape Sequences

    \'  Output the single quote (') character.
    \"  Output the double quote (") character.
    \?  Output the question mark (?) character.
    \\  Output the backslash (\) character.
    \a  Cause an audible (bell) or visual alert
        (typically, flashing the window in which
        the program is running).
    \b  Move the cursor back one position on the current line.
    \f  Move the cursor to the start of the next logical page.
    \n  Move the cursor to the beginning of the next line.
    \r  Move the cursor to the beginning of the current line.
    \t  Move the cursor to the next horizontal tab position.
    \v  Move the cursor to the next vertical tab position.
*/
