/*
 * Author  : Saud Zahir
 * Date    : October 29, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Creating a Sequential-Access File
 */

#include <stdio.h>
#define SIZE 32

int main(void) {
    FILE *cfPtr;

    if ((cfPtr = fopen("clients.txt", "w")) == NULL) {
        puts("File could not be opened");
    }
    else {
        puts("Enter the account, name, and balance.");
        puts("Enter EOF to end input.");
        printf("%s", "? ");

        unsigned int account; // account number
        char name[SIZE];        // account name
        double balance;       // account balance

        scanf("%d%29s%lf", &account, name, &balance);
        while (!feof(stdin)) {
            fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
            printf("%s", "? ");
            scanf("%d%29s%lf", &account, name, &balance);
        }

        fclose(cfPtr);
    }

    return 0;
}

/*
NOTE:
    C imposes no structure on a file. Thus, notions such as a record of a file
    are not part of the C language.
*/
