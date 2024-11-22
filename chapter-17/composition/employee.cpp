/*
 * Author  : Saud Zahir
 * Date    : November 22, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Composition: Objects as Members of Classes
 */

#include <iostream>

#include "employee.h"

using namespace std;

Employee::Employee(string nameOfEmployee, Date& dateOfBirth): name(nameOfEmployee), dob(dateOfBirth) {};

Employee::~Employee() {
    cout << "Deleting employee " << name << " ..." << endl;
}

void Employee::setName(string nameOfEmployee) {
    name = nameOfEmployee;
}

void Employee::setDateOfBirth(Date& dateOfBirth) {
    dob = dateOfBirth;
}

void Employee::displayEmployee() const {
    cout << "Employee Name: " << name << endl;
    cout << "Date of Birth: ";
    dob.displayDate();
}
