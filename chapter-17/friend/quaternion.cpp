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
    int x = q1.getX() + q2.getX();
    int y = q1.getY() + q2.getY();
    int z = q1.getZ() + q2.getZ();
    int w = q1.getW() + q2.getW();

    Quaternion q(x, y, w, z);

    return q;
}

// Friend Class Member Functions
Quaternion QuaternionOperations::neg(const Quaternion& q) {
    Quaternion _q(
        -q.getX(),
        -q.getY(),
        -q.getZ(),
        -q.getW()
    );

    return _q;
}

Quaternion QuaternionOperations::sub(const Quaternion& q1, const Quaternion& q2) {
    Quaternion _q = neg(q2);
    return add(q1, _q);
}

Quaternion QuaternionOperations::mul(const Quaternion& q1, const Quaternion& q2) {
    int x1, x2, y1, y2, z1, z2, w1, w2;
    x1 = q1.getX();
    x2 = q2.getX();
    y1 = q1.getY();
    y2 = q2.getY();
    z1 = q1.getZ();
    z2 = q2.getZ();
    w1 = q1.getW();
    w2 = q2.getW();

    int x = (x1 * x2) - (y1 * y2 + z1 * z2 + w1 * w2);
    int y = (x1 * y2) + (y1 * x2) + (z1 * w2) - (w1 * z2);
    int z = (x1 * z2) - (y1 * w2) + (z1 * x2) + (w1 * y2);
    int w = (x1 * w2) + (y1 * z2) - (z1 * y2) + (w1 * x2);

    Quaternion q(x, y, z, w);

    return q;
}
