/*
 * Author  : Saud Zahir
 * Date    : August 17, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Rolling a Die 60,000,000 Times
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 7

int main() {
    long unsigned int frequency[SIZE] = {0};

    srand(time(NULL));

    for (unsigned int roll = 0; roll < 60000000; roll++) {
        size_t face = 1 + (rand() % 6);
        ++frequency[face];
    }

    printf("%s%17s\n", "Face", "Frequency");
    for (size_t face = 1; face < SIZE; face++) {
        printf("%4lu%17lu\n", face, frequency[face]);
    }

    return 0;
}
