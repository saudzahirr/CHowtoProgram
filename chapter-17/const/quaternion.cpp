/*
 * Author  : Saud Zahir
 * Date    : November 20, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: const Objects and const Member Functions
 */

#include <iostream>
#include "quaternion.h"

/**
 * Constructor
 */
Quaternion::Quaternion(int a, int b, int c, int d) {
    setX(a);
    setY(b);
    setZ(c);
    setW(d);
}

/**
 * Destructor
 */
Quaternion::~Quaternion() {}

/**
 * Public Member Functions
 */
// Mutators
void Quaternion::setX(int a) {
    x = a;
}

void Quaternion::setY(int a) {
    y = a;
}

void Quaternion::setZ(int a) {
    z = a;
}

void Quaternion::setW(int a) {
    w = a;
}

// Accessors
int Quaternion::getX() const {
    return x;
}

int Quaternion::getY() const {
    return y;
}

int Quaternion::getZ() const {
    return z;
}

int Quaternion::getW() const {
    return w;
}

void Quaternion::show() const {
    std::cout << x << " + " << y << "i + "
              << z << "j + " << w << "k"
              << std::endl;
}
