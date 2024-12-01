/*
 * Author  : Saud Zahir
 * Date    : December 01, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Virtual Functions and Virtual Destructors
 */

#include <iostream>

#include "shape.h"

/**
 * Virtual Destructor
 */
Shape::~Shape() {
    std::cout << "Deleting shape ..." << std::endl;
}

/**
 * Virtual Public Member Function
 */
void Shape::draw() const {
    std::cout << "Drawing shape ..." << std::endl;
}
