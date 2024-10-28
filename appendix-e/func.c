/*
 * Author  : Saud Zahir
 * Date    : October 28, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * Topic: __func__ Predefined Identifier
*/

#include <stdio.h>

int add(int a, int b);
int mul(int a, int b);

int main(void) {
    int a, b, c;
    a = 3;
    b = 5;
    c = add(a, b);
    c = mul(a, c);

    return 0;
}

int add(int a, int b) {
    printf("%s: %d + %d = %d\n", __func__, a, b, a + b);
    return a + b;
}

int mul(int a, int b) {
    printf("%s: %d * %d = %d\n", __func__, a, b, a * b);
    return a * b;
}

/*
NOTE:
    The __func__ predefined identifier is similar to the __FILE__
    and __LINE__ preprocessor macros—it’s a string that holds the
    name of the current function. Unlike __FILE__, it’s not a string
    literal but a real variable, so it cannot be concatenated with
    other literals. This is because string literal concatenation is
    performed during preprocessing, and the preprocessor has no
    knowledge of the semantics of the C language proper.
*/
