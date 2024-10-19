/*
 * Author  : Saud Zahir
 * Date    : October 19, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Inline Functions
 */

#include <stdio.h>

static inline int max(int, int);

int main(void) {
    int a, b;
    a = 3;
    b = 5;
    printf("max(%d, %d) = %d\n", a, b, max(a, b));

    return 0;
}

static inline int max(int x, int y) {
    return (x > y) ? x : y;
}

/*
NOTE:
    C99 allows the declaration of inline functions by
    placing the keyword inline before the function
    declaration, as in:

        inline void randomFunction();

    This has no effect on the logic of the program from
    the user’s perspective, but it can improve performance.
    Function calls take time. When we declare a function as
    inline, the program might no longer call that function.
    Instead, the compiler has the option to replace every call
    to an inline function with a copy of the code body of that
    function. This improves the runtime performance but it may
    increase the program’s size. Declare functions as inline only
    if they are short and called frequently. The inline declaration
    is only advice to the compiler, which can decide to ignore it.
    [For more information, see C99 Standard Section 6.7.4.]
*/
