/*
 * Author  : Saud Zahir
 * Date    : November 25, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Overloading Unary Operators
 */

#include "quaternion.h"

int main() {
    Quaternion q1(1, 0, 1, 1);
    Quaternion q2(1, 2, 0, 1);

    Quaternion q;
    q = q1 + q2;
    q.show();

    q = q1 * q2;
    q.show();

    (++q).show();
    (q++).show();
    q.show();
}

/*
NOTE:
    A unary operator for a class can be overloaded as a non-static
    member function with no arguments or as a non-member function
    with one argument that must be an object (or a reference to an
    object) of the class. Member functions that implement overloaded
    operators must be non-static so that they can access the non-static
    data in each object of the class.

    To overload the prefix and postfix increment operators, each overloaded
    operator function must have a distinct signature, so that the compiler
    will be able to determine which version of ++ is intended.

    The extra object that’s created by the postfix increment (or decrement)
    operator can result in a performance problem—especially when the operator
    is used in a loop. For this reason, you should prefer the overloaded prefix
    increment and decrement operators.
*/
