/*
 * Author  : Saud Zahir
 * Date    : November 28, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: public Inheritance
 */

#include <iostream>

#include "rectangle.h"
#include "square.h"

using namespace std;

int main() {
    Rectangle rectangle = {2, 3};
    Square square(5);

    rectangle.showRectangleInfo();
    square.showSquareInfo();

    square.setLength(2);
    cout << "Area: " << square.getArea() << endl;
}
