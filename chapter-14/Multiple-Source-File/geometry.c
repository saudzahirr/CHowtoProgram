/*
 * Author  : Saud Zahir
 * Date    : October 18, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Compiling Multiple-Source-File Programs
 */

#include "geometry.h"

#ifndef DEBUG
    #include "logger.h"
#endif


_Bool is_height = 0;
_Bool is_width = 0;


void computeCircleArea(Circle *circle) {
    circle->area = PI * circle->radius * circle->radius;
}

void computeRectangleArea(Rectangle *rectangle) {
    rectangle->area = rectangle->width * rectangle->height;
}

void printCircleInfo(const Circle * const circle) {
    DEBUG("Radius: %lf\n", circle->radius);
    DEBUG("Circumference: %lf\n", circle->circumference);
    DEBUG("Area: %lf\n", circle->area);
}

void computeCircumference(Circle *circle) {
    circle->circumference = 2 * PI * circle->radius;
}

void computePerimeter(Rectangle *rectangle) {
    rectangle->perimeter = 2 * (rectangle->width + rectangle->height);
}

void printRectangleInfo(const Rectangle * const rectangle) {
    if (rectangle->width != rectangle->height) {
        DEBUG("Width: %lf\n", rectangle->width);
        DEBUG("Height: %lf\n", rectangle->height);
    }

    else {
        DEBUG("Length: %lf\n", rectangle->width);
    }

    DEBUG("Perimeter: %lf\n", rectangle->perimeter);
    DEBUG("Area: %lf\n", rectangle->area);
}
