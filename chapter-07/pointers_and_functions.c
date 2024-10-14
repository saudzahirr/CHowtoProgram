/*
 * Author  : Saud Zahir
 * Date    : October 14, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Pointers to Functions
*/

#include <stdio.h>
#define SIZE 10

void bubbleSort(int * const, const size_t, _Bool (*)(const int * const, const int * const));
_Bool ascending(const int * const, const int * const);
_Bool descending(const int * const, const int * const);

int main(void) {
    int a[SIZE] = {2, 29, 14, 8, 12, 10, 89, 68, 45, 37};

    puts("Data items in original order");

    for (size_t i = 0; i < SIZE; i++) {
        printf("%4d", a[i]);
    }

    bubbleSort(a, SIZE, ascending);
    puts("\nData items in ascending order");

    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }
    puts("");

    bubbleSort(a, SIZE, descending);
    puts("Data items in descending order");

    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }
    puts("");

    return 0;
}

void bubbleSort(int * const array, const size_t size, _Bool (*compare)(const int * const, const int * const)) {
    void swap(int *, int *);
    // bubble sort
    for (unsigned int pass = 1; pass < SIZE; pass++) {
        for (size_t i = 0; i < SIZE - 1; i++) {
            if ((*compare)(&array[i], &array[i + 1])) {
                swap(&array[i], &array[i + 1]);
            }
        }
    }
}

void swap(int *aPtr, int *bPtr) {
    int temp = *aPtr;
    *aPtr = *bPtr;
    *bPtr = temp;
}

_Bool ascending(const int * const a, const int * const b) {
    return *b < *a;
}

_Bool descending(const int * const a, const int * const b) {
    return *b > *a;
}


/*
NOTE:
    A pointer to a function contains the address of the function in memory.
    An array name is really the address in memory of the first element of
    the array. Similarly, a function name is really the starting address in
    memory of the code that performs the function’s task. Pointers to functions
    can be passed to functions, returned from functions, stored in arrays and
    assigned to other function pointers.

    Parentheses are needed around *compare to group the * with compare to indicate
    that compare is a pointer. If we had not included the parentheses, the declaration
    would have been:
                    _Bool *compare(const int * const a, const int * const b)

    which declares a function that receives two integers as parameters and returns
    a pointer to a Boolean. The third parameter in the bubbleSort prototype is
    written as _Bool (*)(const int * const, const int * const); without the function-
    pointer name and parameter name (due to function prototype scope).

    Just as a pointer to a variable is dereferenced to access the value of the variable,
    a pointer to a function is dereferenced to use the function.

*/
