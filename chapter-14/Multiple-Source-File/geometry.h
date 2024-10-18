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

void computeCircleArea(Circle *);
void computeRectangleArea(Rectangle *);
void computeCircumference(Circle *);
void computePerimeter(Rectangle *);


#endif

/*
NOTE:

    1. extern Declarations for Global Variables in Other Files

        The storage-class specifier extern indicates that a C object
        or function is defined either later in the same file or in a
        different file. The compiler informs the linker that unresolved
        references to that variable or function appear in the file. If
        the linker finds a proper global definition, the linker resolves
        the references by indicating where object is located. If the linker
        cannot locate a definition, it issues an error message and does not
        produce an executable file. Any identifier that’s declared at file
        scope is extern by default.

        Global variables should be avoided unless application performance is
        critical because they violate the principle of least privilege.
    
    2. Function Prototypes
*/
