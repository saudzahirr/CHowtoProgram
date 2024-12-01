/*
 * Author  : Saud Zahir
 * Date    : December 01, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Virtual Functions and Virtual Destructors
 */

#include <iostream>

#include "square.h"

/**
 * Constructor
 */
Square::Square() {}

/**
 * Destructor
 */
Square::~Square() {
    std::cout << "Deleting Square ..." << std::endl;
}

/**
 * Public Member Function
 */
void Square::draw() const {
    std::cout << "Drawing Square ..." << std::endl;
}
