/*
 * Author  : Saud Zahir
 * Date    : November 19, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Throwing Exceptions
 */

#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "Time.h"

using namespace std;

/**
 * Constructor
 */
Time::Time(): hour(0), minute(0), second(0) {};

/**
 * Member Functions
 */
void Time::setTime(int h, int m, int s) {
    if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)) {
        hour = h;
        minute = m;
        second = s;
    }
    else {
        // For values outside ranges, throws an exception
        throw invalid_argument("hour, minute and/or second was out of range");
    }
}

// Time in universal-time format (HH:MM:SS)
void Time::displayUniversal() const {
    cout << setfill('0') << setw(2) << hour << ":" << setw(2)
         << minute << ":" << setw(2) << second << endl;
}

// Time in standard-time format (HH:MM:SS AM or PM)
void Time::display() const {
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
         << setfill('0') << setw(2) << minute << ":" << setw(2)
         << second << (hour < 12 ? " AM" : " PM") << endl;
}
