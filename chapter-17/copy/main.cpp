/*
 * Author  : Saud Zahir
 * Date    : November 20, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Default Memberwise Assignment
 */

#include "quaternion.h"

int main() {
    Quaternion q; // creates a unit quaternion
    Quaternion* qPtr = &q;
    q.show();
    qPtr->setX(2);
    qPtr->show();

    Quaternion q2(0);
    q2.show();

    q2 = q; // default memberwise assignment
    q2.show();
}

/*
NOTE:
    The assignment operator (=) can be used to assign an object to another
    object of the same class. By default, such assignment is performed by
    memberwise assignment (also called copy assignment)—each data member of
    the object on the right of the assignment operator is assigned individually
    to the same data member in the object on the left of the assignment operator.
    [Caution: Memberwise assignment can cause serious problems when used with a
    class whose data members contain pointers to dynamically allocated memory]

    Objects may be passed as function arguments and may be returned from functions.
    Such passing and returning is performed using pass-by-value by default—a copy of
    the object is passed or returned. In such cases, C++ creates a new object and uses
    a copy constructor to copy the original object’s values into the new object. For
    each class, the compiler provides a default copy constructor that copies each member
    of the original object into the corresponding member of the new object. Like memberwise
    assignment, copy constructors can cause serious problems when used with a class whose
    data members contain pointers to dynamically allocated memory.
*/
