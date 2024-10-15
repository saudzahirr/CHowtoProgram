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

void reverse(const char *const sPtr); 

int main(void) {
    char sentence[SIZE];

    puts("Enter a line of text:");
    fgets(sentence, SIZE, stdin);
    printf("\n%s", "The line printed backward is:");
    reverse(sentence);
    puts("");

    return 0;
}

void reverse(const char *const sPtr) {
    if (sPtr[0] == '\0') {
        return;
    }
    else {                 
        reverse(&sPtr[1]); 
        putchar(sPtr[0]);  
    }
}
