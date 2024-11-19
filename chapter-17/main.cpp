/*
 * Author  : Saud Zahir
 * Date    : November 19, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Throwing Exceptions
 */

#include "Time.h"

int main() {
    Time time;
    time.setTime(12, 12, 12);
    time.displayUniversal();
    time.display();
    // time.setTime(40, 12, 12);
}

/*
NOTE:
    It’s important to note that you can define overloaded constructors for
    a class.

    Before C++11, only static const int data members could be initialized
    where they were declared in the class body. For this reason, data members
    typically should be initialized by the class’s constructor as there is no
    default initialization for fundamental-type data members. As of C++11, you
    can now use an in-class initializer to initialize any data member where it’s
    declared in the class definition.

    Defining Member Functions Outside the Class Definition; Class Scope

    Even though a member function declared in a class definition may be defined
    outside that class definition (and “tied” to the class via the scope resolution
    operator), that member function is still within that class’s scope—that is, its
    name is known to other class members referred to via an object of the class, a
    reference to an object of the class, a pointer to an object of the class or the
    scope resolution operator.

    If a member function is defined in a class’s body, the member function is implicitly
    declared inline. Remember that the compiler reserves the right not to inline any
    function.
*/
