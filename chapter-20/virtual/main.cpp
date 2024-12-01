/*
 * Author  : Saud Zahir
 * Date    : December 01, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Virtual Functions and Virtual Destructors
 */

#include <iostream>

#include "shape.h"
#include "circle.h"
#include "square.h"

int main() {
    Shape* shapes[] = {
        new Circle(),
        new Square()
    };

    for (auto shape : shapes) {
        shape->draw();
    }

    for (auto shape : shapes) {
        delete shape;
    }
}

/*
NOTE:
    Once a function is declared virtual, it remains virtual all the way down the
    inheritance hierarchy from that point, even if that function is not explicitly
    declared virtual when a derived class overrides it.

    If a program invokes a virtual function through a base-class pointer to a
    derived-class object (e.g., shapePtr->draw()) or a base-class reference to a
    derived-class object (e.g., shapeRef.draw()), the program will choose the
    correct derived-class draw function dynamically (i.e., at execution time) based
    on the object type—not the pointer or reference type. Choosing the appropriate
    function to call at execution time (rather than at compile time) is known as
    "dynamic binding" or "late binding".

    When a virtual function is called by referencing a specific object by name and
    using the dot member-selection operator (e.g., squareObject.draw()), the function
    invocation is resolved at compile time (this is called "static binding") and the
    virtual function that’s called is the one defined for (or inherited by) the class
    of that particular object—this is not polymorphic behavior. Thus, dynamic binding
    with virtual functions occurs only off pointers (and, references).

    virtual Destructors

        A problem can occur when using polymorphism to process dynamically allocated objects
        of a class hierarchy. So far you’ve seen destructors that are not declared with keyword
        virtual. If a derived-class object with a non-virtual destructor is destroyed by applying
        the delete operator to a base-class pointer to the object, the C++ standard specifies that
        the behavior is undefined.

        The simple solution to this problem is to create a public virtual destructor in the
        base class. If a base class destructor is declared virtual, the destructors of any derived
        classes are also virtual and they override the base class destructor. Now, if an object
        in the hierarchy is destroyed explicitly by applying the delete operator to a base-class
        pointer, the destructor for the appropriate class is called based on the object to which
        the base-class pointer points. Remember, when a derived-class object is destroyed, the
        base-class part of the derived-class object is also destroyed, so it’s important for
        the destructors of both the derived and base classes to execute. The base-class destructor
        automatically executes after the derived-class destructor.
*/
