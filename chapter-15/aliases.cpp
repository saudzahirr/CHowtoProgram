/*
 * Author  : Saud Zahir
 * Date    : October 30, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: References as Aliases within a Function
 */

#include <iostream>

using namespace std;

int main(void) {
    int x = 3;
    int &y = x;
    cout << "x = " << x << endl << "y = " << y << endl;
    y += 4;
    cout << "x = " << x << endl << "y = " << y << endl;
}

/*
NOTE:
    References can also be used as aliases for other variables within a function
    (although they typically are used with functions). Reference variables must be
    initialized in their declarations, and cannot be reassigned as aliases to other
    variables. Once a reference is declared as an alias for a variable, all operations
    “performed” on the alias (i.e., the reference) are actually performed on the original
    variable. The alias is simply another name for the original variable. Taking the address
    of a reference and comparing references do not cause syntax errors; rather, each operation
    occurs on the variable for which the reference is an alias. Unless it’s a reference to
    a constant, a reference argument must be an lvalue (e.g., a variable name), not a constant
    or expression that returns an rvalue (e.g., the result of a calculation).

    *Returning a Reference from a Function

    Returning references from functions can be dangerous. When returning a reference to a
    variable declared in the called function, the variable should be declared static within
    that function. Otherwise, the reference refers to an automatic variable that is discarded
    when the function terminates; such a variable is “undefined,” and the program’s behavior
    is unpredictable. References to undefined variables are called 'dangling references'.
*/
