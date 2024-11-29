/*
 * Author  : Saud Zahir
 * Date    : November 29, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Relationships Among Objects in an Inheritance Hierarchy
 */

#include <iostream>

#include "rectangle.h"
#include "square.h"

using namespace std;

int main() {
    Rectangle rectangle = {2, 3};
    Square square(5);

    Rectangle* rPtr = nullptr;
    Square* sPtr = nullptr;

    rPtr = &rectangle;
    cout << "Rectangle Area: " << rPtr->getArea() << endl;

    sPtr = &square;
    cout << "Square Area: " << sPtr->getArea() << endl;
    cout << "Square Length: " << sPtr->getLength() << endl;

    // Invoking Base-Class Functions from Derived-Class Objects
    // base-clase pointer -> derived-class object
    rPtr = &square;
    cout << "Square Area: " << rPtr->getArea() << endl;
    // cout << "Square Length: " << rPtr->getLength() << endl; // ‘class Rectangle’ has no member named ‘getLength’

    // derived-class pointer -> base-class object
    // sPtr = &rectangle; // Invalid conversion
}

/*
NOTE:
    A key concept is to demonstrate that with public inheritance an
    object of a derived class can be treated as an object of its base
    class. This enables various interesting manipulations. For example,
    a program can create an array of base-class pointers that point to
    objects of many derived-class types. Despite the fact that the
    derived-class objects are of different types, the compiler allows
    this because each derived-class object is an object of its base class.
    However, we cannot treat a base-class object as an object of any of
    its derived classes.

    Downcasting

        The compiler will allow access to derived-class-only members from
        a base-class pointer that’s aimed at a derived-class object if we
        explicitly cast the base-class pointer to a derived-class pointer—this
        is known as "downcasting". As you know, it’s possible to aim a base-class
        pointer at a derived-class object. However, a base-class pointer can
        be used to invoke only the functions declared in the base class.
        Downcasting allows a derived-class-specific operation on a derived-class
        object pointed to by a base-class pointer. After a downcast, the
        program can invoke derived-class functions that are not in the base
        class. Downcasting is a potentially dangerous operation.


            Rectangle* rPtr = new Square(); // Upcasting

            Rectangle* rPtr = new Rectangle();
            sPtr = static_cast<Square*>(rPtr); // Downcasting
*/
