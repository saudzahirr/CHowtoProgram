/*
 * Author  : Saud Zahir
 * Date    : November 08, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Separating Interface from Implementation
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

class Employee {
    public:
        // function prototypes
        explicit Employee(std::string, unsigned int, std::string, double);

        std::string getName() const;
        unsigned int getAge() const;
        std::string getGender() const;
        double getSalary() const;

        void setName(std::string);
        void setAge(unsigned int);
        void setGender(std::string);
        void setSalary(double);

    private:
        std::string name;
        unsigned int age;
        std::string gender;
        double salary;
};

#endif

/*
NOTE:
    A single .cpp file, also known as a "source-code file",
    that contains a Employee class definition and a main
    function. When building an object-oriented C++ program,
    it’s customary to define reusable source code (such as
    a class) in a file that by convention has a .h filename
    extension—known as a "header". In industry, we often
    use a separate source-code file containing function main
    to test our classes (this is called a "driver program").

    While objects conceptually contain data members and member
    functions, C++ objects actually contain only data. The compiler
    creates only one copy of the class’s member functions and shares
    that copy among all the class’s objects. Each object, of course,
    needs its own data members, because their contents can vary
    among objects (such as two different BankAccount objects having
    two different balances). The member-function code, however, is
    not modifiable, so it can be shared among all objects of the
    class. Therefore, the size of an object depends on the amount
    of memory required to store the class’s data members.

    Hiding the class’s implementation details makes it easier to change
    the class’s implementation while minimizing, and hopefully eliminating,
    changes to client code.

    Separating interface from implementation is another fundamental principle
    of good software engineering.

    Interfaces define and standardize the ways in which things such as
    people and systems interact with one another. For example, a radio’s
    controls serve as an interface between the radio’s users and its
    internal components. The controls allow users to perform a limited
    set of operations (such as changing the station, adjusting the volume,
    and choosing between AM and FM stations).

    Similarly, the "interface of a class" describes what services a class’s
    clients can use and how to request those services, but not how the class
    carries out the services. A class’s public interface consists of the class’s
    public member functions (also known as the class’s "public services").
*/
