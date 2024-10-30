/*
 * Author  : Saud Zahir
 * Date    : October 30, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Empty Parameter Lists and Default Arguments
 */

#include <iostream>

using namespace std;

static const double PI = 3.141592654;

double volumeOfCylinder(double radius = 1.0, double height = 1.0, double pi = PI);

int main(void) {
    cout << volumeOfCylinder(2.0) << endl;
    cout << volumeOfCylinder(2.0, 3.0) << endl;
}

double volumeOfCylinder(double radius, double height, double pi) {
    return pi * radius * radius * height;
}

/*
NOTE:
    C++, like C, allows you to define functions with no parameters.
    In C++, an empty parameter list is specified by writing either
    void or nothing at all in parentheses.

    The meaning of an empty function parameter list in C++ is dramatically
    different than in C. In C, it means all argument checking is disabled
    (i.e., the function call can pass any arguments it wants). In C++, it
    means that the function takes no arguments. Thus, C programs using this
    feature might cause compilation errors when compiled in C++.

    It’s not uncommon for a program to invoke a function repeatedly with the
    same argument value for a particular parameter. In such cases, you can
    specify that such a parameter has a 'default argument', i.e., a default value
    to be passed to that parameter. When a program omits an argument for a parameter
    with a default argument in a function call, the compiler rewrites the function
    call and inserts the default value of that argument to be passed as an argument
    in the function call.

    Default arguments must be the rightmost (trailing) arguments in a function’s
    parameter list. When calling a function with two or more default arguments,
    if an omitted argument is not the rightmost argument in the argument list,
    then all arguments to the right of that argument also must be omitted. Default
    arguments should be specified with the first occurrence of the function name—typically,
    in the function prototype. If the function prototype is omitted because the function
    definition also serves as the prototype, then the default arguments should be specified
    in the function header. Default values can be any expression, including constants, global
    variables or function calls. Default arguments also can be used with inline functions.
*/
