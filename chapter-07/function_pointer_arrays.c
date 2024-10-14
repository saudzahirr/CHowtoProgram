/*
 * Author  : Saud Zahir
 * Date    : October 14, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Array of pointers to functions
*/

#include <stdio.h>

int add(int *, int *);
int sub(int *, int *);
int mul(int *, int *);

int main(void) {
    int (*calculator[3])(int *, int *) = {add, sub, mul};

    puts("Options:\n\t1: add\n\t2: sub\n\t3: mul");

    int option, a, b;
    printf("%s", "Enter option: ");
    scanf("%d", &option);

    printf("%s", "Enter number a: ");
    scanf("%d", &a);

    printf("%s", "Enter number b: ");
    scanf("%d", &b);

    switch (option) {
        case 1:
            printf("%d + %d = %d\n", a, b, (*calculator[option - 1])(&a, &b));
            break;
        case 2:
            printf("%d - %d = %d\n", a, b, (*calculator[option - 1])(&a, &b));
            break;
        case 3:
            printf("%d * %d = %d\n", a, b, (*calculator[option - 1])(&a, &b));
            break;
        default:
            puts("ERROR: Wrong option!");
    }
    return 0;
}

int add(int *a, int *b) {
    return *a + *b;
}

int sub(int *a, int *b) {
    return *a - *b;
}

int mul(int *a, int *b) {
    return *a * *b;
}


/*
NOTE:
    int *p[4]   ---> p is an array of 4 pointers to integers.
    int (*p)[4] ---> p is a pointer to an array of 4 integers.

    int (*func[3])(int *, int *) ---> func is array of 3 pointers
                                      to function which take two
                                      arguments and return an int.

    char *(*(*func)())[10] ---> func is a pointer to a function which takes
                                no parameters and returns a pointer to an
                                array of 10 pointers to characters.

    char ** const * volatile x ---> x is a volatile pointer to a constant
                                    pointer which points to a pointer to
                                    a character.

    struct IMAGE *(*(*(*fp)[5]))(const char *, int) ---> fp is a pointer to
                                                         to an array of 5 pointers
                                                         which points to a
                                                         function which takes
                                                         two arguments and returns
                                                         a pointer to struct IMAGE.

*/
