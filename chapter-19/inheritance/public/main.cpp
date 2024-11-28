/*
 * Author  : Saud Zahir
 * Date    : November 28, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: public Inheritance
 */

#include <iostream>

#include "rectangle.h"
#include "square.h"

using namespace std;

int main() {
    Rectangle rectangle = {2, 3};
    Square square(5);

    rectangle.showRectangleInfo();
    square.showSquareInfo();

    square.setLength(2);
    cout << "Area: " << square.getArea() << endl;
}

/*
NOTE:
    The Square constructor introduces "base-class initializer syntax", which
    uses a member initializer to pass arguments to the base-class constructor.
    C++ requires that a derived-class constructor call its base-class constructor
    to initialize the base-class data members that are inherited into the derived class.

        Square::Square(unsigned int length): Rectangle(length, length), length(length) {}

    Using "protected" access offers an intermediate level of protection between public and
    private access. A base class’s protected members can be accessed within the body of that
    base class, by members and friends of that base class, and by members and friends of any
    classes derived from that base class.

    Inheriting protected data members slightly improves performance, because we can directly
    access the members without incurring the overhead of calls to set or get member functions.

    Using protected data members creates two serious problems. First, the derived-class object
    does not have to use a member function to set the value of the base class’s protected data
    member. An invalid value can easily be assigned to the protected data member, thus leaving
    the object in an inconsistent state. The second problem with using protected data members
    is that derived-class member functions are more likely to be written so that they depend on
    the base-class implementation. Derived classes should depend only on the base-class services
    (i.e., non-private member functions) and not on the base-class implementation. With protected
    data members in the base class, if the base-class implementation changes, we may need to modify
    all derived classes of that base class. Such software is said to be fragile or brittle, because
    a small change in the base class can “break” derived-class implementation. You should be able
    to change the base-class implementation while still providing the same services to derived classes.
    Of course, if the base-class services change, we must reimplement our derived classes—good
    object-oriented design attempts to prevent this.

    It’s appropriate to use the protected access specifier when a base class should provide a service
    (i.e., a non-private member function) only to its derived classes and friends.
*/
