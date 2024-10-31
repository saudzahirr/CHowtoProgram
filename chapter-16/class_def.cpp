/*
 * Author  : Saud Zahir
 * Date    : October 31, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Defining a Class with a Member Function
 */

#include <iostream>

using namespace std;

class GradeBook {
    public:
        void displayMessage() const {
            cout << "Welcome to the Grade Book!" << endl;
        }
};

int main() {
    GradeBook gradeBook;
    gradeBook.displayMessage();
}

/*
NOTE:
    The class definition begins in with the keyword 'class' followed by the
    class name GradeBook. By convention, the name of a user-defined class
    begins with a capital letter, and for readability, each subsequent word
    in the class name begins with a capital letter. This capitalization style
    is often referred to as 'Pascal case', because the convention was widely
    used in the Pascal programming language. The occasional uppercase letters
    resemble a camel’s humps. More generally, 'camel case' capitalization style
    allows the first letter to be either lowercase or uppercase (e.g., gradeBook).
    Every class’s body is enclosed in a pair of left and right braces ({ and }).
    The class definition terminates with a semicolon.

    The keyword public, is an access specifier. The member function which appears after
    access specifier public: to indicate that the function is “available to the public”—that
    is, it can be called by other functions in the program (such as main), and by member
    functions of other classes (if there are any). Access specifiers are always followed by
    a colon (:). Other access specifier are private and protected.

    'const' Correctness
    We declared member function displayMessage 'const' because in the process of displaying
    message the function does not, and should not, modify the GradeBook object on which it’s
    called. Declaring displayMessage const tells the compiler, “this function should not modify
    the object on which it’s called—if it does, please issue a compilation error.” This can help
    you locate errors if you accidentally insert code in displayMessage that would modify the object.
    The member function definition is commonly referred to as a 'function header'.

    When we declare variables of type int, the compiler knows what int is—it’s a fundamental
    type that’s “built into” C++. However, the compiler does mnot automatically know what type
    GradeBook is—it’s a 'user-defined type'. We tell the compiler what GradeBook is by including
    the class definition. Each class you create becomes a new type that can be used to create objects.
    You can define new class types as needed; this is one reason why C++ is known as an 'extensible
    programming language'. The 'dot operator' (.) is used for accessing members of structure and class.
*/
