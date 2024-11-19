/*
 * Author  : Saud Zahir
 * Date    : November 19, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Throwing Exceptions
 */

#include <iostream>
#include <stdexcept>

#include "Time.h"

using namespace std;

int main() {
    Time time;
    time.setTime(12, 12, 12);
    time.displayUniversal();
    time.display();

    try {
        time.setTime(40, 12, 12);
    }
    catch (invalid_argument &e) {
        cout << "Exception: " << e.what() << endl;
    }
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

    Often, classes do not have to be created “from scratch.” Rather, they can include
    objects of other classes as members or they may be derived from other classes that
    provide attributes and behaviors the new classes can use. Such software reuse can
    greatly enhance productivity and simplify code maintenance. Including class objects
    as members of other classes is called "composition" (or "aggregation"). Deriving new
    classes from existing classes is called "inheritance".

    People new to object-oriented programming often suppose that objects must be quite
    large because they contain data members and member functions. Logically, this is
    true—you may think of objects as containing data and functions (and our discussion
    has certainly encouraged this view); physically, however, this is not true.

    Objects contain only data, so objects are much smaller than if they also contained
    member functions. The compiler creates one copy (only) of the member functions
    separate from all objects of the class. All objects of the class share this one copy.
*/
