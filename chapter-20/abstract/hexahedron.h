/*
 * Author  : Saud Zahir
 * Date    : December 02, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Abstract Classes and Pure virtual Functions
 */

#ifndef HEXAHEDRON_H
#define HEXAHEDRON_H

#include "3d.h"

class Hexahedron final: public ThreeDimension {
    public:
        /**
         * Constructor
         */
        Hexahedron(double = 0);

        /**
         * Copy Constructor
         */
        Hexahedron(Hexahedron&);

        /**
         * Destructor
         */
        ~Hexahedron() override;

        /**
         * Public Member Function
         */
        double getLength() const;
        void setLength(double);
        void create() const override;

    private:
        /**
         * Private Data Members
         */
        double length;

        /**
         * Private Member Function
         */
        void computeVolume() override;
        void computeSurfaceArea() override;
};

#endif
