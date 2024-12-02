/*
 * Author  : Saud Zahir
 * Date    : December 02, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Runtime Type Information with Downcasting, dynamic_cast, typeid and type_info
 */

#include <iostream>
#include <typeinfo>

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
        new Circle(2),
        new Square(2),
        new Sphere(2),
        new Hexahedron(2)
    };

    for (auto shape: shapes) {
        switch (shape->getDimension()) {
            case 2:
                {
                    shape->draw();
                    TwoDimension* twoDptr = dynamic_cast<TwoDimension*>(shape);
                    if (twoDptr != nullptr) {
                        cout << "Object: " << typeid(*twoDptr).name() << endl;
                        cout << "Area: " << twoDptr->getArea() << endl;
                    }
                    break;
                }

            case 3:
                {
                    shape->create();
                    ThreeDimension* threeDptr = dynamic_cast<ThreeDimension*>(shape);
                    if (threeDptr != nullptr) {
                        cout << "Object: " << typeid(*threeDptr).name() << endl;
                        cout << "Surface Area: " << threeDptr->getSurfaceArea() << endl;
                        cout << "Volume: " << threeDptr->getVolume() << endl;
                    }
                    break;
                }

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
    This program demonstrates the powerful capabilities of runtime type information (RTTI)
    and dynamic casting, which enable a program to determine an object’s type at execution
    time and act on that object accordingly [NOTE: Some compilers require that RTTI be enabled
    before it can be used in a program. The compilers we used for testing this C++ program—GNU C++,
    Visual C++ and Xcode LLVM—each enable RTTI by default].

    we use operator "dynamic_cast" to determine whether the current Shape's type is TwoDimensional or
    ThreeDimensional.

    If shape pointer points to an object that is a Base Shape object (Circle, Sphere, ...), then that
    object’s address is assigned to derived-class pointer; otherwise, nullptr is assigned. Note that
    dynamic_cast rather than static_cast is required here to perform type checking on the underlying
    object—a static_cast would simply cast the Shape* to a ThreeDimensional* regardless of the underlying
    object’s type. If the value returned by the dynamic_cast operator is not nullptr, the object is the
    correct type.

    Operator "typeid" returns a reference to an object of class "type_info" that contains the information
    about the type of its operand, including the name of that type. When invoked, type_info member function
    name returns a pointer-based string containing the typeid argument’s type name. The string returned by
    type_info member function name may vary by compiler.
*/
