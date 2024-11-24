/*
 * Author  : Saud Zahir
 * Date    : November 24, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Using the this Pointer
 */

#include <iostream>

#include "account.h"

using namespace std;

/**
 * Constructor
 */
Account::Account(std::string name, double balance): name(name), balance(balance) {
    transaction_fee = 0.5;
};

/**
 * Destructor
 */
Account::~Account() {
    cout << "Deleting account ..." << endl;
}

/**
 * Private Member Functions
 */
void Account::deductTranscationFee() {
    balance -= transaction_fee;
}

/**
 * Public Member Functions
 */
void Account::deposit(double balance) {
    /*
        Access balance data member through
        this pointer using the arrow operator.
    */
    this->balance += balance;
}

void Account::withdraw(double balance) {
    this->balance -= balance;
    Account::deductTranscationFee();
}

Account& Account::setBalance(double balance) {
    this->balance = balance;
    /*
        Returning dereferenced this pointer
        for cascaded function calls.
    */
    return (*this);
}

double Account::getBalance() const {
    return this->balance;
}

void Account::display() const {
    /*
        Access balance data member through this pointer
        using the dot operator off the dereferenced this
        pointer.
    */
    cout << (*this).balance << endl;
}
