/*
 * Author  : Saud Zahir
 * Date    : November 20, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Destructors
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
    A destructor is another type of special member function. The name
    of the destructor for a class is the tilde character (~) followed
    by the class name. This naming convention has intuitive appeal, because
    the tilde symnol is also used as the bitwise complement operator, and,
    in a sense, the destructor is the complement of the constructor. A
    destructor may not specify parameters or a return type.

    A class’s destructor is called implicitly when an object is destroyed.
    This occurs, for example, as an object is destroyed when program execution
    leaves the scope in which that object was instantiated. The destructor
    itself does not actually release the object’s memory—it performs "termination
    housekeeping" before the object’s memory is reclaimed, so the memory may be
    reused to hold new objects.

    Even though destructors have not been defined for the classes presented so
    far, every class has one destructor. If you do not explicitly define a destructor,
    the compiler defines an “empty” destructor.
*/
