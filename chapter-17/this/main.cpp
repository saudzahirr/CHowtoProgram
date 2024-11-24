/*
 * Author  : Saud Zahir
 * Date    : November 24, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Using the this Pointer
 */

#include "account.h"

int main() {
    Account account("Bob", 127.0);

    account.setBalance(0.0).setBalance(4096.01).deposit(1024.02);
    account.display();
    account.deposit(256.03);
    account.display();
    account.withdraw(4096.01);
    account.display();
}

/*
NOTE:
    An object’s member functions can manipulate the object’s data.
    There can be many objects of a class, so how do member functions
    know which object’s data members to manipulate? Every object has
    access to its own address through a pointer called "this" (a C++
    keyword). The this pointer is not part of the object itself—i.e.,
    the memory occupied by the this pointer is not reflected in the
    result of a sizeof operation on the object. Rather, the this pointer
    is passed (by the compiler) as an implicit argument to each of the
    object’s non-static member functions.

    A common explicit use of the this pointer is to avoid naming conflicts
    between class's data members and member function parameters (or other
    local variables). Another use of this pointer is to enable cascaded
    member function calls.

    The type of this pointer depends on the type of object, in a non-const
    member function, the this pointer has the type class-name * and in a
    const member function, the this pointer has the type const class-name *.

    On interesting use of this pointer is to prevent an object from being
    assigned to itself. Self assignment can cause serious errors when the object
    contains pointers to dynamically allocated storage.
*/
