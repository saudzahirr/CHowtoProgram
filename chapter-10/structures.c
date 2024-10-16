/*
 * Author  : Saud Zahir
 * Date    : October 15, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Structures
*/

#include <stdio.h>

// Definition
struct employee {
    char name[40];
    unsigned int age;
    char gender;
    double salary;
    struct employee *ePtr; // Self-referential structure
};

int main(void) {
    // Initializing Structures
    struct employee e = {"Bob", 25, 'M', 2500, NULL};
    struct employee *ePtr = &e;
    e.ePtr = ePtr;

    puts("Employee Data");
    printf("Name: %s\n", e.name);
    printf("Age: %d\n", e.age);
    printf("Gender: %c\n", e.gender);

    ePtr->salary += 500;
    printf("Salary: %.2f\n", ePtr->salary);

    return 0;
}

/*
NOTE:
    Structures—sometimes referred to as aggregates in
    the C standard—are collections of related variables
    under one name. Structures may contain variables of
    many different data types—in contrast to arrays, which
    contain only elements of the same data type. Structures
    are commonly used to define records to be stored in files.
    Structures—sometimes are also called record or tuples in
    other langauges.

    The identifier card is the structure tag, which names
    the structure definition and is used with struct to
    declare variables of the structure type. Variables declared
    within the braces of the structure definition are the
    structure’s members. Members of the same structure type
    must have unique names, but two different structure types
    may contain members of the same name without conflict.

    A variable of a struct type cannot be declared in the
    definition of that same struct type. A pointer to that
    struct type, however, may be included.

    A structure containing a member that’s a pointer to the
    same structure type is referred to as a self-referential structure.

    A structure cannot contain an instance of itself.

    Structure definitions do not reserve any space in memory;
    rather, each definition creates a new data type that’s used
    to define variables—like a blueprint of how to build instances
    of that struct.

    The structure tag name is optional. If a structure definition
    does not contain a structure tag name, variables of the structure
    type may be declared only in the structure definition not in a
    separate declaration.

    Structures may not be compared using operators == and !=, because
    structure members are not necessarily stored in consecutive bytes
    of memory. Sometimes there are “holes” in a structure, because
    computers may store specific data types only on certain memory bound-
    aries such as half-word, word or double-word boundaries.

    A word is a memory unit used to store data in a computer—usually
    4 bytes or 8 bytes.

    Structures can be initialized using initializer lists as with arrays.
    If there are fewer initializers in the list than members in the structure,
    the remaining members are automatically initialized to 0 (or NULL if the
    member is a pointer). Structure variables defined outside a function definition
    (i.e., externally) are initialized to 0 or NULL if they’re not explicitly
    initialized in the external definition.

    Two operators are used to access members of structures: the structure
    member operator (.)—also called the dot operator—and the structure
    pointer operator (->)—also called the arrow operator.

    Structures may be passed to functions by passing
        1. Individual structure members.
        2. An entire structure.
        3. A pointer to a structure.

    When structures or individual structure members are passed to a
    function, they’re passed by value. Therefore, the members of a
    caller’s structure cannot be modified by the called function.
    To pass a structure by reference, pass the address of the structure
    variable. Arrays of structures—like all other arrays—are automatically
    passed by reference.
*/
