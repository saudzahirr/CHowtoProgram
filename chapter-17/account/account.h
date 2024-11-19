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
        explicit Account(std::string, double);

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
