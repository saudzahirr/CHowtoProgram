/*
 * Author  : Saud Zahir
 * Date    : August 21, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Bubble Sort
*/

#include <stdio.h>
#define SIZE 10

int main(void) {
    int a[SIZE] = {2, 29, 14, 8, 12, 10, 89, 68, 45, 37};

    puts("Data items in original order");

    for (size_t i = 0; i < SIZE; i++) {
        printf("%4d", a[i]);
    }

    // bubble sort
    for (unsigned int pass = 1; pass < SIZE; pass++) {
        for (size_t i = 0; i < SIZE - 1; i++) {
            if (a[i] > a[i + 1]) {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    puts("\nData items in ascending order");

    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }
    puts("");

    return 0;
}
