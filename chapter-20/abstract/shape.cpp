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
#include "shape.h"

/**
 * Constructor
 */
Shape::Shape(unsigned int dimension): dim(dimension) {}

/**
 * Virtual Destructor
 */
Shape::~Shape() {
    std::cout << "Deleting shape ..." << std::endl;
}

/**
 * Virtual Public Member Function
 */
unsigned int Shape::getDimension() const {
    return this->dim;
}

/**
 * Protected Member Function
 */
double Shape::square(double a) {
    return a * a;
}