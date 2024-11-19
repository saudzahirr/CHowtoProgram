/*
 * Author  : Saud Zahir
 * Date    : November 19, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Throwing Exceptions
 */

// include guard, prevents multiple inclusions of header
#ifndef TIME_H
#define TIME_H

class Time {
    public:
        /**
         * Time constructor
         */
        Time();

        /**
         * setTime mutator
         */
        void setTime(int, int, int);

        /**
         * Display member functions (methods)
         */
        void displayUniversal() const;
        void display() const;

    private:
        /**
         * Data Members
         */
        unsigned int hour;
        unsigned int minute;
        unsigned int second;
};

#endif

/*
NOTE:
    The class definition is enclosed in the following include guard that
    prevents multiple inclusions of header. When we build larger programs,
    other definitions and declarations will also be placed in headers. The
    preceding include guard prevents the code between #ifndef (which means
    “if not defined”) and #endif from being included if the name TIME_H has
    been defined. If the header has not been included previously in a file,
    the name TIME_H is defined by the #define directive and the header statements
    are included. If the header has been included previously, TIME_H is defined
    already and the header is not included again. Attempts to include a header
    multiple times (inadvertently) typically occur in large programs with many
    headers that may themselves include other headers.
*/
