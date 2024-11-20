/*
 * Author  : Saud Zahir
 * Date    : November 20, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: When Constructors and Destructors Are Called
 */

#include <iostream>
#include <cstdlib> // For abort()

using namespace std;

class Global {
    private:
        unsigned int ID;
    public:
        /**
         * Constructor
         */
        Global(unsigned int id): ID(id) {
            cout << "Initializing " << __func__ << " object " << ID << " ..." << endl;
        }

        /**
         * Destructor
         */
        ~Global() {
            cout << "Deleting " << __func__ << " object " << ID << " ..." << endl;
        }
};

class Local {
    private:
        unsigned int ID;
    public:
        /**
         * Constructor
         */
        Local(unsigned int id): ID(id) {
            cout << "Initializing " << __func__ << " object " << ID << " ..." << endl;
        }

        /**
         * Destructor
         */
        ~Local() {
            cout << "Deleting " << __func__ << " object " << ID << " ..." << endl;
        }
};

Global global(1);

void createObject(unsigned int ID) {
    cout << "Initializing " << __func__ << " function ..." << endl;
    Local local(ID);
    cout << "Exiting " << __func__ << " function ..." << endl;
}

void createStaticObject(unsigned int ID) {
    cout << "Initializing " << __func__ << " function ..." << endl;
    static Local local(ID);
    cout << "Exiting " << __func__ << " function ..." << endl;
}

int main() {
    cout << "Initializing " << __func__ << " function ..." << endl;
    Local local(2);
    createObject(3);
    createStaticObject(4);
    //exit(0); // Skips the destructor of local object
    // abort(); // Abruptly terminate program
    cout << "Exiting " << __func__ << " function ..." << endl;
}

/*
NOTE:
    When Constructors and Destructors are called?

    Constructors and destructors are called implicitly by the compiler.
    The order in which these function calls occur depends on the order
    in which execution enters and leaves the scopes where the objects
    are instantiated. Generally, destructor calls are made in the reverse
    order of the corresponding constructor calls, but the storage classes
    of objects can alter the order in which destructors are called.

    1. Constructors and Destructors for Objects in Global Scope

        Constructors are called for objects defined in global scope (also called
        global namespace scope) before any other function (including main) in that
        program begins execution (although the order of execution of global object
        constructors between files is not guaranteed). The corresponding destructors
        are called when main terminates. Function "exit" forces a program to terminate
        immediately and does not execute the destructors of local objects. The exit
        function often is used to terminate a program when a fatal unrecoverable error
        occurs. Function "abort" performs similarly to function exit but forces the program
        to terminate immediately, without allowing the destructors of any objects to be
        called. Function abort is usually used to indicate an abnormal termination of the
        program.

    2. Constructors and Destructors for Local Objects

        The constructor for an local object is called when execution reaches the point
        where that object is defined—the corresponding destructor is called when execution
        leaves the object’s scope (i.e., the block in which that object is defined has
        finished executing). Constructors and destructors for local objects are called each
        time execution enters and leaves the scope of the object. Destructors are not called
        for local objects if the program terminates with a call to function exit or function
        abort.

    3. Constructors and Destructors for static Local Objects

        The constructor for a static local object is called only once, when execution
        first reaches the point where the object is defined—the corresponding destructor
        is called when main terminates or the program calls function exit. Global and static
        objects are destroyed in the reverse order of their creation. Destructors are not
        called for static objects if the program terminates with a call to function abort.
*/
