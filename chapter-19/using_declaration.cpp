/*
 * Author  : Saud Zahir
 * Date    : November 28, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Constructors and Destructors in Derived Classes
 */

#include <iostream>

using namespace std;

class Base {
    public:
        Base(int x) {cout << "Base(int): " << x << endl;}
        Base(int x, double y) {cout << "Base(int, double): " << x << ", " << y << endl;}
};

class Derived : public Base {
    using Base::Base; // inherit constructors
};

int main() {
    Derived obj1(7);         // calls Base(int)
    Derived obj2(5, 3.14);   // calls Base(int, double)
    return 0;
}

/*
NOTE:
    C++11: Inheriting Base Class Constructors

    Sometimes a derived class’s constructors simply mimic the base class’s constructors.
    A frequently requested convenience feature for C++11 was the ability to inherit a base
    class’s constructors. You can now do this by explicitly including a using declaration of
    the form

            using Base::Base;

    anywhere in the derived-class definition. In the preceding declaration, Base is the
    base class’s name. With a few exceptions (listed below), for each constructor in the base
    class, the compiler generates a derived-class constructor that calls the corresponding
    base-class constructor. The generated constructors perform only default initialization for
    the derived class’s additional data members. When you inherit constructors:

        1. By default, each inherited constructor has the same access level (public, protected
           or private) as its corresponding base-class constructor.

        2. The default, copy and move constructors are not inherited.

        3. If a constructor is deleted in the base class by placing = delete in its prototype,
           the corresponding constructor in the derived class is also deleted.

        4. If the derived class does not explicitly define constructors, the compiler generates
           a default constructor in the derived class—even if it inherits other constructors
           from its base class.

        5. If a constructor that you explicitly define in a derived class has the same parameter
           list as a base-class constructor, then the base-class constructor is not inherited.

        6. A base-class constructor’s default arguments are not inherited. Instead, the compiler
           generates overloaded constructors in the derived class. For example, if the base class
           declares the constructor:

                 Base(int = 0, double = 0.0);

           the compiler generates the following two derived-class constructors without default arguments

                 DerivedClass(int);
                 DerivedClass(int, double);

           These each call the BaseClass constructor that specifies the default arguments.
*/
