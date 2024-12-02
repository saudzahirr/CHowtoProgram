/*
 * Author  : Saud Zahir
 * Date    : December 01, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Type Fields and switch Statements
 */

#include <iostream>

#include "circle.h"

/**
 * Constructor
 */
Circle::Circle(): Shape(ShapeType::CIRCLE) {}

/**
 * Destructor
 */
Circle::~Circle() {
    std::cout << "Deleting Circle ..." << std::endl;
}
