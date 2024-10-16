/*
 * Author  : Saud Zahir
 * Date    : October 16, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Enumeration Constants
*/

#include <stdio.h>

typedef enum {
    MALE = 'M',   // ASCII value of 'M' is 77
    FEMALE = 'F'  // ASCII value of 'F' is 70
} Gender;

typedef struct {
    char name[40];
    unsigned int age;
    Gender gender;
    double salary;
} Employee;

int main(void) {
    Employee employee = {"Bob", 25, MALE, 2500};
    Employee *ePtr = &employee;

    puts("Employee Data");
    printf("Name: %s\n", employee.name);
    printf("Age: %d\n", employee.age);
    printf("Gender: %c\n", employee.gender);

    ePtr->salary += 500;
    printf("Salary: $%.2f\n", ePtr->salary);

    return 0;
}

/*
NOTE:
    An enumeration, introduced by the keyword enum, is a set
    of integer enumeration constants represented by identifiers.
    Values in an enum start with 0, unless specified otherwise,
    and are incremented by 1.

    The identifiers in any enumeration accessible in the same
    scope must be unique.

    Assigning a value to an enumeration constant after it’s been
    defined is a syntax error.

    Use only uppercase letters in enumeration constant names.
    This makes these constants stand out in a program and reminds
    you that enumeration constants are not variables.

*/
