/*
 * Author  : Saud Zahir
 * Date    : December 02, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Runtime Type Information with Downcasting, dynamic_cast, typeid and type_info
 */

#ifndef THREE_DIMENSION_H
#define THREE_DIMENSION_H

#include "shape.h"

class ThreeDimension: public Shape {
    public:
        /**
         * Constructor
         */
        ThreeDimension();

        /**
         * Copy Constructor
         */
        ThreeDimension(ThreeDimension&) = delete;

        /**
         * Virtual Destructor
         */
        virtual ~ThreeDimension();

        /**
         * Virtual Public Member Function
         */
        virtual double getSurfaceArea() const final;
        virtual double getVolume() const final;

    protected:
        /**
         * Protected Data Members
         */
        unsigned int face;
        double surfaceArea;
        double volume;

        /**
         * Protected Member Function
         */
        virtual void computeVolume() = 0;
        virtual void computeSurfaceArea() = 0;

        double cube(double a);

    private:
        // 3D object is not drawn
        void draw() const override {}
};

#endif
