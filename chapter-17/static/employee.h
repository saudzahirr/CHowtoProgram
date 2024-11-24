/*
 * Author  : Saud Zahir
 * Date    : November 24, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: static Class Members
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

class Employee {
    public:
        /**
         * Constructor
         */
        explicit Employee(std::string, unsigned int, std::string, double);

        /**
         * Destructor
         */
        ~Employee();

        /**
         * Public Member Functions
         */
        static unsigned int getCount();
        std::string getName() const;
        unsigned int getAge() const;
        std::string getGender() const;
        double getSalary() const;
        unsigned int getID() const;

        void setName(std::string);
        void setAge(unsigned int);
        void setGender(std::string);
        void setSalary(double);

    private:
        static unsigned int count;
        unsigned int id;
        std::string name;
        unsigned int age;
        std::string gender;
        double salary;
};

#endif
