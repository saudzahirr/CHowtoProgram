/*
 * Author  : Saud Zahir
 * Date    : October 30, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: C++
 */

#include <iostream>

int main(void) {
    int a, b, c;

    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    
    c = a + b;
    std::cout << "a + b = " << c << std::endl;
}

/*
NOTE:
    C language introduced the procedural programming and top-down program design.
    C++ introduces two additional programming paradigms—object-oriented programming
    (with classes, encapsulation, objects, operator overloading, inheritance and
    polymorphism) and generic programming (with function templates and class templates).

    C++ improves on many of C’s features and provides object-oriented-programming (OOP)
    capabilities that increase software productivity, quality and reusability. C++ was
    developed by Bjarne Stroustrup at Bell Laboratories and was originally called
    “C with classes.” The name C++ includes C’s increment operator (++) to indicate that
    C++ is an enhanced version of C. C++ is a rich language, and there are some subtleties
    in the language and some advanced subjects that you can read in the C++ standard document
    “Programming languages—C++” (document number ISO/IEC 14882-2011).

        http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2011/n3242.pdf

    C file names have the .c (lowercase) extension. C++ file names can have one of several
    extensions, such as .cpp, .cxx or .C (uppercase). We use the extension .cpp.

    As in C, every C++ program begins execution with function main. Keyword int to the left
    of main indicates that main returns an integer value. C++ requires you to specify the
    return type, possibly void, for all functions. In C++, specifying a parameter list with
    empty parentheses is equivalent to specifying a void parameter list in C. In C, using empty
    parentheses in a function definition or prototype is dangerous. It disables compile-time
    argument checking in function calls, which allows the caller to pass any arguments to the
    function. This could lead to runtime errors. Omitting the return type in a C++ function
    definition is a syntax error.

    The standard output stream object, std::cout, and the stream insertion operator << are utilized
    for printing data. In a similar manner, the standard input stream object, std::cin, along with
    the stream extraction operator >>, is used for reading input.

    The std::endl—a so-called stream manipulator. The name endl is an abbreviation for “end line.”
    The std::endl stream manipulator outputs a newline, then “flushes the output buffer.” This simply
    means that, on some systems where outputs accumulate in the machine until there are enough to
    “make it worthwhile” to display on the screen, std::endl forces any accumulated outputs to be
    displayed at that moment. This can be important when the outputs are prompting the user for an
    action, such as entering data.

    The notation std::cout specifies that we’re using a name, in this case cout, that belongs to
    “namespace” std. Namespaces are an advanced C++ feature that allows developers to organize code
    into logical groups and prevent naming conflicts. A namespace is essentially a container that
    holds a set of identifiers, such as function names, variable names, and class names. By
    encapsulating these identifiers within a namespace, you can have multiple functions or classes
    with the same name in different namespaces without causing ambiguity. The 'using' statement
    enables us to avoid placing std:: before each use of a namespace std name.

    The stream insertion operator “knows” how to output each type of data. Using multiple stream
    insertion operators (<<) in a single statement is referred to as concatenating, chaining or
    cascading stream insertion operations.

    According to the C++ standard, if program execution reaches the end of main without encountering
    a return statement, it’s assumed that the program terminated successfully—exactly as when the
    last statement in main is a return statement with the value 0. For that reason, we omit the
    return statement at the end of main in C++ programs.

    C++ programs consist of pieces called classes and functions. You can program each piece that
    you need to form a C++ program. Instead, most C++ programmers take advantage of the rich
    collections of existing classes and functions in the C++ Standard Library. Thus, there are
    really two parts to learning the C++ “world.” The first is learning the C++ language itself;
    the second is learning how to use the classes and functions in the C++ Standard Library.

    The C++ Standard Library is divided into many portions, each with its own header file. The header
    files contain the function prototypes for the related functions that form each portion of the library.
    The header files also contain definitions of various class types and functions, as well as constants
    needed by those functions. A header file “instructs” the compiler on how to interface with library
    and user-written components. Header file names ending in '.h' are “old-style” header files that have
    been superceded by the C++ Standard Library header files.

    Programmer-defined header files should end in '.h'. A programmer-defined header file can be included
    by using the #include preprocessor directive. For example, the header file utils.h can be included in
    a program by placing the directive #include "utils.h" at the beginning of the program.
*/
