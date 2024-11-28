/*
 * Author  : Saud Zahir
 * Date    : November 28, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: public Inheritance
 */

#include <iostream>
#include <string>

#include "square.h"

/**
 * Constructor
 */
Square::Square(unsigned int length): Rectangle(length, length), length(length) {}

/**
 * Destructor
 */
Square::~Square() {
    std::cout << "Deleting square object ..." << std::endl;
}

/**
 * Public Member Funtions
 */
void Square::setLength(unsigned int length) {
    this->length = length;
    this->update();
}

unsigned int Square::getLength() const {
    return this->length;
}

void Square::showSquareInfo() const {
    std::cout << std::string(16, '-') << std::endl;
    std::cout << "Square Info" << std::endl;
    std::cout << "Length: " << this->length << std::endl;
    std::cout << "Perimeter: " << this->perimeter << std::endl;
    std::cout << "Area: " << this->area << std::endl;
}

/**
 * Private Member Functions
 */
void Square::update() {
    this->setHeight(this->length);
    this->setWidth(this->length);
    this->computeArea();
    this->computePerimeter();
}
