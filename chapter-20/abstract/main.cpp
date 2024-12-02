/*
 * Author  : Saud Zahir
 * Date    : December 02, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Abstract Classes and Pure virtual Functions
 */

#include <iostream>

#include "shape.h"
#include "3d.h"
#include "2d.h"
#include "sphere.h"
#include "hexahedron.h"
#include "circle.h"
#include "square.h"

using namespace std;

int main() {
    Shape* shapes[] = {
        new Circle(),
        new Square(),
        new Sphere(),
        new Hexahedron()
    };

    for (auto shape: shapes) {
        Shape& shapeRef = (*shape);
        switch (shape->getDimension()) {
            case 2:
                cout << "<Pointer Draw>" << endl;
                shape->draw();
                cout << "<Reference Draw>" << endl;
                shapeRef.draw();
                break;

            case 3:
                cout << "<Pointer Create>" << endl;
                shape->create();
                cout << "<Reference Create>" << endl;
                shapeRef.create();
                break;

            default:
                cout << "Unknown shape ..." << endl;
                break;
        }
    }

    for (auto shape: shapes) {
        delete shape;
    }
}

/*
NOTE:
    When we think of a class as a type, we assume that programs will create objects of that type.
    However, there are cases in which it’s useful to define classes from which you never intend
    to instantiate any objects. Such classes are called "abstract classes". Because these classes
    normally are used as base classes in inheritance hierarchies, we refer to them as "abstract
    base classes". These classes cannot be used to instantiate objects, because, abstract classes
    are incomplete—derived classes must define the “missing pieces” before objects of these classes
    can be instantiated.

    An abstract class is a base class from which other classes can inherit. Classes that can
    be used to instantiate objects are called "concrete classes". Such classes define or inherit
    implementations for every member function they declare. We could have an abstract base
    class TwoDimensionalShape and derive such concrete classes as Square, Circle and Triangle.
    We could also have an abstract base class ThreeDimensionalShape and derive such concrete classes
    as Cube, Sphere and Cylinder. Abstract base classes are too generic to define real objects; we
    need to be more specific before we can think of instantiating objects. Concrete classes provide
    the specifics that make it possible to instantiate objects.

    An inheritance hierarchy does not need to contain any abstract classes, but many
    object-oriented systems have class hierarchies headed by abstract base classes. In some
    cases, abstract classes constitute the top few levels of the hierarchy.


    Pure Virtual Functions

        A class is made abstract by declaring one or more of its virtual functions to be “pure.” A
        pure virtual function is specified by placing “= 0” in its declaration, as in

            virtual void draw() const = 0; // pure virtual function

        The “= 0” is a "pure specifier". Pure virtual functions typically do not provide implementations,
        though they can. Each concrete derived class must override all base-class pure virtual functions
        with concrete implementations of those functions; otherwise, the derived class is also abstract.
        The difference between a virtual function and a pure virtual function is that a virtual function
        has an implementation and gives the derived class the option of overriding the function; by contrast,
        a pure virtual function does not have an implementation and requires the derived class to override
        the function for that derived class to be concrete; otherwise the derived class remains abstract.
        Pure virtual functions are used when it does not make sense for the base class to have an implementation
        of a function, but you want all concrete derived classes to implement the function.

    An abstract class defines a common public interface for the various classes in a class hierarchy.
    An abstract class contains one or more pure virtual functions that concrete derived classes must
    override. An abstract class has at least one pure virtual function. An abstract class also can have
    data members and concrete functions (including constructors and destructors), which are subject to
    the normal rules of inheritance by derived classes. Although we cannot instantiate objects of an
    abstract base class, we can use the abstract base class to declare pointers and references that can
    refer to objects of any concrete classes derived from the abstract class. Programs typically use such
    pointers and references to manipulate derived-class objects polymorphically.
*/
