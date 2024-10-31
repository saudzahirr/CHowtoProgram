/*
 * Author  : Saud Zahir
 * Date    : October 31, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Introduction to C++ Standard Library Class Template vector
 */

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void display(const vector<int> &);
void update(vector<int> &);

int main() {
    vector<int> numbers_1(4);
    vector<int> numbers_2(4);

    cout << "Add numbers\n";
    update(numbers_1);
    cout << "numbers_1 = ";
    display(numbers_1);

    cout << "Add numbers\n";
    update(numbers_2);
    cout << "numbers_2 = ";
    display(numbers_2);

    // use equality (==) operator with vector objects
    if (numbers_1 == numbers_2) {
        cout << "Numbers list is equal" << endl;
    }
    else {
        cout << "Numbers list is unequal" << endl;
    }

    numbers_1 = numbers_2; // assignment
    cout << "Update numbers\n";
    update(numbers_2);
    cout << "numbers_2 = ";
    display(numbers_2);

    vector<int> numbers_3(numbers_1); // copy constructor
    cout << "numbers_3 = ";
    display(numbers_3);

    numbers_1[1] = 11;
    cout << "numbers_1 = ";
    display(numbers_1);

    try {
        cout << "\nAttempt to display numbers_1.at(15)" << endl;
        cout << numbers_1.at(15) << endl; // ERROR: out of range
    }
    catch (out_of_range &ex) {
        cout << "An exception occurred: " << ex.what() << endl;
    }

    numbers_1[2] = 13;
    cout << "numbers_1 = ";
    display(numbers_1);
}

void display(const vector<int> &array) {
    /*
        Using 'auto' for type deduction
        In C keyword auto is used for automatic
        storage duration (default behavior). While
        in C++, it is widely used for type deduction
        for variable declarations. It allows the compiler
        to automatically deduce the type of a variable
        from its initializer. For instance,

            auto c = 3.141; // c is deduced as double
    */
    for (auto element : array) { // range-based for loop
        cout << setw(4) << element;
    }
    cout << endl;
}

void update(vector<int> &array) {
    /*
        To invoke a member function, you access
        it with the dot (.) operator, just as
        we do with struct and union members.
        Here size is the member function of
        vector template class object.
    */
    for (auto i = 0UL; i < array.size(); ++i)
        cin >> array[i];
}

/*
NOTE:
    C++ Standard Library class template vector represents a more robust
    type of array featuring many additional capabilities. C-style
    pointer-based arrays (i.e., the type of arrays presented thus far)
    have great potential for errors. For example, as mentioned earlier, a
    program can easily “walk off” either end of an array, because neither
    C nor C++ check whether indices fall outside the range of an array.
    Two arrays cannot be meaningfully compared with equality operators or
    relational operators. Pointer variables (known more commonly as pointers)
    contain memory addresses as their values. Array names are simply pointers to
    where the arrays begin in memory, and, of course, two different arrays will
    always be at different memory locations.

    When an array is passed to a general-purpose function designed to handle arrays
    of any size, the size of the array must be passed as an additional argument.
    Furthermore, one array cannot be assigned to another with the assignment
    operator(s)—array names are const pointers, so they cannot be used on the left
    side of an assignment operator.

    These and other capabilities certainly seem like “naturals” for dealing with arrays,
    but C++ does not provide such capabilities. However, the C++ Standard Library provides
    class template vector to allow you to create a more powerful and less error-prone
    alternative to arrays.

    Exception Handling: Processing an Out-of-Range Index
    An exception indicates a problem that occurs while a program executes. The name
    “exception” suggests that the problem occurs infrequently—if the “rule” is that
    a statement normally executes correctly, then the problem represents the “exception
    to the rule.”
    Exception handling enables you to create fault-tolerant programs that can resolve
    (or handle) exceptions. In many cases, this allows a program to continue executing as
    if no problems were encountered.

    To handle an exception, place any code that might throw an exception in a 'try statement'
    The try block contains the code that might throw an exception, and the catch block contains
    the code that handles the exception if one occurs. You can have many catch blocks to handle
    different types of exceptions that might be thrown in the corresponding try block. If the
    code in the try block executes successfully, catch block is ignored. The braces that delimit
    try and catch blocks’ bodies are required.

    When the exception is triggered, the program displays a message indicating the
    problem that occurred. It calls the exception object’s 'what' member function to
    get the error message that is stored in the exception object and display it. Once
    the message is displayed, the exception is considered handled and the program continues
    with the next statement after the catch block’s closing brace.
*/
