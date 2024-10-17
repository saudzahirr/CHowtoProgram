/*
 * Author  : Saud Zahir
 * Date    : October 17, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: #line Preprocessor Directive
*/

#include <stdio.h>

#line 100 "main.c"

int main() {
    printf("Line number: %d\n", __LINE__);
    printf("Source name: %s\n", __FILE__);

    return 0;
}

/*
    The #line preprocessor directive causes the subsequent
    source-code lines to be renumbered starting with the
    specified constant integer value. The directive

        #line 100

    starts line numbering from 100 beginning with the next
    source-code line. A filename can be included in the #line
    directive. The directive

    #line 100 "main.c"

    indicates that lines are numbered from 100 beginning with
    the next source-code line and that the name of the file for
    the purpose of any compiler messages is "main.c". The directive
    normally is used to help make the messages produced by syntax
    errors and compiler warnings more meaningful. The line numbers do
    not appear in the source file.
*/
