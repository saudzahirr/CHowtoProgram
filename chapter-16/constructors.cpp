/*
 * Author  : Saud Zahir
 * Date    : November 01, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Initializing Objects with Constructors
 */

#include <iostream>
#include <string>

using namespace std;

class GradeBook {
    public:
        explicit GradeBook(string name): courseName(name) {}

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
    GradeBook gradeBook1("C++ How to Program");
    GradeBook gradeBook2("Java How to Program");

    cout << "gradeBook1 course name: " << gradeBook1.getCourseName() << endl;
    cout << "gradeBook2 Course Name: " << gradeBook2.getCourseName() << endl;
}

/*
NOTE:
    When an object of class GradeBook is created, its data member courseName is
    initialized to the empty string by default. What if we want to provide a
    course name when we create a GradeBook object? Each class we declare can
    provide one or more constructors that can be used to initialize an object
    of the class when the object is created. A "constructor" is a special member
    function that must be defined with the same name as the class, so that the compiler
    can distinguish it from the class’s other member functions. An important difference
    between constructors and other functions is that constructors cannot return values, so
    they cannot specify a return type (not even void). Normally, constructors are declared public.
    You also can create classes with more that one constructor using function overloading.

    C++ automatically calls a constructor for each object that’s created, which helps
    ensure that objects are initialized properly before they’re used in a program. The
    constructor call occurs when the object is created. If a class does not explicitly
    include constructors, the compiler provides a "default constructor" with no parameters.
    For example, when we create a GradeBook object, the default constructor is called. The
    default constructor provided by the compiler creates a GradeBook object without giving
    any initial values to the object’s fundamental type data members. For data members that
    are objects of other classes, the default constructor implicitly calls each data member’s
    default constructor to ensure that the data member is initialized properly. This is why the
    string data member courseName was initialized to the empty string—the default constructor for
    class string sets the string’s value to the empty string.

    In the example, we specify a course name for a GradeBook object when the object is created. In
    this case, the argument "C++ How to Program" is passed to the GradeBook object’s constructor
    and used to initialize the courseName. The program defines a modified GradeBook class containing
    a constructor with a string parameter that receives the initial course name.

    The constructor has the same name as its class, GradeBook. A constructor specifies in its parameter
    list the data it requires to perform its task. When you create a new object, you place this data in
    the parentheses that follow the object name. We declared this constructor "explicit", because it
    takes a single parameter—this is important for subtle reasons. For now, just declare all single-parameter
    constructors explicit. Constructors cannot return values (or even void). Also, constructors cannot be
    declared const (because initializing an object modifies it).

    The constructor uses a "member-initializer list" to initialize the courseName data member with the
    value of the constructor’s parameter name. Member initializers appear between a constructor’s parameter
    list and the left brace that begins the constructor’s body. The member initializer list is separated from
    the parameter list with a colon (:). A member initializer consists of a data member’s variable name followed
    by parentheses containing the member’s initial value. If a class contains more than one data member, each data
    member’s initializer is separated from the next by a comma. The member initializer list executes before the body
    of the constructor executes. You can perform initialization in the constructor’s body, but it’s more efficient to
    do it with member initializers, and some types of data members must be initialized this way.

    If you define any constructors with arguments, C++ will not implicitly create a default constructor for that class.
    A default constructor, like GradeBook() {}, initializes all the data members of a class to their default values. If
    no explicit initialization is provided, primitive data types may hold garbage values, but using default constructors
    for classes or built-in types usually sets them to defined default values (e.g., zero for numeric types, false for
    boolean types, and nullptr for pointers).
*/
