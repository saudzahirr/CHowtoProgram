/*
 * Author  : Saud Zahir
 * Date    : October 17, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Predefined Symbolic Constants
*/

#include <stdio.h>

int main(void) {
    // The name of the source file (string)
    printf("File: %s\n", __FILE__);
    //The line number of the current source-code line (an integer constant).
    printf("Line: %d\n", __LINE__);
    // The date the source file was compiled (a string of the form "Mmm dd yyyy")
    printf("Date: %s\n", __DATE__);
    // The time the source file was compiled (a string literal of the form "hh:mm:ss")
    printf("Time: %s\n", __TIME__);
    // The value 1 if the compiler supports Standard C; 0 other wise.
    printf("Standard C: %d\n", __STDC__);

    return 0;
}

/*
    Standard C provides predefined symbolic constants, present in
    Section 6.10.8 of the C standard document. These identifiers
    begin and end with two underscores and often are useful to
    include additional information in error messages. These
    identifiers and the defined identifier cannot be used in
    #define or #undef directives.
*/
