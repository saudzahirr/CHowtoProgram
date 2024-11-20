/*
 * Author  : Saud Zahir
 * Date    : November 20, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Overloaded Constructors and Delegating Constructors
 */

#include <iostream>
#include <stdexcept>

#include "Time.h"

using namespace std;

int main() {
    Time time;
    time.setTime(12, 12, 12);
    time.displayUniversal();
    time.display();

    try {
        time.setTime(40, 12, 12);
    }
    catch (invalid_argument &e) {
        cout << "Exception: " << e.what() << endl;
    }

    Time t1;
    t1.display();

    Time t2(12);
    t2.display();

    Time t3(12, 12);
    t3.display();

    Time t4(12, 12, 12);
    t4.display();
}

/*
NOTE:
    A class’s constructors and member functions can also be overloaded.
    Overloaded constructors typically allow objects to be initialized
    with different types and/or numbers of arguments. To overload a
    constructor, provide in the class definition a prototype for each
    version of the constructor, and provide a separate constructor
    definition for each overloaded version. This also applies to the
    class’s member functions.

    The Time constructor with three parameters had a default argument for
    each parameter. We could have defined that constructor instead as four
    overloaded constructors with the following prototypes:

        Time();
        Time(int);
        Time(int, int);
        Time(int, int, int);

    Just as a constructor can call a class’s other member functions to perform
    tasks, C++11 now allows constructors to call other constructors in the same
    class. The calling constructor is known as a "delegating constructor"—it delegates
    its work to another constructor. This is useful when overloaded constructors
    have common code that previously would have been defined in a private utility
    function and called by all the constructors. The first three of the four Time
    constructors declared above can delegate work to one with three int arguments,
    passing 0 as the default value for the extra parameters. To do so, you use a member
    initializer with the name of the class as follows:

    Time::Time(): Time(0, 0, 0) {}
    Time::Time(int hour): Time(hour, 0, 0) {}
    Time::Time(int hour, int minute): Time(hour, minute, 0) {}
    Time::Time(int hour, int minute, int second): Time(hour, minute, second) {}
*/
