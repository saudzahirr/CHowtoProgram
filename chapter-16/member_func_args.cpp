/*
 * Author  : Saud Zahir
 * Date    : October 31, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Defining a Member Function with a Parameter
 */

#include <iostream>
#include <string>

using namespace std;

class GradeBook {
    public:
        void displayMessage(const string &courseName) const {
            cout << courseName << endl;
        }
};

int main() {
    GradeBook gradeBook;
    string nameOfCourse;
    getline(cin, nameOfCourse); // equivalent of fgets in C
    gradeBook.displayMessage(nameOfCourse);
}

/*
NOTE:
    The additional information passed to the member functions
    is called parameters or arguments. A string is actually an
    object of the C++ Standard Library class string. This class
    is defined in header <string>, and the name string, like cout,
    belongs to namespace std.

    The function call getline(cin, nameOfCourse) reads characters (including
    the space characters that separate the words in the input) from the standard
    input stream object cin (i.e., the keyboard) until the newline character is
    encountered, places the characters in the string variable nameOfCourse and
    discards the newline character. When you press Enter while entering data, a
    newline is inserted in the input stream. The <string> header must be included
    in the program to use function getline, which belongs to namespace std.
*/
