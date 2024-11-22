/*
 * Author  : Saud Zahir
 * Date    : November 22, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Composition: Objects as Members of Classes
 */

#include <string>
#include "date.h"

class Employee {
    public:
        /**
         * Constructor
         */
        Employee(std::string, Date&);

        /**
         * Destructor
         */
        ~Employee();

        /**
         * Public Member Functions
         */
        void setName(std::string);
        void setDateOfBirth(Date&);
        void displayEmployee() const;

    private:
        std::string name;
        Date dob;
};
