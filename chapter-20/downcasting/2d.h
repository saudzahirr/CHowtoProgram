/*
 * Author  : Saud Zahir
 * Date    : December 02, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Runtime Type Information with Downcasting, dynamic_cast, typeid and type_info
 */

#ifndef TWO_DIMENSION_H
#define TWO_DIMENSION_H

#include "shape.h"

class TwoDimension: public Shape {
    public:
        /**
         * Constructor
         */
        TwoDimension();

        /**
         * Copy Constructor
         */
        TwoDimension(TwoDimension&) = delete;

        /**
         * Virtual Destructor
         */
        virtual ~TwoDimension();

        /**
         * Virtual Public Member Function
         */
        virtual double getArea() const final;
        virtual double getPerimeter() const = 0;
        virtual double getCircumference() const = 0;

    protected:
        /**
         * Protected Data Members
         */
        double area;
        double perimeter;
        double circumference;

        /**
         * Protected Member Function
         */
        virtual void computeArea() = 0;
        virtual void computePerimeter() = 0;
        virtual void computeCircumference() = 0;

    private:
        // 2D object is not created
        void create() const override {}
};

#endif
