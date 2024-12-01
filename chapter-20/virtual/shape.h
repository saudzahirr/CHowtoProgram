/*
 * Author  : Saud Zahir
 * Date    : December 01, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Virtual Functions and Virtual Destructors
 */

#ifndef SHAPE_H
#define SHAPE_H

class Shape {
    public:
        /**
         * Constructor
         */
        Shape();

        /**
         * Default Constructor
         */
        Shape() = default;

        /**
         * Virtual Destructor
         */
        virtual ~Shape();

        /**
         * Virtual Public Member Function
         */
        virtual void draw() const; // virtual functions do not have to be const functions.

    private:
        /**
         * Private Data Members
         */
        unsigned int dim;
};

#endif

/*
NOTE:
    In C++11, you can tell the compiler to explicitly generate the default version
    of a default constructor, copy constructor, move constructor, copy assignment
    operator, move assignment operator or destructor by following the special member
    function’s prototype with = default. This is useful, for example, when you explicitly
    define a constructor for a class and still want the compiler to generate a default
    constructor as well—in that case, add the following declaration to your class definition:

        Shape() = default;
*/
