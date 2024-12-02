/*
 * Author  : Saud Zahir
 * Date    : December 02, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Runtime Type Information with Downcasting, dynamic_cast, typeid and type_info
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
