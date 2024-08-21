/*
 * Author  : Saud Zahir
 * Date    : August 21, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Static Arrays
 */

#include <stdio.h>
#define SIZE 100

int len = 0;

void displayData(unsigned int array[]);
void readData(unsigned int array[]);
void bubbleSort(unsigned int array[]);
unsigned int max(unsigned int array[]);
unsigned int min(unsigned int array[]);
double mean(unsigned int array[]);

int main() {
    unsigned int response[SIZE] = {0};
    readData(response);
    bubbleSort(response);
    displayData(response);
    printf("Mean: %f\n", mean(response));

    return 0;
}

void displayData(unsigned int array[]) {
    for (size_t i = 0; i < SIZE - 1; i++) {
        if (array[i] != 0) {
            i == SIZE - 2 ? printf("%u %u ", array[i], array[i + 1]) : printf("%u ", array[i]);
        }
    }
    puts("");
}

void readData(unsigned int array[]) {
    int read = 0;
    size_t i = 0;

    puts("Reading response data ...");
    puts("Add -1 to stop reading");
    do {
        if (i == SIZE) {
            break;
        }
        else {
            printf("Add data: ");
            scanf("%d", &read);
        }
        if (read != EOF) {
            array[i] = (unsigned int ) read;
            ++i;
            ++len;
        }
    } while (read != EOF);
}

void bubbleSort(unsigned int array[]) {
    // bubble sort
    for (unsigned int pass = 1; pass < SIZE; pass++) {
        for (size_t i = 0; i < SIZE - 1; i++) {
            if (array[i] > array[i + 1]) {
                int hold = array[i];
                array[i] = array[i + 1];
                array[i + 1] = hold;
            }
        }
    }
}

unsigned int max(unsigned int array[]) {
    unsigned int _max = array[0];
    for (size_t i = 1; i < SIZE; i++) {
        if (_max < array[i]) {
            _max = array[i];
        }
    }
    return _max;
}

unsigned int min(unsigned int array[]) {
    unsigned int _min = array[0];
    for (size_t i = 1; i < SIZE; i++) {
        if (_min > array[i]) {
            _min = array[i];
        }
    }
    return _min;
}

double mean(unsigned int array[]) {
    unsigned int sum = 0;
    for (size_t i = 0; i < SIZE; i++) {
        sum += array[i];
    }

    double _mean = (double) sum / len;

    return _mean;
}
