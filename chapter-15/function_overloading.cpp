/*
 * Author  : Saud Zahir
 * Date    : October 30, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Function Overloading
 */

#include <iostream>

using namespace std;

int square(int);
double square(double);

int main() {
    cout << square(7); // calls int version
    cout << endl;
    cout << square(7.5); // calls double version
    cout << endl;
}

int square(int x) {
    cout << "square of integer " << x << " is ";
    return x * x;
}

double square(double y) {
    cout << "square of double " << y << " is ";
    return y * y;
}

/*
NOTE:
    C++ enables several functions of the same name to be defined,
    as long as these functions have different sets of parameters
    (at least as far as the parameter types or the number of parameters
    or the order of the parameter types are concerned). This capability
    is called 'function overloading'. When an overloaded function is called,
    the C++ compiler selects the proper function by examining the number,
    types and order of the arguments in the call. Function overloading is
    commonly used to create several functions of the same name that perform
    similar tasks, but on data of different types.

    How the Compiler Differentiates Overloaded Functions
    Overloaded functions are distinguished by their signatures—a combination of a
    function’s name and its parameter types in order (but not its return type). The
    compiler encodes each function identifier with the number and types of its parameters
    (sometimes referred to as 'name mangling' or name decoration) to enable type-safe linkage.
    This ensures that the proper overloaded function is called and that the argument types
    conform to the parameter types.
*/
