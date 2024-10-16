/*
 * Author  : Saud Zahir
 * Date    : October 16, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: typedef
*/

#include <stdio.h>

// Definition
struct employee {
    char name[40];
    unsigned int age;
    char gender;
    double salary;
    struct employee *ePtr; // Self-referential structure
};

typedef struct employee Employee;

int main(void) {
    // Initializing Structures
    Employee e = {"Bob", 25, 'M', 2500, NULL};
    Employee *ePtr = &e;
    e.ePtr = ePtr;

    puts("Employee Data");
    printf("Name: %s\n", e.name);
    printf("Age: %d\n", e.age);
    printf("Gender: %c\n", e.gender);

    ePtr->salary += 500;
    printf("Salary: %.2f\n", ePtr->salary);

    return 0;
}

/*
NOTE:
    The keyword typedef provides a mechanism for
    creating synonyms (or aliases) for previously
    defined data types.

    C programmers often use typedef to define a
    structure type, so a structure tag is not
    required. For example:

        typedef struct {
            char name[40];
            unsigned int age;
            char gender;
            double salary;
        } Employee;
    
    Creating a new name with typedef does not create
    a new type; typedef simply creates a new type name,
    which may be used as an alias for an existing type name.
    A meaningful name helps make the program self-documenting.
*/
