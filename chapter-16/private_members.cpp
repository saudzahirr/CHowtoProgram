/*
 * Author  : Saud Zahir
 * Date    : October 31, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Data Members, set Member Functions and get Member Functions
 */

#include <iostream>
#include <string>

using namespace std;

class GradeBook {
    public:
        // mutator
        void setCourseName(const string &nameOfCourse) {
            courseName = nameOfCourse;
        }

        // accessor
        string getCourseName() const {
            return courseName;
        }

        void displayMessage() const {
            cout << "Welcome to the Grade Book!\n" << courseName << endl;
        }

    private:
        string courseName;
};

int main() {
    GradeBook gradeBook;
    string nameOfCourse;

    cout << "Enter the name of course: ";
    getline(cin, nameOfCourse);

    gradeBook.setCourseName(nameOfCourse);

    cout << "Course Name: " << gradeBook.getCourseName() << endl;
    gradeBook.displayMessage();
}

/*
NOTE:
    Variables declared in a function definition’s body are known as local variables
    and can be used only from the line of their declaration in the function to the
    closing right brace (}) of the block in which they’re declared. A local variable
    must be declared before it can be used in a function. A local variable cannot be
    accessed outside the function in which it’s declared.

    A class normally consists of one or more member functions that manipulate the
    attributes that belong to a particular object of the class. Attributes are represented
    as variables in a class definition. Such variables are called 'data members' and are
    declared inside a class definition but outside the bodies of the class’s member-function
    definitions. Each object of a class maintains its own attributes in memory. These attributes
    exist throughout the life of the object.

    Every instance (i.e., object) of class GradeBook contains each of the class’s
    data members—if there are two GradeBook objects, each has its own courseName
    (one per object).

    Most data-member declarations appear after the 'private' access specifier.
    Variables or functions declared after access specifier private (and before
    the next access specifier if there is one) are accessible only to member functions
    of the class for which they’re declared (or to “friends” of the class,). Thus,
    data member courseName can be used only in member functions setCourseName,
    getCourseName and displayMessage of class GradeBook (or to “friends” of the class,
    if there are any).

    The default access for class members is private so all members after the
    class header and before the first access specifier (if there are any) are private.
    The access specifiers public and private may be repeated, but this is unnecessary
    and can be confusing.

    Declaring data members with access specifier private is known as 'data hiding'. When
    a program creates a GradeBook object, data member courseName is encapsulated (hidden)
    in the object and can be accessed only by member functions of the object’s class.
    In class GradeBook, member functions setCourseName and getCourseName manipulate the
    data member courseName directly.

    Software Engineering with Set and Get Functions
    A class’s private data members can be manipulated only by member functions
    of that class (and by “friends” of the class). So a 'client of an object'—that
    is, any statement that calls the object’s member functions from outside the
    object—calls the class’s public member functions to request the class’s services
    for particular objects of the class.

    Classes often provide public member functions to allow clients of the class to set
    (i.e., assign values to) or get (i.e., obtain the values of) private data members.
    These member function names need not begin with set or get, but this naming convention
    is common.

    Set functions are sometimes called 'mutators' (because they mutate, or change, values),
    and get functions are also called 'accessors' (because they access values).

    Recall that declaring data members with access specifier private enforces data hiding.
    Providing public set and get functions allows clients of a class to access the hidden data,
    but only indirectly. The client knows that it’s attempting to modify or obtain an object’s
    data, but the client does not know how the object performs these operations. In some cases,
    a class may internally represent a piece of data one way, but expose that data to clients in
    a different way.

    The set and get functions allow a client to interact with an object, but the object’s
    private data remains safely encapsulated (i.e., hidden) in the object itself. The set
    and get functions of a class also should be used by other member functions within the
    class to manipulate the class’s private data, even though these member functions can
    access the private data directly.
*/
