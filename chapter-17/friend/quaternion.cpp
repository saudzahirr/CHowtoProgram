/*
 * Author  : Saud Zahir
 * Date    : November 22, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: friend Functions and friend Classes
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

// Friend Function
Quaternion add(const Quaternion& q1, const Quaternion& q2) {
    Quaternion q(q1.x + q2.x, q1.y + q2.y, q1.z + q2.z, q1.w + q2.w);

    return q;
}

// Friend Class Member Functions
Quaternion QuaternionOperations::neg(const Quaternion& q) {
    Quaternion _q(
        -q.x,
        -q.y,
        -q.z,
        -q.w
    );

    return _q;
}

Quaternion QuaternionOperations::sub(const Quaternion& q1, const Quaternion& q2) {
    Quaternion _q = neg(q2);
    return add(q1, _q);
}

Quaternion QuaternionOperations::mul(const Quaternion& q1, const Quaternion& q2) {
    int x = (q1.x * q2.x) - (q1.y * q2.y + q1.z * q2.z + q1.w * q2.w);
    int y = (q1.x * q2.y) + (q1.y * q2.x) + (q1.z * q2.w) - (q1.w * q2.z);
    int z = (q1.x * q2.z) - (q1.y * q2.w) + (q1.z * q2.x) + (q1.w * q2.y);
    int w = (q1.x * q2.w) + (q1.y * q2.z) - (q1.z * q2.y) + (q1.w * q2.x);

    Quaternion q(x, y, z, w);

    return q;
}
