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

#include "rectangle.h"

/**
 * Constructor
 */
Rectangle::Rectangle(unsigned int width, unsigned int height): width(width), height(height) {
    this->computeArea();
    this->computePerimeter();
}

/**
 * Destructor
 */
Rectangle::~Rectangle() {
    std::cout << "Deleting rectangle object ..." << std::endl;
}

/**
 * Public Member Function
 */
void Rectangle::setWidth(unsigned int width) {
    this->width = width;
    this->computeArea();
    this->computePerimeter();
}

void Rectangle::setHeight(unsigned int height) {
    this->height = height;
    this->computeArea();
    this->computePerimeter();
}

unsigned int Rectangle::getWidth() const {
    return this->width;
}

unsigned int Rectangle::getHeight() const {
    return this->height;
}

unsigned int Rectangle::getArea() const {
    return this->area;
}

unsigned int Rectangle::getPerimeter() const {
    return this->perimeter;
}

void Rectangle::showRectangleInfo() const {
    std::cout << std::string(16, '-') << std::endl;
    std::cout << "Rectangle Info" << std::endl;
    std::cout << "Width: " << this->width << std::endl;
    std::cout << "Height: " << this->height << std::endl;
    std::cout << "Perimeter: " << this->perimeter << std::endl;
    std::cout << "Area: " << this->area << std::endl;
}

/**
 * Protected Member Functions
 */
void Rectangle::computeArea() {
    this->area = this->width * this->height;
}

void Rectangle::computePerimeter() {
    this->perimeter = 2 * (this->width + this->height);
}
