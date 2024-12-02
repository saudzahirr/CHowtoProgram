/*
 * Author  : Saud Zahir
 * Date    : December 01, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Type Fields and switch Statements
 */

#include <iostream>

#include "shape.h"

/**
 * Constructor
 */
Shape::Shape(ShapeType type): shapeType(type) {}

/**
 * Destructor
 */
Shape::~Shape() {
    std::cout << "Deleting shape ..." << std::endl;
}

/**
 * Public Member Function
 */
void Shape::draw() const {
    switch (this->shapeType) {
        case ShapeType::CIRCLE:
            std::cout << "Drawing circle ..." << std::endl;
            break;

        case ShapeType::SQUARE:
            std::cout << "Drawing square ..." << std::endl;
            break;

        default:
            std::cout << "Unknown shape" << std::endl;
            break;
    }
}
