/*
 * Author  : Saud Zahir
 * Date    : November 22, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Composition: Objects as Members of Classes
 */

#include "employee.h"
#include "date.h"

int main() {
    Date dateOfBirth(2000, 1, 1);
    Employee employee("Bob", dateOfBirth);

    employee.displayEmployee();
    dateOfBirth.setDate(2000, 1, 2);
    dateOfBirth.displayDate();
    employee.displayEmployee();
}

/*
NOTE:
    A common form of software reusability is composition, in which
    a class has objects of other types as members. Such a capability
    is sometimes referred to as a has-a relationship—a class can have
    objects of other classes as members.
*/
