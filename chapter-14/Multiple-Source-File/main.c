/*
 * Author  : Saud Zahir
 * Date    : October 18, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Compiling Multiple-Source-File Programs
 */

#include <string.h>
#include <stdlib.h>
#include "geometry.h"
#include "logger.h"

extern void printCircleInfo(const Circle * const);
extern void printRectangleInfo(const Rectangle * const);

int main(int argc, char *argv[]) {
    extern _Bool is_height, is_width;

    Circle circle = {0, 0, 0};
    cPtrConst cPtr = &circle;

    Rectangle rectangle = {0, 0, 0};
    rPtrConst rPtr = &rectangle;

    for (size_t i = 1; i < argc; i++) {
        if ((strcmp(argv[i], "-r") == 0) || (strcmp(argv[i], "--radius") == 0)) {
            double radius;
            sscanf(argv[i + 1], "%lf", &radius);
            circle.radius = radius;
            computeCircumference(&circle);
            computeCircleArea(&circle);
            INFO("Shape: Circle\n");
            printCircleInfo(&circle);
            break;
        }

        else if (((strcmp(argv[i], "-h") == 0)) || (strcmp(argv[i], "--height") == 0)) {
            is_height = 1;
            double height;
            sscanf(argv[i + 1], "%lf", &height);
            rectangle.height = height;
        }

        else if (((strcmp(argv[i], "-w") == 0)) || (strcmp(argv[i], "--width") == 0)) {
            is_width = 1;
            double width;
            sscanf(argv[i + 1], "%lf", &width);
            rectangle.width = width;
        }
    }

    if (is_height && is_width) {
        computePerimeter(&rectangle);
        computeRectangleArea(&rectangle);
        INFO("Shape %s\n", rPtr->width == rPtr->height ? "Square" : "Rectangle");
        printRectangleInfo(rPtr);
    }

    else if (!is_height || !is_width) {
        exit(1);
    }

    return 0;
}
