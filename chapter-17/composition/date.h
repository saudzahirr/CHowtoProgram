/*
 * Author  : Saud Zahir
 * Date    : November 22, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Composition: Objects as Members of Classes
 */

#ifndef DATE_H
#define DATE_H

class Date {
    public:
        /**
         * Constructor
         */
        Date(unsigned int, unsigned int, unsigned int);

        /**
         * Destructor
         */
        ~Date();

        /**
         * Public Member Functions
         */
        void setDate(unsigned int, unsigned int, unsigned int);
        void displayDate() const;

    private:
        unsigned int year;
        unsigned int month;
        unsigned int day;
};

#endif
