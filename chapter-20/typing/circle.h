/*
 * Author  : Saud Zahir
 * Date    : December 01, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Type Fields and switch Statements
 */

#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle final: public Shape {
    public:
        /**
         * Constructor
         */
        Circle();

        /**
         * Destructor
         */
        ~Circle();
};

#endif
