/*
 * Author  : Saud Zahir
 * Date    : December 01, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Type Fields and switch Statements
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
    One way to determine the type of an object is to use a switch statement
    to check the value of a field in the object. This allows us to distinguish
    among object types, then invoke an appropriate action for a particular object.
    For example, in a hierarchy of shapes in which each shape object has a shapeType
    attribute, a switch statement could check the object’s shapeType to determine
    which print function to call.

    Using switch logic exposes programs to a variety of potential problems. For example,
    you might forget to include a type test when one is warranted, or might forget to
    test all possible cases in a switch statement. When modifying a switch-based system
    by adding new types, you might forget to insert the new cases in all relevant switch
    statements. Every addition or deletion of a class requires the modification of every
    switch statement in the system; tracking these statements down can be time consuming
    and error prone.
*/
