/*
 * Author  : Saud Zahir
 * Date    : October 15, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Standard Input/Output Library Functions
 */

#include <stdio.h>
#define SIZE 80

int main(void) {
    int x;
    double y;

    puts("Enter an integer and a double:");
    scanf("%d%lf", &x, &y);

    char s[SIZE];
    sprintf(s, "integer:%6d\ndouble:%7.2f", x, y);

    printf("%s\n%s\n", "The formatted output stored in array s is:", s);

    char data[] = "17 1.414";
    sscanf(data, "%d%lf", &x, &y);
    printf("%s\n%s%6d\n%s%8.3f\n",
           "The values stored in character array data are:",
           "integer:", x, "double:", y);
}

/* NOTE:
    sscanf: Used to extract data from a string. The return value indicates the
    number of successful conversions. If no matching data is found, the return
    value is 0, and the variables remain unmodified. Always check the return
    value to avoid relying on uninitialized variables.

    sprintf: Used to format and store data into a string. It doesn't perform
    any validation like sscanf, but make sure the buffer size is large enough
    to hold the formatted string to avoid buffer overflow.
*/