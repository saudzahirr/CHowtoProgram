/*
 * Author  : Saud Zahir
 * Date    : October 31, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Name Mangling
 */

int square(int);
double square(double);
void pass(char, int, float &, long);

int main() {
    return 0;
}

int square(int x) {
    return x * x;
}

double square(double y) {
    return y * y;
}

void pass(char a, int b, float &c, long d) {
    return;
}

/*
NOTE:
    The mangled function names produced in assembly language by GNU C++. Each mangled name
    (other than main) begins with two underscores (__) followed by the letter Z, a number and
    the function name. The number that follows Z specifies how many characters are in the
    function’s name. For example, function square has 6 characters in its name, so its mangled
    name is prefixed with __Z6.

    g++ name_mangling.cpp.cpp -S

    __Z6squarei
    __Z6squared
    __Z4passciRfl
    _main

    The function name is then followed by an encoding of its parameter list. In the
    parameter list for function pass, c represents a char, i represents an int, Rf
    represents a float & (i.e., a reference to a float) and l represents long. The
    two square functions are distinguished by their parameter lists; one specifies d
    for double and the other specifies i for int.

    The return types of the functions are not specified in the mangled names. Overloaded
    functions can have different return types, but if they do, they must also have different
    parameter lists. Again, you cannot have two functions with the same signature and different
    return types. Function-name mangling is compiler specific. Also, function main is not
    mangled, because it cannot be overloaded. The compiler uses only the parameter lists to
    distinguish between functions of the same name. Overloaded functions need not have the
    same number of parameters. Programmers should use caution when overloading functions
    with default parameters, because this may cause ambiguity.
*/
