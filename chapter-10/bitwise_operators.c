/*
 * Author  : Saud Zahir
 * Date    : October 16, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Bitwise Operators
*/

#include <stdio.h>
#include <string.h>

#define BITWISE(a, b, operator, operator_name) \
            printf("Bitwise %s\n", operator_name); \
            printf("%6d = ", a); \
            diplayBits(a); \
            printf("%6d = ", b); \
            diplayBits(b); \
            printHeader(); \
            printf("%s%d %s %d = ", \
                    ((strcmp(#operator, "<<") == 0) || \
                    (strcmp(#operator, ">>") == 0)) \
                    ? "" : " ", a, #operator, b \
            ); \
            diplayBits(a operator b); \
            printHeader()

#define NOT(a, operator) \
            puts("Bitwise NOT"); \
            printf("%6d = ", a); \
            diplayBits(a); \
            printHeader(); \
            printf("%5s%d = ", #operator, a); \
            diplayBits(operator a); \
            printHeader()

#define MAX(a, b) a ^ ((a ^ b) & -(a < b))

#define IS_EVEN(a) (a & (a - 1)) == 0

void diplayBits(unsigned int);
void printHeader(void);

int main(void) {
    unsigned int a = 3;
    unsigned int b = 5;

    BITWISE(a, b, &, "AND");
    BITWISE(a, b, |, "OR");
    BITWISE(a, b, ^, "XOR");
    NOT(a, ~);
    BITWISE(a, 1, <<, "LEFT SHIFT");
    BITWISE(b, 1, >>, "RIGHT SHIFT");

    printf("max(%d, %d) = %d\n", a, b, MAX(a, b));
    printf("%d is %s\n", 15, IS_EVEN(15) ? "Even" : "Odd");
    printf("%d is %s\n", 16, IS_EVEN(16) ? "Even" : "Odd");

    return 0;
}

void diplayBits(unsigned int n) {
    unsigned int mask;
    int bits = sizeof(unsigned int) * __CHAR_BIT__;
    mask = 1 << (bits - 1);

    for (size_t c = 1; c <= bits; c++) {
        printf("%c", n & mask ? '1' : '0');
        mask >>= 1;

        if (c % __CHAR_BIT__ == 0) {
            printf(" ");
        }
    }
    puts("");

}

void printHeader(void) {
    for (size_t i = 0; i < (sizeof(unsigned int) + 1) * __CHAR_BIT__; i++) {
        printf("-");
    }
    puts("----");
}

/*
NOTE:
    Computers represent all data internally as sequences of bits.
    Each bit can assume the value 0 or the value 1. On most systems,
    a sequence of eight bits forms a byte—the typical storage unit for
    a variable of type char. Other data types are stored in larger
    numbers of bytes. The bitwise operators are used to manipulate the
    bits of integral operands, both signed and unsigned. Unsigned integers
    are normally used with the bitwise operators.

    Bitwise data manipulations are machine dependent.

    The bitwise complement operator sets all 0 bits in its operand to 1
    in the result and sets all 1 bits to 0 in the result—often called
    toggling the bits.

    Often, the bitwise AND operator is used with an operand called a
    mask—an integer value with specific bits set to 1. Masks are used
    to hide some bits in a value while selecting other bits.

    The symbolic constant CHAR_BIT (defined in <limits.h>) represents the
    number of bits in a byte (normally 8).

    Each binary bitwise operator has a corresponding assignment operator.
    The bitwise NOT assignment does not exist.

    &=  Bitwise AND assignment operator.
    |=  Bitwise inclusive OR assignment operator.
    ^=  Bitwise exclusive OR assignment operator.
    <<= Left-shift assignment operator.
    >>= Right-shift assignment operator.

    https://graphics.stanford.edu/~seander/bithacks.html
*/
