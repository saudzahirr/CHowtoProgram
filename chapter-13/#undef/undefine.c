/*
 * Author  : Saud Zahir
 * Date    : October 17, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: #undef Preprocessor Directive
*/

#include <stdio.h>

#define X 3
#undef X
#define X 5

int main(void) {
    printf("%d\n", X);

    return 0;
}

/*
NOTE:
    Symbolic constants and macros can be discarded by using the #undef preprocessor
    directive. Directive #undef “undefines” a symbolic constant or macro name. The
    scope of a symbolic constant or macro is from its definition until it’s undefined
    with #undef, or until the end of the file. Once undefined, a name can be redefined
    with #define.
*/
