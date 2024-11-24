/*
 * Author  : Saud Zahir
 * Date    : November 08, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Separating Interface from Implementation
 */

#include "employee.h"

// Constructor
Employee::Employee(std::string nameOfEmployee, unsigned int ageOfEmployee,
                   std::string genderOfEmployee, double salaryOfEmployee):
                   name(nameOfEmployee), age(ageOfEmployee), gender(genderOfEmployee),
                   salary(salaryOfEmployee) {}

// Accessors
std::string Employee::getName() const {
    return name;
}

unsigned int Employee::getAge() const {
    return age;
}

std::string Employee::getGender() const {
    return gender;
}

double Employee::getSalary() const {
    return salary;
}

// Mutators
void Employee::setName(std::string nameOfEmployee) {
    name = nameOfEmployee;
}

void Employee::setAge(unsigned int ageOfEmployee) {
    age = ageOfEmployee;
}

void Employee::setGender(std::string genderOfEmployee) {
    gender = genderOfEmployee;
}

void Employee::setSalary(double salaryOfEmployee) {
    salary = salaryOfEmployee;
}

/*
NOTE:
    Each member-function name is preceded by the class name and ::, which is
    known as the scope resolution operator. This “ties” each member function to
    the class definition, which declares the class’s member functions and data
    members. Without “Employee::” preceding each function name, these functions
    would not be recognized by the compiler as member functions of class—the
    compiler would consider them “free” or “loose” functions, like main. These are
    also called global functions. Such functions cannot access class' private data
    or call the class’s member functions, without specifying an object. So, the
    compiler would not be able to compile these functions.
*/
