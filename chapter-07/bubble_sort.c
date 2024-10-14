/*
 * Author  : Saud Zahir
 * Date    : October 09, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Bubble Sort
*/

#include <stdio.h>
#define SIZE 10

void bubbleSort(int * const, const size_t);

int main(void) {
    int a[SIZE] = {2, 29, 14, 8, 12, 10, 89, 68, 45, 37};

    puts("Data items in original order");

    for (size_t i = 0; i < SIZE; i++) {
        printf("%4d", a[i]);
    }

    bubbleSort(a, SIZE);
    puts("\nData items in ascending order");

    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }
    puts("");

    return 0;
}

void bubbleSort(int * const array, const size_t size) {
    void swap(int *, int *);
    // bubble sort
    for (unsigned int pass = 1; pass < SIZE; pass++) {
        for (size_t i = 0; i < SIZE - 1; i++) {
            if (array[i] > array[i + 1]) {
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
