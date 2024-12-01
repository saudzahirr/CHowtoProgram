/*
 * Author  : Saud Zahir
 * Date    : December 01, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Virtual Functions and Virtual Destructors
 */

#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square final: public Shape {
    public:
        /**
         * Constructor
         */
        Square();

        /**
         * Destructor
         */
        ~Square() override;

        /**
         * Public Member Function
         */
        void draw() const override final;
};

#endif

/*
NOTE:
    C++11: final Member Functions and Classes

        Prior to C++11, a derived class could override any of its base class’s
        virtual functions. In C++11, a base-class virtual function that’s declared
        "final" in its prototype, as in

            virtual someFunction(parameters) final;

        cannot be overridden in any derived class—this guarantees that the base
        class’s final member function definition will be used by all base-class
        objects and by all objects of the base class’s direct and indirect derived
        classes. Similarly, prior to C++11, any existing class could be used as a
        base class in a hierarchy. As of C++11, you can declare a class as final
        to prevent it from being used as a base class, as in
        
            class MyClass final // this class cannot be a base class
            {
                // class body
            };

        Attempting to override a final member function or inherit from a final base
        class results in a compilation error.
*/
