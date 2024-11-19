/*
 * Author  : Saud Zahir
 * Date    : November 10, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Separating Interface from Implementation
 */

#include "employee.h"

int main() {
    Employee employee("Bob", 25, "Male", 3141.5);

    std::cout << "Name: " << employee.getName() << std::endl;
    std::cout << "Age: " << employee.getAge() << std::endl;
    std::cout << "Gender: " << employee.getGender() << std::endl;
    std::cout << "Salary: " << employee.getSalary() << std::endl;
}
