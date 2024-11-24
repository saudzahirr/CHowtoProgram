/*
 * Author  : Saud Zahir
 * Date    : November 24, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Overloading Binary Operators
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
}

/*
NOTE:
    A binary operator can be overloaded as a non-static member function with
    one parameter or as a non-member function with two parameters (one of those
    parameters must be either a class object or a reference to a class object).
    A non-member operator function is often declared as friend of a class for
    performance reasons.
*/
