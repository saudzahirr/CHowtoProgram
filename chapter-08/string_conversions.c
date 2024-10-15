/*
 * Author  : Saud Zahir
 * Date    : October 15, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: String-Conversion Functions
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // strtod
    const char *data = "3.14159 is the value of pi.";
    char *sPtr;
    double pi = strtod(data, &sPtr);
    printf("%f\n", pi);
    printf("%s\n", sPtr);

    // strtol
    data = "299792458 (m/s) is the speed of light.";
    char *remainderPtr;
    int base = 0;
    long int c = strtol(data, &remainderPtr, base);
    printf("%ld\n", c);
    printf("%s\n", remainderPtr);

    unsigned long int u = strtoul(data, &remainderPtr, base);
    printf("%lu\n", u);
    printf("%s\n", remainderPtr);

    return 0;
}

/*
NOTE:
    Base 0 indicates that the value to be converted
    can be in octal (base 8), decimal (base 10) or
    hexadecimal (base 16) format.
*/