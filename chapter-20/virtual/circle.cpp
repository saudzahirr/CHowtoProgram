/*
 * Author  : Saud Zahir
 * Date    : December 01, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Virtual Functions and Virtual Destructors
 */

#include <iostream>

#include "circle.h"

/**
 * Constructor
 */
Circle::Circle() {}

/**
 * Destructor
 */
Circle::~Circle() {
    std::cout << "Deleting Circle ..." << std::endl;
}

/**
 * Public Member Function
 */
void Circle::draw() const {
    std::cout << "Drawing Circle ..." << std::endl;
}
