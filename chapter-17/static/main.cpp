/*
 * Author  : Saud Zahir
 * Date    : November 24, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: static Class Members
 */

#include "employee.h"

int main() {
    std::cout << "Employee count: " << Employee::getCount() << std::endl;

    // Block
    {
        Employee employee1("Bob", 25, "Male", 512.0);
        std::cout << "------------------" << std::endl;
        std::cout << "ID: " << employee1.getID() << std::endl;
        std::cout << "Name: " << employee1.getName() << std::endl;
        std::cout << "Age: " << employee1.getAge() << std::endl;
        std::cout << "Gender: " << employee1.getGender() << std::endl;
        std::cout << "Salary: " << employee1.getSalary() << std::endl;

        std::cout << "------------------" << std::endl;
        std::cout << "Employee count: " << Employee::getCount() << std::endl;

        Employee employee2("Alice", 24, "Female", 1028.0);
        std::cout << "------------------" << std::endl;
        std::cout << "ID: " << employee2.getID() << std::endl;
        std::cout << "Name: " << employee2.getName() << std::endl;
        std::cout << "Age: " << employee2.getAge() << std::endl;
        std::cout << "Gender: " << employee2.getGender() << std::endl;
        std::cout << "Salary: " << employee2.getSalary() << std::endl;

        std::cout << "------------------" << std::endl;
        std::cout << "Employee count: " << Employee::getCount() << std::endl;

        Employee employee3("John", 26, "Male", 2046.0);
        std::cout << "------------------" << std::endl;
        std::cout << "ID: " << employee3.getID() << std::endl;
        std::cout << "Name: " << employee3.getName() << std::endl;
        std::cout << "Age: " << employee3.getAge() << std::endl;
        std::cout << "Gender: " << employee3.getGender() << std::endl;
        std::cout << "Salary: " << employee3.getSalary() << std::endl;

        std::cout << "------------------" << std::endl;
        std::cout << "Employee count: " << Employee::getCount() << std::endl;
    }

    std::cout << "------------------" << std::endl;
    std::cout << "Employee count: " << Employee::getCount() << std::endl;
}

/*
NOTE:
    There is an important exception to the rule that each object of a class
    has its own copy of all the data members of the class. In certain cases,
    only one copy of a variable should be shared by all objects of a class.
    A "static data member" is used for these and other reasons. Such a variable
    represents “class-wide” information, i.e., data that is shared by all
    instances and is not specific to any one object of the class.

    Use static data members to save storage when a single copy of the data
    for all objects of a class will suffice.


    Scope and Initialization of static Data Members

        A class’s static data members have class scope. A static data member must be
        initialized exactly once. Fundamental-type static data members are initialized
        by default to 0. Prior to C++11, a static const data member of int or enum type
        could be initialized in its declaration in the class definition and all other
        static data members had to be defined and intialized at global namespace scope
        (i.e., outside the body of the class definition). Again, C++11’s in-class initializers
        also allow you to initialize these variables where they’re declared in the class
        definition. If a static data member is an object of a class that provides a default
        constructor, the static data member need not be initialized because its default
        constructor will be called.


    Accessing static Data Members

        A class’s private and protected static members are normally accessed through the
        class’s public member functions or friends. A class’s static members exist even
        when no objects of that class exist. To access a public static class member when
        no objects of the class exist, simply prefix the class name and the scope resolution
        operator (::) to the name of the data member. For example, if our preceding variable
        count is public, it can be accessed with the expression Employee::count, even when
        there are no Employee objects. (Of course, using public data is discouraged.)

        To access a private or protected static class member when no objects of the class
        exist, provide a public static member function and call the function by prefixing its
        name with the class name and scope resolution operator. A static member function is a
        service of the class, not of a specific object of the class.

    A member function should be declared static if it does not access
    non-static data members or non-static member functions of the class.
    Unlike non-static member functions, a static member function does not
    have a this pointer, because static data members and static member
    functions exist independently of any objects of a class. The this pointer
    must refer to a specific object of the class, and when a static member
    function is called, there might not be any objects of its class in memory.


    Using the this pointer in a static member function is a compilation error.

    Declaring a static member function const is a compilation error. The const qualifier
    indicates that a function cannot modify the contents of the object on which it operates,
    but static member functions exist and operate independently of any objects of the class.
*/
