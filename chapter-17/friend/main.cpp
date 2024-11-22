/*
 * Author  : Saud Zahir
 * Date    : November 22, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: friend Functions and friend Classes
 */

#include "quaternion.h"

int main() {
    Quaternion q1(1, 0, 1, 1);
    Quaternion q2(1, 2, 0, 1);

    Quaternion q;
    // Friend function
    q = add(q1, q2);
    q.show();

    // Friend class
    QuaternionOperations qOps;
    qOps.mul(q1, q2).show();
    qOps.sub(q1, q2).show();
}

/*
NOTE:
    A friend function of a class is a non-member function that has the right to
    access the public and non-public class members. Standalone functions, entire
    classes or member functions of other classes may be declared to be friends of
    another class.

    To declare a function as a friend of a class, precede the function prototype
    in the class definition with keyword "friend".

    Friendship is granted, not taken—for class B to be a friend of class A, class A
    must explicitly declare that class B is its friend. Friendship is not symmetric—if
    class A is a friend of class B, you cannot infer that class B is a friend of class A.
    Friendship is not transitive—if class A is a friend of class B and class B is a friend
    of class C, you cannot infer that class A is a friend of class C.

    It’s possible to specify overloaded functions as friends of a class. Each function
    intended to be a friend must be explicitly declared in the class definition as a friend
    of the class.
*/
