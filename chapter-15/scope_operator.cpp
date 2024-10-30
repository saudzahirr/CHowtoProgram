/*
 * Author  : Saud Zahir
 * Date    : October 30, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Unary Scope Resolution Operator
 */

#include <iostream>

using namespace std;

int number = 3;

int main() {
    double number = 3.141592654;

    cout << "Local number: " << number << endl;
    cout << "Global number: " << ::number << endl;
}

/*
NOTE:
    It’s possible to declare local and global variables of the same name.
    This causes the global variable to be “hidden” by the local variable
    in the local scope. C++ provides the unary scope resolution operator (::)
    to access a global variable when a local variable of the same name is in scope.
    The unary scope resolution operator cannot be used to access a local variable
    of the same name in an outer block. A global variable can be accessed directly
    without the unary scope resolution operator if the name of the global variable
    is not the same as that of a local variable in scope. Using the unary scope
    resolution operator (::) with a given variable name is optional when the only
    variable with that name is a global variable.
*/
