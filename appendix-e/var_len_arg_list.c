/*
 * Author  : Saud Zahir
 * Date    : August 12, 2024
 * Contact : m.saud.zahir@gmail.com
 * 
 * Topic: variable-length argument lists for macros.
*/


#include "stdio.h"

#define DEBUG(...) printf(__TIME__ " DEBUG : " __VA_ARGS__)
#define INFO(...) printf(__TIME__ " INFO : " __VA_ARGS__)
#define WARNING(...) printf(__TIME__ " WARNING : " __VA_ARGS__)
#define ERROR(...) printf(__TIME__ " ERROR : " __VA_ARGS__)

int main() {
    INFO("%s\n", "Initializing ...");
    DEBUG("%s = %f\n", "PI", 3.141592654);

    return 0;
}

/*
NOTE:
    The identifier __VA_ARGS__, which begins and ends
    with two under-scores, is a placeholder for the
    variable-length argument list.
    The DEBUG macro (wrapper around function printf)
    takes a variable number of arguments, as indicated
    by the ... in the argument list.
*/