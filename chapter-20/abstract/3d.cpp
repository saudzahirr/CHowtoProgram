/*
 * Author  : Saud Zahir
 * Date    : December 02, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Abstract Classes and Pure virtual Functions
 */

// External Includes
#include <iostream>

// Internal Includes
#include "3d.h"

/**
 * Constructor
 */
ThreeDimension::ThreeDimension(): Shape(3) {}

/**
 * Destructor
 */
ThreeDimension::~ThreeDimension() {
    std::cout << "Deleting 3D shape ..." << std::endl;
}

/**
 * Public Member Functions
 */
double ThreeDimension::getSurfaceArea() const {
    return this->surfaceArea;
}

double ThreeDimension::getVolume() const {
    return this->volume;
}

/**
 * Protected Member Functions
 */
double ThreeDimension::cube(double a) {
    return this->square(a) * a;
}
