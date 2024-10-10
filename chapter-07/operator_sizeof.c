/*
 * Author  : Saud Zahir
 * Date    : October 09, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Operator sizeof
*/

#include <stdio.h>

int main(void) {
    char c;
    short s;
    int i;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;
    int array[20];    // create array of 20 int elements
    int *ptr = array; // create pointer to array

    printf("sizeof c = %lu\tsizeof(char) = %lu\n", sizeof c, sizeof(char));
    printf("sizeof s = %lu\tsizeof(short) = %lu\n", sizeof s, sizeof(short));
    printf("sizeof i = %lu\tsizeof(int) = %lu\n", sizeof i, sizeof(int));
    printf("sizeof l = %lu\tsizeof(long) = %lu\n", sizeof l, sizeof(long));
    printf("sizeof ll = %lu\tsizeof(long) = %lu\n", sizeof ll, sizeof(long long));
    printf("sizeof f = %lu\tsizeof(float) = %lu\n", sizeof f, sizeof(float));
    printf("sizeof d = %lu\tsizeof(double) = %lu\n", sizeof d, sizeof(double));
    printf("sizeof ld = %lu\tsizeof(long double) = %lu\n", sizeof ld, sizeof(long double));
    printf("sizeof int array = %lu\n", sizeof array);
    printf("sizeof int *ptr = %lu\n", sizeof ptr);

    return 0;
}

/*
NOTE:
    C provides the special unary operator sizeof to determine
    the size in bytes of an array (or any other data type). This
    operator is applied at compilation time, unless its operand
    is a variable-length array.

    The size of ptr will be 4 bytes on 32-bit systems and 8 bytes
    on 64-bit systems.
 
    $ getconf LONG_BIT
    >64
*/
