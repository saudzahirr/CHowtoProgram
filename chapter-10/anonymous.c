/*
 * Author  : Saud Zahir
 * Date    : October 27, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Anonymous Structures and Unions
 */

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[64];
    int age;
    union {
        char address[128];
        char phone_number[20];
    };
} User;

int main(void) {
    User user;
    User *uPtr = &user;

    strcpy(uPtr->name, "Bob");
    user.age = 23;
    strcpy(uPtr->address, "Oxford");

    printf("Name: %s\nAge:%d\nAddress:%s\n",
            user.name, user.age, user.address);

    strcpy(uPtr->phone_number, "(***) ***-****");
    printf("Phone Number: %s\n", user.phone_number);

    return 0;
}

/*
NOTE:
    C11 now supports anonymous structs and unions that can
    be nested in named structs and unions. The members in a
    nested anonymous struct or union are considered to be
    members of the enclosing struct or union and can be accessed
    directly through an object of the enclosing type.
*/
