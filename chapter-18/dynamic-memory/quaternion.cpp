/*
 * Author  : Saud Zahir
 * Date    : November 25, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Dynamic Memory Management
 */

#include <iostream>
#include "quaternion.h"

/**
 * Constructor
 */
Quaternion::Quaternion(int x, int y, int z, int w) {
    setX(x);
    setY(y);
    setZ(z);
    setW(w);
}

/**
 * Destructor
 */
Quaternion::~Quaternion() {}

/**
 * Public Member Functions
 */
// Mutators
void Quaternion::setX(int x) {
    this->x = x;
}

void Quaternion::setY(int y) {
    this->y = y;
}

void Quaternion::setZ(int z) {
    this->z = z;
}

void Quaternion::setW(int w) {
    this->w = w;
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

// Unary Operator Overloading
Quaternion& Quaternion::operator++() {
    ++this->x;
    ++this->y;
    ++this->z;
    ++this->w;

    return *this;
}

Quaternion& Quaternion::operator--() {
    --this->x;
    --this->y;
    --this->z;
    --this->w;

    return *this;
}

Quaternion Quaternion::operator++(int) {
    Quaternion temp = *this;
    ++this->x;
    ++this->y;
    ++this->z;
    ++this->w;

    return temp;
}

Quaternion Quaternion::operator--(int) {
    Quaternion temp = *this;
    --this->x;
    --this->y;
    --this->z;
    --this->w;

    return temp;
}

/**
 * Friend Function
 */
// Binary Operator Overloading
Quaternion operator+(const Quaternion& q1, const Quaternion& q2) {
    Quaternion q(q1.x + q2.x, q1.y + q2.y, q1.z + q2.z, q1.w + q2.w);

    return q;
}

Quaternion operator*(const Quaternion& q1, const Quaternion& q2) {
    int x = (q1.x * q2.x) - (q1.y * q2.y + q1.z * q2.z + q1.w * q2.w);
    int y = (q1.x * q2.y) + (q1.y * q2.x) + (q1.z * q2.w) - (q1.w * q2.z);
    int z = (q1.x * q2.z) - (q1.y * q2.w) + (q1.z * q2.x) + (q1.w * q2.y);
    int w = (q1.x * q2.w) + (q1.y * q2.z) - (q1.z * q2.y) + (q1.w * q2.x);

    Quaternion q(x, y, z, w);

    return q;
}
