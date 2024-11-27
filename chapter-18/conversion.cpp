/*
 * Author  : Saud Zahir
 * Date    : November 27, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Converting Between Types
 */

#include <iostream>
#include <string>

class Object {
    int value;

public:
    Object(int v) : value(v) {}

    // Conversion operator: Object to int
    operator int() const {
        return value;
    }
};

int main() {
    Object obj(42);

    // Implicit conversion
    int num = obj;  
    std::cout << "Implicitly converted value: " << num << std::endl;

    // Explicit conversion
    std::cout << "Explicitly converted value: " << static_cast<int>(obj) << std::endl;

    return 0;
}

/*
NOTE:
    Most programs process information of many types. Sometimes all the operations
    “stay within a type.” For example, adding an int to an int produces an int.
    It’s often necessary, however, to convert data of one type to data of another
    type. This can happen in assignments, in calculations, in passing values to
    functions and in returning values from functions. The compiler knows how to
    perform certain conversions among fundamental types.

    You can use cast operators to force conversions among fundamental types.
    But what about user-defined types? The compiler cannot know in advance how to
    convert among user-defined types, and between user-defined types and fundamental
    types, so you must specify how to do this. Such conversions can be performed with
    conversion constructors—constructors that can be called with a single argument (we’ll
    refer to these as single-argument constructors). Such constructors can turn objects
    of other types (including fundamental types) into objects of a particular class.

    A conversion operator (also called a "cast operator") can be used to convert
    an object of one class to another type. Such a conversion operator must be
    a non-static member function. The function prototype

        Object::operator int() const;

    declares an overloaded cast operator function for converting an object of class
    Object into a temporary int object. The operator function is declared const
    because it does not modify the original object. The return type of an overloaded
    cast operator function is implicitly the type to which the object is being converted.
    If obj is a class object, when the compiler sees the expression static_cast<int>(obj),
    the compiler generates the call obj.operator int() to convert the operand obj to a an int.
*/
