/*
 * Author  : Saud Zahir
 * Date    : December 02, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Runtime Type Information with Downcasting, dynamic_cast, typeid and type_info
 */

// External Includes
#include <iostream>

// Internal Includes
#include "sphere.h"

#define PI 3.141592654

/**
 * Constructor
 */
Sphere::Sphere(double radius): ThreeDimension(), radius(radius) {
    this->computeSurfaceArea();
    this->computeVolume();
}

/**
 * Copy Constructor
 */
Sphere::Sphere(Sphere& sphere) {
    this->radius = sphere.getRadius();
}

/**
 * Destructor
 */
Sphere::~Sphere() {
    std::cout << "Deleting a sphere object ..." << std::endl;
}

/**
 * Public Member Functions
 */
double Sphere::getRadius() const {
    return this->radius;
}

void Sphere::setRadius(double radius) {
    this->radius = radius;
}

void Sphere::create() const {
    std::cout << "Creating a sphere object ..." << std::endl;
}

/**
 * Private Member Functions
 */
void Sphere::computeVolume() {
    this->volume = (4/3) * PI * this->cube(this->radius);
}

void Sphere::computeSurfaceArea() {
    this->surfaceArea = 4 * PI * this->square(this->radius);
}
