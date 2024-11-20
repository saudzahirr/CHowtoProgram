/*
 * Author  : Saud Zahir
 * Date    : November 20, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Destructors
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
void Account::deposit(double ammount) {
    balance += ammount;
}

void Account::withdraw(double ammount) {
    balance -= ammount;
    Account::deductTranscationFee();
}

void Account::setBalance(double _balance) {
    balance = _balance;
}

double Account::getBalance() const {
    return balance;
}

void Account::display() const {
    cout << balance << endl;
}
