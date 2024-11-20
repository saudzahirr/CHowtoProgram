/*
 * Author  : Saud Zahir
 * Date    : November 19, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Class Scope and Accessing Class Members
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
