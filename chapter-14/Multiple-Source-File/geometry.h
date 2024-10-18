/*
 * Author  : Saud Zahir
 * Date    : October 18, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Compiling Multiple-Source-File Programs
 */

#ifndef GEOMETRY_H
#define GEOMETRY_H

typedef struct {
    double radius;
    double circumference;
    double area;
} Circle;


typedef struct {
    double width;
    double height;
    double perimeter;
    double area;
} Rectangle;

typedef const Circle *const cPtrConst;
typedef const Rectangle *const rPtrConst;

static const double PI = 3.141592;

extern _Bool is_height;
extern _Bool is_width;

void computeCircleArea(Circle *);
void computeRectangleArea(Rectangle *);
void computeCircumference(Circle *);
void computePerimeter(Rectangle *);


#endif
