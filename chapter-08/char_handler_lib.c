/*
 * Author  : Saud Zahir
 * Date    : October 15, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Character-Handling Library
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c;
    printf("%s", "Enter a character: ");
    scanf("%c", &c);

    // isdigit
    printf("'%c' is%s a digit\n", c, isdigit(c) ? "" : " not");

    // isalpha
    printf("'%c' is%s an alphabet\n", c, isalpha(c) ? "" : " not");

    // isalnum
    printf("'%c' is%s an alphanumeric character\n", c, isalnum(c) ? "" : " not");

    // isxdigit
    printf("'%c' is%s a hexadecimal number\n", c, isxdigit(c) ? "" : " not");

    // islower
    printf("'%c' is%s a lowercase alphabet\n", c, islower(c) ? "" : " not");

    // isupper
    printf("'%c' is%s an uppercase alphabet\n", c, isupper(c) ? "" : " not");

    // tolower
    printf("tolower(%c) = %c\n", c, tolower(c));

    // toupper
    printf("toupper(%c) = %c\n", c, toupper(c));

    // isblank
    printf("'%c' is%s a blank character\n", c, isblank(c) ? "" : " not");

    // isspace
    printf("'%c' is%s a whitespace character\n", c, isspace(c) ? "" : " not");

    // iscntrl
    printf("'%c' is%s a control character\n", c, iscntrl(c) ? "" : " not");

    // ispunct
    printf("'%c' is%s a punctuation character\n", c, ispunct(c) ? "" : " not");

    // isprint
    printf("'%c' is%s a printing character\n", c, isprint(c) ? "" : " not");

    // isgraph
    printf("'%c' is%s a printing character other than a space\n", c, isgraph(c) ? "" : " not");

    return 0;
}

/*
NOTE:
    A blank character separates words in a line of text.
    
    A whitespace character—newline ('\n'), space (' '),
    form feed ('\f'), carriage return ('\r'), horizontal
    tab ('\t') or vertical tab ('\v').

    A control character—horizontal tab ('\t'), vertical tab
    ('\v'), form feed ('\f'), alert ('\a'), backspace ('\b'),
    carriage return ('\r'), newline ('\n') and others.

    A punctuation character—$, #, (, ), [, ], {, }, ;, : or %.

    A printing character is a character that’s visible on the
    screen.
*/