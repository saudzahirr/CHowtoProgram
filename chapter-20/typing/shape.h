/*
 * Author  : Saud Zahir
 * Date    : December 01, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Type Fields and switch Statements
 */

#ifndef SHAPE_H
#define SHAPE_H

enum class ShapeType {
    CIRCLE, SQUARE, UNKNOWN
};

class Shape {
    public:
        /**
         * Constructor
         */
        Shape(ShapeType);

        /**
         * Default Constructor
         */
        Shape() = default;

        /**
         * Destructor
         */
        ~Shape();

        /**
         * Public Member Function
         */
        void draw() const;

    private:
        /**
         * Private Data Members
         */
        ShapeType shapeType = ShapeType::UNKNOWN;
};

#endif
