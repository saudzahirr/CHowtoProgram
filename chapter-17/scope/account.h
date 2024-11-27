/*
 * Author  : Saud Zahir
 * Date    : November 19, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Class Scope and Accessing Class Members
 */

// include guard, prevents multiple inclusions of header
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
    public:
        /**
         * Constructor
         */
        Account(std::string, double);

        /**
         * Public Member Functions
         */
        void deposit(double);
        void withdraw(double);

        void setBalance(double);
        double getBalance() const;

        void display() const;

    private:
        /**
         * Private Data Members
         */
        std::string name;
        double balance;
        double transaction_fee;

        /**
         * Private Member Functions
         */
        void deductTranscationFee();
};

#endif

/*
NOTE:
    Access Functions

    Access functions can read or display data. Another common use for access
    functions is to test the truth or falsity of conditions—such functions are
    often called predicate functions. For instance, isEmpty and isFull function.


    Utility Functions

    A utility function (also called a helper function) is a private member
    function that supports the operation of a class’s other member functions.
    Utility functions are declared private because they’re not intended for
    use by the class’s clients. A common use of a utility function would be to
    place in a function some common code that would otherwise be duplicated in
    several other member functions.
*/
