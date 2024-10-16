/*
 * Author  : Saud Zahir
 * Date    : October 16, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: #include Preprocessor Directive
*/

#include <stdio.h>
#include "employee.h"


int main(void) {
    Employee employee = {"Bob", 25, MALE, 2500};
    Employee *ePtr = &employee;

    puts("Employee Data");
    printf("Name: %s\n", employee.name);
    printf("Age: %d\n", employee.age);
    printf("Gender: %c\n", employee.gender);
    printf("Salary: $%.2f\n", employee.salary);

    updateSalary(ePtr, 3000);
    printf("Updated Salary: $%.2f\n", employee.salary);

    return 0;
}

void updateSalary(Employee *ePtr, double salary) {
    ePtr->salary = salary;
}

/*
NOTE:
    The #include preprocessor directive causes a copy of a
    specified file to be included in place of the directive.
    The two forms of the #include directive are:

            #include <stdio.h>
            #include "employee.h"

    The difference between these is the location at which the
    preprocessor begins searches for the file to be included.
    If the filename is enclosed in angle brackets (< and >)—used
    for standard library headers—the search is performed in an
    implementation-dependent manner, normally through predesignated
    compiler and system directories. If the filename is enclosed in
    quotes, the preprocessor starts searches in the same directory
    as the file being compiled for the file to be included.
    This method is normally used to include programmer-defined headers.
    If the compiler cannot find the file in the current directory, then it
    will search through the predesignated compiler and system directories.

    A header containing declarations common to the separate program files
    is often created and included in the file. Examples of such declarations
    are:
        1. structure and union declarations,
        2. typedefs,
        3. enumerations and
        4. function prototypes.
*/
