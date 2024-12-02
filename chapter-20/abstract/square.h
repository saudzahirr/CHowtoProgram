/*
 * Author  : Saud Zahir
 * Date    : December 02, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Abstract Classes and Pure virtual Functions
 */

#ifndef SQUARE_H
#define SQUARE_H

#include "2d.h"

class Square final: public TwoDimension {
    public:
        /**
         * Constructor
         */
        Square(double = 0);

        /**
         * Copy Constructor
         */
        Square(Square&);

        /**
         * Destructor
         */
        ~Square() override;

        /**
         * Public Member Functions
         */
        double getLength() const;
        void setLength(double);
        double getPerimeter() const override;
        void draw() const override;

    private:
        /**
         * Private Data Members
         */
        double length;

        /**
         * Private Member Function
         */
        void computeArea() override;
        void computePerimeter() override;

        // Square has perimeter
        void computeCircumference() override {};
        double getCircumference() const override {return 0.0;};
};

#endif
