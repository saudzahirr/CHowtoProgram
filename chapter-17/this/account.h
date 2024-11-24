/*
 * Author  : Saud Zahir
 * Date    : November 24, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Using the this Pointer
 */

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
         * Destructor
         */
        ~Account();

        /**
         * Public Member Functions
         */
        void deposit(double);
        void withdraw(double);

        Account& setBalance(double);
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
