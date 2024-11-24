/*
 * Author  : Saud Zahir
 * Date    : November 24, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: static Class Members
 */

#include "employee.h"

unsigned int Employee::count;

// Constructor
Employee::Employee(std::string name, unsigned int age,
                   std::string gender, double salary):
                   name(name), age(age), gender(gender), salary(salary) {
                    ++count;
                    this->id = count;
                    std::cout << "Creating Employee ID: " << this->id << " ..." << std::endl;
}

/**
 * Destructor
 */
Employee::~Employee() {
    std::cout << "Deleting Employee ID: " << this->id << " ..." << std::endl;
    --count;
}

/**
 * Public Member Functions
 */
unsigned int Employee::getCount() {
    return count;
}

unsigned int Employee::getID() const {
    return this->id;
};

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

void Employee::setName(std::string name) {
    this->name = name;
}

void Employee::setAge(unsigned int age) {
    this->age = age;
}

void Employee::setGender(std::string gender) {
    this->gender = gender;
}

void Employee::setSalary(double salary) {
    this->salary = salary;
}
