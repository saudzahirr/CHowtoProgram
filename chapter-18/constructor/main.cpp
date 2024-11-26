/*
 * Author  : Saud Zahir
 * Date    : November 26, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Default & Copy Constructor
 */

#include <iostream>
#include "quaternion.h"

using namespace std;

int main() {
    // Quaternion u; // No default constructor
    Quaternion u(1, 1, 1, 1);
    Quaternion q(u);
    q.show();
    cout << (q == u ? "true" : "false") << endl;

    q.setQ(-1, 1, -1, 1);
    q.show();
    cout << (q != u ? "true" : "false") << endl;

    cout << "Real part: " << q[0] << endl;
    q[2] += 2;
    ++q[3];
    cout << "Imaginary part: " << q[2] << "j" << endl;
    cout << "Imaginary part: " << q[3] << "k" << endl;
}

/*
NOTE:
    C++11: Deleting Unwanted Member Functions from Your Class

        Prior to C++11, you could prevent class objects from being copied
        or assigned by declaring as private the class’s copy constructor
        and overloaded assignment operator. As of C++11, you can simply
        delete these functions from your class. To do so in class Quaternion,
        replace the prototypes with:

            // delete default constructor
            Quaternion() = delete;

            // delete copy constructor
            Quaternion(const Quaternion &) = delete;

            // delete copy assignment
            const Quaternion &operator=( const Quaternion & ) = delete;

        Though you can delete any member function, it’s most commonly used with
        member functions that the compiler can auto-generate—the default constructor,
        copy constructor, assignment operator, and in C++ 11, the move constructor
        and move assignment operator.
*/
