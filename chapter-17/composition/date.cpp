/*
 * Author  : Saud Zahir
 * Date    : November 22, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Composition: Objects as Members of Classes
 */

#include <iostream>
#include <iomanip>

#include "date.h"

using namespace std;

Date::Date(unsigned int yyyy, unsigned int mm, unsigned int dd): year(yyyy), month(mm), day(dd) {};

Date::~Date() {
    cout << "Deleting date object: ";
    displayDate();
}

void Date::setDate(unsigned int yyyy, unsigned int mm, unsigned int dd) {
    year = yyyy;
    month = mm;
    day = dd;
}

void Date::displayDate() const {
    cout << setfill('0') << setw(4) << year << "-" << setw(2)
         << month << "-" << setw(2) << day << endl;
}
