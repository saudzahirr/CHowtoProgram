/*
 * Author  : Saud Zahir
 * Date    : October 17, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: #if...#endif Preprocessor Directive
*/

#include <stdio.h>

// #if...#endif
#if !defined(DEBUG) && !defined(INFO) && !defined(WARN)
    #define DEBUG(msg) printf("DEBUG: %s\n", msg)
    #define INFO(msg) printf("INFO: %s\n", msg)
    #define WARN(msg) printf("WARNING: %s\n", msg)
#endif

// #ifndef...#endif
#ifndef ERROR
    #define ERROR(msg) printf("ERROR: %s\n", msg)
#endif

#define EDITION 8

// #if...#elif...#else...#endif
#if EDITION == 9
    #define EDITION "9th Edition"
#elif EDITION == 8
    #define EDITION "Global 8th Edition"
#else
    #define EDITION "Global Edition"
#endif

int main(void) {
    INFO("C How to Program");
    DEBUG(EDITION);
    WARN("...");
    ERROR("...");

    #if 0
        INFO("Hello, world!");
    #endif

    #if 1
        INFO("Hello, world!");
    #endif

    return 0;
}

/*
NOTE:
    Conditional compilation enables you to control the execution
    of preprocessor directives and the compilation of program code.
    Each conditional preprocessor directive evaluates a constant
    integer expression. Cast expressions, sizeof expressions and
    enumeration constants cannot be evaluated in preprocessor directives.

    The conditional preprocessor construct is much like the if selection
    statement.

    Every #if construct ends with #endif. Directives #ifdef and #ifndef
    are shorthand for #if defined(name) and #if !defined(name). A multiple-part
    conditional preprocessor construct may be tested by using the #elif (the
    equivalent of else if in an if statement) and the #else (the equivalent of
    else in an if statement) directives. These directives are frequently used to
    prevent header files from being included multiple times in the same source file.
    These directives also are frequently used to enable and disable code that makes
    software compatible with a range of platforms.

    During program development, it’s often helpful to “comment out” portions of
    code to prevent them from being compiled. If the code contains multiline
    comments, cannot be used to accomplish this task, because such comments cannot
    be nested. Instead, you can use the following preprocessor construct:
            #if 0
                code prevented from compiling
            #endif
    To enable the code to be compiled, replace the 0 in the preceding construct with 1.
*/
