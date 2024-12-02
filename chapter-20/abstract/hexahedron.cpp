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
#include "hexahedron.h"

#define PI 3.141592654
/**
 * Constructor
 */
Hexahedron::Hexahedron(double length): ThreeDimension(), length(length) {}

/**
 * Copy Constructor
 */
Hexahedron::Hexahedron(Hexahedron& Hexahedron) {
    this->length = Hexahedron.getLength();
}

/**
 * Destructor
 */
Hexahedron::~Hexahedron() {
    std::cout << "Deleting a Hexahedron object ..." << std::endl;
}

/**
 * Public Member Functions
 */
double Hexahedron::getLength() const {
    return this->length;
}

void Hexahedron::setLength(double length) {
    this->length = length;
}

void Hexahedron::create() const {
    std::cout << "Creating a Hexahedron object ..." << std::endl;
}

/**
 * Private Member Functions
 */
void Hexahedron::computeVolume() {
    this->volume = this->cube(this->length);
}

void Hexahedron::computeSurfaceArea() {
    this->volume = 6 * this->square(this->length);
}
