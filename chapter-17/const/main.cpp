/*
 * Author  : Saud Zahir
 * Date    : November 20, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: const Objects and const Member Functions
 */

#include "quaternion.h"

int main() {
    Quaternion q(1, 0, 1, 1);
    const Quaternion u; // unit quaternion

                // Object       Member Function

    // u.setX(0);  // const        non-const
    u.getX();   // const        const
    q.setX(2);  // non-const    non-const
    q.getX();   // non-const    const

    q.show();
    u.show();
}

/*
NOTE:
    C++ disallows member function calls for const objects unless
    the member functions themselves are also declared const. This
    is true even for get member functions that do not modify the
    object.

    A constructor must be allowed to modify an object so that the
    object can be initialized properly. A destructor must be able to
    perform its termination housekeeping chores before an object’s
    memory is reclaimed by the system. Attempting to declare a
    constructor or destructor const is a compilation error.
*/
