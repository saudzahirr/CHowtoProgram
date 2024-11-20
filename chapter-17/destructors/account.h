/*
 * Author  : Saud Zahir
 * Date    : November 20, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Destructors
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
         * Destructor
         */
        ~Account();

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
