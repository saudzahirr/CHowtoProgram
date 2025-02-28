/*
 * Author  : Saud Zahir
 * Date    : November 28, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: public Inheritance
 */

#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"

class Square: public Rectangle {
    public:
        /**
         * Constructor
         */
        explicit Square(unsigned int);

        /**
         * Destructor
         */
        ~Square();

        Square() = delete; // delete default constructor

        /**
         * Public Member Functions
         */
        void setLength(unsigned int);
        unsigned int getLength() const;

        void showSquareInfo() const;

    private:
        /**
         * Private Data Members
         */
        unsigned int length;

        /**
         * Private Member Functions
         */
        void update();
};

#endif
