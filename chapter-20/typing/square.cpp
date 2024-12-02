/*
 * Author  : Saud Zahir
 * Date    : December 01, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Type Fields and switch Statements
 */

#include <iostream>

#include "square.h"

/**
 * Constructor
 */
Square::Square(): Shape(ShapeType::SQUARE) {}

/**
 * Destructor
 */
Square::~Square() {
    std::cout << "Deleting Square ..." << std::endl;
}
