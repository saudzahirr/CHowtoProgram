/*
 * Author  : Saud Zahir
 * Date    : October 13, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: String Copy
 */

#include <stdio.h>
#define SIZE 32

void copy1(char *const s1, const char *const s2);
void copy2(char *s1, const char *s2);

int main(void) {
    char output1[SIZE];
    char *input1 = "Hello, world!";
    copy1(output1, input1);
    printf("output = %s\n", output1);

    char output2[SIZE];
    char *input2 = "C How to Program";
    copy2(output2, input2);
    printf("output = %s\n", output2);
}

void copy1(char *const s1, const char *const s2)
{
    for (size_t i = 0; (s1[i] = s2[i]) != '\0'; ++i)
    {
        ;
    }
}

void copy2(char *s1, const char *s2) {
    for (; (*s1 = *s2) != '\0'; ++s1, ++s2);
}

/*
NOTE:
    In both functions, the second parameter is a
    pointer that points to a constant data so that
    the principle of least privilege is enforced.

*/
