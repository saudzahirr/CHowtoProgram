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
#include "circle.h"

#define PI 3.141592654
/**
 * Constructor
 */
Circle::Circle(double radius): TwoDimension(), radius(radius) {}

/**
 * Copy Constructor
 */
Circle::Circle(Circle& Circle) {
    this->radius = Circle.getRadius();
}

/**
 * Destructor
 */
Circle::~Circle() {
    std::cout << "Deleting a Circle object ..." << std::endl;
}

/**
 * Public Member Functions
 */
double Circle::getRadius() const {
    return this->radius;
}

void Circle::setRadius(double radius) {
    this->radius = radius;
}

void Circle::draw() const {
    std::cout << "Drawing a Circle object ..." << std::endl;
}

double Circle::getCircumference() const {
    return this->circumference;
}

/**
 * Private Member Functions
 */
void Circle::computeArea() {
    this->area = PI * this->square(this->radius);
}

void Circle::computeCircumference() {
    this->circumference = 2 * PI * this->radius;
}
