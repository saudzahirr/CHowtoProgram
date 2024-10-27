/*
 * Author  : Saud Zahir
 * Date    : October 27, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * Topic: Designated Initializers and Compound Literals
*/

#include <stdio.h>

typedef struct {
    char *name;
    int age;
    float salary;
} User;

void display(int *array, size_t n);

int main() {
    User user = {
        .name = "Alice",
        .age = 23
    };

    int array[8] = {
        [0] = 1,
        [4] = 2
    };

    printf("Name: %s\nAge: %d\nSalary: %.2f\n",
            user.name, user.age, user.salary);

    display(array, 8);
    display((int [8]) {[1] = 1, [3] = 3}, 8); // compound literal

    return 0;
}

void display(int *array, size_t n) {
    printf("[");
    for (size_t i = 0; i < n; i++) {
        printf("%d%s", array[i], (i + 1 < n) ? ", " : "");
    }
    puts("]");
}


/*
NOTE:
    Designated initializers allow you to initialize the elements
    of an array, union or struct explicitly by subscript or name.

    In addition to using an initializer list to declare a variable,
    you can also use an initializer list to create an unnamed array,
    struct or union. This is known as a compound literal.
*/
