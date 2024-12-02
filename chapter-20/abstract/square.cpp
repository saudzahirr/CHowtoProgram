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
#include "square.h"

/**
 * Constructor
 */
Square::Square(double length): TwoDimension(), length(length) {}

/**
 * Copy Constructor
 */
Square::Square(Square& Square) {
    this->length = Square.getLength();
}

/**
 * Destructor
 */
Square::~Square() {
    std::cout << "Deleting a Square object ..." << std::endl;
}

/**
 * Public Member Functions
 */
double Square::getLength() const {
    return this->length;
}

void Square::setLength(double length) {
    this->length = length;
}

void Square::draw() const {
    std::cout << "Drawing a Square object ..." << std::endl;
}

double Square::getPerimeter() const {
    return this->perimeter;
}

/**
 * Private Member Functions
 */
void Square::computeArea() {
    this->area = this->square(this->length);
}

void Square::computePerimeter() {
    this->perimeter = 4 * this->length;
}
