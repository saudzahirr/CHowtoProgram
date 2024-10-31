/*
 * Author  : Saud Zahir
 * Date    : October 31, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Function Templates
 */

#include <iostream>

using namespace std;

template <typename T>
T add(T, T);

template <typename T>
T mul(T, T);

int main() {
    int a, b;
    double x, y;

    a = 2;
    b = 3;
    x = 3.5;
    y = 5.7;

    cout << a << " + " << b << " = " << add(a, b) << endl;
    cout << x << " + " << y << " = " << add(x, y) << endl;

    cout << a << " * " << b << " = " << mul(a, b) << endl;
    cout << x << " * " << y << " = " << mul(x, y) << endl;

}

template <class T>
T add(T a, T b) {
    return a + b;
}

template <typename T>
T mul(T a, T b) {
    return a * b;
}

/*
NOTE:
    Overloaded functions are typically used to perform similar operations that may
    involve different program logic on different data types. If the program logic
    and operations are identical for each data type, overloading may be performed
    more compactly and conveniently by using function templates. You write a single
    function template definition. Given the argument types provided in calls to this
    function, C++ automatically generates separate function template specializations
    to handle each type of call appropriately. Thus, defining a single function template
    essentially defines a whole family of overloaded functions.

    All function template definitions begin with the 'template' keyword followed by a
    template parameter list to the function template enclosed in angle brackets (< and >).
    Every parameter in the template parameter list (each is referred to as a formal type
    parameter) is preceded by keyword 'typename' or keyword 'class' (which are synonyms).
    The formal type parameters are place-holders for fundamental types or user-defined types.
    These placeholders are used to specify the types of the function’s parameters, to specify
    the function’s return type and to declare variables within the body of the function definition.
    A function template is defined like any other function, but uses the formal type parameters
    as placeholders for actual data types.

    When the compiler detects an 'add' invocation in the program source code, the type of the
    data passed to add is substituted for T throughout the template definition, and C++ creates
    a complete source-code function for addition of values of the specified data type. Then the
    newly created function is compiled. Thus, templates are a means of code generation for a range
    of similar functions.
*/
