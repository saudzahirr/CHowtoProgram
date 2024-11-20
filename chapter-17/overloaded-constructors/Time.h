/*
 * Author  : Saud Zahir
 * Date    : November 20, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Overloaded Constructors and Delegating Constructors
 */

// include guard, prevents multiple inclusions of header
#ifndef TIME_H
#define TIME_H

class Time {
    public:
        /**
         * Time constructor
         */
        // explicit Time(int = 0, int = 0, int = 0); // default constructor

        // Overloaded constructors with delegation:
        explicit Time(): Time(0, 0, 0) {}
        explicit Time(int hour): Time(hour, 0, 0) {}
        explicit Time(int hour, int minute): Time(hour, minute, 0) {}
        explicit Time(int hour, int minute, int second);

        /**
         * setTime mutator
         */
        void setTime(int, int, int);

        /**
         * Display member functions (methods)
         */
        void displayUniversal() const;
        void display() const;

    private:
        /**
         * Data Members
         */
        unsigned int hour;
        unsigned int minute;
        unsigned int second;
};

#endif
