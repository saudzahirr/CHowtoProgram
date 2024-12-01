/*
 * Author  : Saud Zahir
 * Date    : December 01, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Virtual Functions and Virtual Destructors
 */

#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle: public Shape {
    public:
        /**
         * Constructor
         */
        Circle();

        /**
         * Destructor
         */
        ~Circle() override;

        /**
         * Public Member Function
         */
        void draw() const override final;
};

#endif

/*
NOTE:
    Apply C++11’s "override" keyword to every overridden function in a derived-class. This
    forces the compiler to check whether the base class has a member function with the same
    name and parameter list (i.e., the same signature). If not, the compiler generates an error.
*/
