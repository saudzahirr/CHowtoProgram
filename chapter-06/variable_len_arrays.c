/*
 * Author  : Saud Zahir
 * Date    : September 04, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * 
 * Topic: Varible-Length Arrays
*/

#include <stdio.h>

int main() {
    int size;
    puts("Enter array size:");
    scanf("%u", &size);
    int array[size];

    puts("Assign array elements:");
    for (size_t i = 0; i < size; i++) {
        printf("a[%u] = ", i);
        scanf("%d", &array[i]);
    }

    return 0;
}
