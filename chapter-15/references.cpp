/*
 * Author  : Saud Zahir
 * Date    : October 30, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: References and Reference Parameters
 */

#include <iostream>
#include <cmath>

using namespace std;

double cubeValue(const double);
void cubeReference(double &);

int main(void) {
    double a = sqrt(2.0);

    cout << "a^3 = " << cubeValue(a) << endl;

    cubeReference(a);
    cout << "a^3 = " << a << endl;

    cubeReference(a);
    cout << "a^3 = " << a << endl;
}

double cubeValue(const double a) {
    return a * a * a;
}

void cubeReference(double &a) {
    a *= (a * a);
}

/*
NOTE:
    Two ways to pass arguments to functions in many programming languages are pass-by-value
    and pass-by-reference. When an argument is passed by value, a copy of the argument’s
    value is made and passed (on the function call stack) to the called function. Changes to
    the copy do not affect the original variable’s value in the caller. One disadvantage of
    pass-by-value is that, if a large data item is being passed, copying that data can take a
    considerable amount of execution time and memory space.

    Reference parameters—the first of two means that C++ provides for performing pass-by-reference.
    With pass-by-reference, the caller gives the called function the ability to access the caller’s
    data directly, and to modify that data if the called function chooses to do so. Pass-by-reference
    can weaken security; the called function can corrupt the caller’s data.

    A reference parameter is an alias for its corresponding argument in a function call. To indicate
    that a function parameter is passed by reference, simply follow the parameter’s type in the
    function prototype and function definition by an ampersand (&). For example, the following parameter
    declaration

        int &count

    when read from right to left is pronounced “count is a reference to an int.” In the function call,
    simply mention the variable by name to pass it by reference. Then, mentioning the variable by its
    parameter name in the body of the called function actually refers to the original variable in the
    calling function, and the original variable can be modified directly by the called function.

    Without checking the function prototypes or function definitions, it’s not possible to tell from the
    calls alone whether either function can modify its arguments. Because function prototypes are mandatory,
    however, the compiler has no trouble resolving the ambiguity. Recall that a function prototype tells the
    compiler the type of data returned by the function, the number of parameters the function expects to
    receive, the types of the parameters, and the order in which they’re expected. The compiler uses this
    information to validate function calls. In C, function prototypes are not required. Making them mandatory
    in C++ enables 'type-safe linkage', which ensures that the types of the arguments conform to the types
    of the parameters. Otherwise, the compiler reports an error. Locating such type errors at compile time
    helps prevent the runtime errors that can occur in C when arguments of incorrect data types are passed
    to functions.

    For passing large objects efficiently, use a constant reference parameter to simulate the appearance
    and security of pass-by-value and avoid the overhead of passing a copy of the large object. The
    called function will not be able to modify the object in the caller. For instance

        void cubeReference(const double &a) // cannot modify a, read only access

    Declaring parameters passed by value as const is often overlooked, even when the called function
    should not modify the passed argument. Although the const keyword only protects a copy of the
    original argument in this context, it serves as a valuable form of documentation, clarifying the
    function's intended use and reinforcing the idea that the original argument remains safe from
    modification.

    Many C++ programmers prefer
        1. Modifiable arguments are passed using pointers for clarity and performance.
        2. Small nonmodifiable arguments are passed by value.
        3. Large nonmodifiable arguments are passed using references to constants.
*/
