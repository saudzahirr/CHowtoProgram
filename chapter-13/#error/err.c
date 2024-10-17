/*
 * Author  : Saud Zahir
 * Date    : October 17, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: #error Preprocessor Directive
*/

#include <stdio.h>

void systemInfo() {
    #if defined(_WIN32) || defined(_WIN64)
        printf("Platform: Windows %d\n", _WIN32 ? 32 : 64);
    #elif defined(__linux__)
        puts("Platform: Linux");
    #else
        #error Unsupported platform!
    #endif
}

int main() {
    systemInfo();

    return 0;
}

/*
NOTE:
    The #error directive

            #error tokens

    prints an implementation-dependent message including the
    tokens specified in the directive. The tokens are sequences
    of characters separated by spaces. For example,
    
            #error 1 - Out of range error
    
    contains 6 tokens. When a #error directive is processed on some
    systems, the tokens in the directive are displayed as an error
    message, preprocessing stops and the program does not compile.
*/
