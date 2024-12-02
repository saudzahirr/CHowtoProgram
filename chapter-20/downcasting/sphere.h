/*
 * Author  : Saud Zahir
 * Date    : December 02, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Runtime Type Information with Downcasting, dynamic_cast, typeid and type_info
 */

#ifndef SPHERE_H
#define SPHERE_H

#include "3d.h"

class Sphere final: public ThreeDimension {
    public:
        /**
         * Constructor
         */
        Sphere(double = 0);

        /**
         * Copy Constructor
         */
        Sphere(Sphere&);

        /**
         * Destructor
         */
        ~Sphere() override;

        /**
         * Public Member Function
         */
        double getRadius() const;
        void setRadius(double);
        void create() const override;

    private:
        /**
         * Private Data Members
         */
        double radius;

        /**
         * Private Member Function
         */
        void computeVolume() override;
        void computeSurfaceArea() override;
};

#endif
