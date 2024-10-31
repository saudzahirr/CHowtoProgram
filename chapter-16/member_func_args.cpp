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
        void displayMessage(const string &message) const {
            cout << message << endl;
        }
};

int main() {
    GradeBook gradeBook;
    gradeBook.displayMessage("C++ How to Program");
}

/*
NOTE:
    The additional information passed to the member functions
    is called parameters or arguments. A string is actually an
    object of the C++ Standard Library class string. This class
    is defined in header <string>, and the name string, like cout,
    belongs to namespace std.
*/
