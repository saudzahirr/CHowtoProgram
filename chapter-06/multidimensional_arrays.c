/*
 * Author  : Saud Zahir
 * Date    : September 04, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Multidimensional Arrays
*/

#include <stdio.h>

#define ROWS 2
#define COLS 2

void displayMatrix(const int[][COLS], int, int);

int main() {
    int matrix[ROWS][COLS] = {{1}, {3, 4}};
    // If there are not enough initializers
    // for a given row, the remaining elements
    // of that row are initialized to zero.
    displayMatrix(matrix, ROWS, COLS);

    return 0;
}

void displayMatrix(const int A[][COLS], int rows, int cols) {
    for (size_t i = 0; i < ROWS; i++) {
        for (size_t j = 0; j < COLS; j++) {
            printf("A[%u][%u] = %-8d", i, j, A[i][j]);
        }
        puts("");   
    }
}
