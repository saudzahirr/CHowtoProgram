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
#include "2d.h"

/**
 * Constructor
 */
TwoDimension::TwoDimension(): Shape(2) {}

/**
 * Destructor
 */
TwoDimension::~TwoDimension() {
    std::cout << "Deleting 2D shape ..." << std::endl;
}

/**
 * Public Member Functions
 */
double TwoDimension::getArea() const {
    return this->area;
}
