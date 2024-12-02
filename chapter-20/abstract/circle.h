/*
 * Author  : Saud Zahir
 * Date    : December 02, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Abstract Classes and Pure virtual Functions
 */

#ifndef CIRCLE_H
#define CIRCLE_H

#include "2d.h"

class Circle final: public TwoDimension {
    public:
        /**
         * Constructor
         */
        Circle(double = 0);

        /**
         * Copy Constructor
         */
        Circle(Circle&);

        /**
         * Destructor
         */
        ~Circle() override;

        /**
         * Public Member Functions
         */
        double getRadius() const;
        void setRadius(double);
        double getCircumference() const override;
        void draw() const override;

    private:
        /**
         * Private Data Members
         */
        double radius;

        /**
         * Private Member Function
         */
        void computeArea() override;
        void computeCircumference() override;

        // Circle has circumference
        void computePerimeter() override {};
        double getPerimeter() const override {return 0.0;};
};

#endif
