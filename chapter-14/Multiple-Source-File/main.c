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
        ERROR("'%s' is not given!\n", is_width ? "Height" : "Width");
    }

    return 0;
}

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

        Just as extern declarations can be used to declare global variables
        to other program files, function prototypes can extend the scope of
        a function beyond the file in which it’s defined (the extern specifier
        is not required in a function prototype). Simply include the function
        prototype in each file in which the function is invoked and compile
        the files together. Function prototypes indicate to the compiler that
        the specified function is defined either later in the same file or in
        a different file. Again, the compiler does not attempt to resolve references
        to such a function—that task is left to the linker. If the linker cannot
        locate a proper function definition, the linker issues an error message.

    3. Restricting Scope with static

        It’s possible to restrict the scope of a global variable or a function to the
        file in which it’s defined. The storage-class specifier static, when applied
        to a global variable or a function, prevents it from being used by any function
        that’s not defined in the same file. This is referred to as internal linkage.
        Global variables and functions that are not preceded by static in their definitions
        have external linkage—they can be accessed in other files if those files contain
        proper declarations and/or function prototypes.
        The global variable declaration

                static const double PI = 3.14159;

        creates constant variable PI of type double, initializes it to 3.14159 and
        indicates that PI is known only to functions in the file in which it’s defined.
        The static specifier is commonly used with utility functions that are called only by
        functions in a particular file. If a function is not required outside a particular file,
        the principle of least privilege should be enforced by applying static to both
        the function’s definition and prototype.

    4. Makefiles

        When building large programs in multiple source files, compiling the program becomes
        tedious if small changes are made to one file and the entire program is needlessly
        recompiled. Many systems provide special utilities that recompile only the modified
        program files. On Linux/UNIX systems the utility is called make. Utility make reads a
        file called makefile that contains instructions for compiling and linking the program.
        Products such as Eclipse and Microsoft Visual C++ provide similar utilities.
*/
