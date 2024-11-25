/*
 * Author  : Saud Zahir
 * Date    : November 25, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Dynamic Memory Management
 */

#include "quaternion.h"

int main() {
    Quaternion *qPtr = new Quaternion(1, 0, 1, 1);
    qPtr->show();

    /*
        delete calls the destructor for the object
        to which qPtr points, then deallocates the
        memory associated with the object, returning
        the memory to the free store.
    */
    delete qPtr;
    qPtr = nullptr; // Set to nullptr to avoid dangling pointer

    Quaternion *qPtrs = new Quaternion[16]();
    for (int i = 0; i < 16; ++i) {
        qPtrs[i].setW(i);
        qPtrs[i].show();
    }

    delete[] qPtrs;
    qPtrs = nullptr;
}

/*
NOTE:
    We can control the allocation and deallocation of memory in a program
    for objects and for arrays of any built-in or user-defined type. This is
    known as dynamic memory management and is performed with the operators
    "new" and "delete".

    We can use the new operator to dynamically allocate (i.e., reserve) the
    exact amount of memory required to hold an object or built-in array at
    execution time. The object or built-in array is created in the free store
    (also called the heap)—a region of memory assigned to each program for storing
    dynamically allocated objects [NOTE: Operator new could fail to obtain the
    needed memory, in which case a bad_alloc exception will occur]. Once memory
    is allocated in the free store, you can access it via the pointer that operator
    new returns. When you no longer need the memory, you can return it to the free
    store by using the delete operator to deallocate (i.e., release) the memory,
    which can then be reused by future new operations [NOTE: Operators new and delete
    can be overloaded, but this is beyond the scope of the book. If you do overload new,
    then you should overload delete in the same scope to avoid subtle dynamic memory
    management errors].

    Not releasing dynamically allocated memory when it’s no longer needed can cause
    the system to run out of memory prematurely. This is sometimes called a “memory leak.”

    Do not delete memory that was not allocated by new. Doing so results in undefined behavior.

    After you delete a block of dynamically allocated memory be sure not to delete
    the same block again. One way to guard against this is to immediately set the pointer
    to nullptr. Deleting a nullptr has no effect.

    We can provide an initializer for a newly created fundamental-type variable, as in

        double *ptr = new double(3.141592654);

    We can also use the new operator to allocate built-in arrays dynamically. For example,
    a 16-element integer array can be allocated and assigned to numbers as follows:

        int *numbers = new int[16]();

    The parentheses following new int[16] value initialize the array’s elements—fundamental
    numeric types are set to 0, bools are set to false, pointers are set to nullptr and class
    objects are initialized by their default constructors. The size of an array created at
    compile time must be specified using an integral constant expression; however, a dynamically
    allocated array’s size can be specified using any non-negative integral expression that can
    be evaluated at execution time.


    C++11: Using a List Initializer with a Dynamically Allocated Built-In Array

        Prior to C++11, when allocating a built-in array of objects dynamically, you could
        not pass arguments to each object’s constructor—each object was initialized by its
        default constructor. In C++11, you can use a list initializer to initialize the
        elements of a dynamically allocated built-in array, as in

            int *numbers = new int[16]{};

        The empty set of braces as shown here indicates that default initialization should
        be used for each element—for fundamental types each element is set to 0. The braces
        may also contain a comma-separated list of initializers for the array’s elements.

    To deallocate the memory to which numbers points, use the statement:

        delete [] numbers;

    If the pointer points to a built-in array of objects, the statement first calls the
    destructor for every object in the array, then deallocates the memory. If the preceding
    statement did not include the square brackets ([]) and numbers pointed to a built-in
    array of objects, the result is undefined—some compilers call the destructor only for
    the first object in the array. Using delete or delete [] on a nullptr has no effect.


    C++11: Managing Dynamically Allocated Memory with "unique_ptr"

        C++11’s new unique_ptr is a “smart pointer” for managing dynamically allocated memory.
        When a unique_ptr goes out of scope, its destructor automatically returns the managed
        memory to the free store.
*/
