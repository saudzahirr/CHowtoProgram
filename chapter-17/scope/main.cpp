/*
 * Author  : Saud Zahir
 * Date    : November 19, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Class Scope and Accessing Class Members
 */

#include "account.h"

int main() {
    Account account("Bob", 543.21);
    Account& accountRef = account;
    Account* accountPtr = &account;

    account.display();
    accountRef.deposit(123.45);
    accountRef.display();
    accountPtr->withdraw(314);
    accountPtr->display();
}

/*
NOTE:
    A class’s data members and member functions belong to that class’s scope.
    Nonmember functions are defined at global namespace scope, by default.

    Within a class’s scope, class members are immediately accessible by all
    of that class’s member functions and can be referenced by name. Outside a
    class’s scope, public class members are referenced through one of the
    handles on an object—an object name, a reference to an object or a pointer
    to an object. The type of the object, reference or pointer specifies the
    interface (e.g., the member functions) accessible to the client.


    Class Scope and Block Scope

    Variables declared in a member function have block scope and are known only
    to that function. If a member function defines a variable with the same name
    as a variable with class scope, the class-scope variable is hidden in the
    function by the block-scope variable. Such a hidden variable can be accessed by
    preceding the variable name with the class name followed by the scope resolution
    operator (::). Hidden global variables can be accessed with the scope resolution
    operator, as in ::globalVariableName.


    Dot (.) and Arrow (->) Member Selection Operators

    The dot member selection operator (.) is preceded by an object’s name or with
    a reference to an object to access the object’s members. The arrow member
    selection operator (->) is preceded by a pointer to an object to access the
    object’s members.


    C++11: Using List Initializers to Call Constructors

    C++11 now provides a uniform initialization syntax called list initializers
    that can be used to initialize any variable.

    Account account{"Bob", 543.21};

    The form without the = is preferred.
*/
