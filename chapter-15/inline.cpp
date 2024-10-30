/*
 * Author  : Saud Zahir
 * Date    : October 30, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Inline Functions
 */

#include <iostream>

using namespace std;

inline double cube(const double length) {
    return length * length * length;
}

int main(void) {
    double a;

    for (int i = 0; i < 8; i++) {
        cout << "x = ";
        cin >> a;
        cout << "x^3 = " << cube(a) << endl;
    }
}

/*
NOTE:
    Implementing a program as a set of functions is good from a software engineering stand-
    point, but function calls involve execution-time overhead. C++ provides inline functions
    to help reduce function call overhead—especially for small functions. Placing the qualifier
    inline before a function’s return type in the function definition “advises” the compiler to
    generate a copy of the function’s code in place (when appropriate) to avoid a function call.
    The trade-off is that multiple copies of the function code are inserted in the program (often
    making the program larger) rather than there being a single copy of the function to which
    control is passed each time the function is called. The compiler can ignore the inline qualifier
    and typically does so for all but the smallest functions.

    Definition of inline function cube. Definition of function appears before function is called,
    so a function prototype is not required. First line of function definition acts as the prototype.

    Here,
        using namespace std;

    which enables a program to use all the names in any standard C++ header file (such as <iostream>)
    that a program might include.

    The for statement’s condition evaluates to either 0 (false) or nonzero (true). This is consistent with C.
    C++ also provides type bool for representing boolean (true/false) values. The two possible values of a
    bool are the keywords true and false. When true and false are converted to integers, they become the
    values 1 and 0, respectively. When non-boolean values are converted to type bool, non-zero values become
    true, and zero or null pointer values become false.
*/
