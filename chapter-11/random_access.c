/*
 * Author  : Saud Zahir
 * Date    : October 29, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: A Random-Access File
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 32
#define DATABASE "users.db"

typedef enum {
    MALE = 'M',
    FEMALE = 'F',
    OTHER = '0',
    NONE = '-',
} Gender;

typedef struct {
    unsigned int id;
    char firstName[SIZE];
    char lastName[SIZE];
    unsigned int age;
    Gender gender;
    char address[2 * SIZE];
} User;

unsigned int options(void);
void displayAllUsers(void);
void displayUser(void);
void createUser(void);
void deleteUser(void);

int main(void) {
    unsigned int option;

    while ((option = options()) != 5) {
        switch (option) {
            case 1:
                displayAllUsers();
                break;

            case 2:
                displayUser();
                break;

            case 3:
                createUser();
                break;

            case 4:
                deleteUser();
                break;

            case 5:
                puts("Exit ...");
                break;

            default:
                puts("Wrong option\nChoose again ...");
                break;
        }
    }

    return 0;
}

void displayAllUsers(void) {
    FILE *fPtr = fopen(DATABASE, "rb");
    if (fPtr == NULL) {
        perror("Error opening file");
        return;
    }

    User user;
    while (fread(&user, sizeof(User), 1, fPtr) == 1) {
        if (user.id != 0) {
            printf("ID: %u\nName: %s %s\nAge: %u\nGender: %c\nAddress: %s\n\n",
                   user.id, user.firstName, user.lastName,
                   user.age, user.gender, user.address);
        }
    }

    fclose(fPtr);
}

void displayUser(void) {
    FILE *fPtr = fopen(DATABASE, "rb");
    if (fPtr == NULL) {
        perror("Error opening file");
        return;
    }

    printf("Enter user id: ");
    unsigned int id;
    scanf("%u", &id);

    User user;
    int search = 0;
    if ((fseek(fPtr, (id - 1) * sizeof(User), SEEK_SET) == 0) && (fread(&user, sizeof(User), 1, fPtr) == 1)) {
        if (user.id == id) {
            printf("ID: %u\nName: %s %s\nAge: %u\nGender: %c\nAddress: %s\n\n",
                   user.id, user.firstName, user.lastName,
                   user.age, user.gender, user.address);
            search = 1;
        }
    }

    if (!search) {
        printf("No user found with ID: %u\n", id);
    }

    fclose(fPtr);
}

void createUser(void) {
    FILE *fPtr = fopen(DATABASE, "rb+");
    if (fPtr == NULL) {
        fPtr = fopen(DATABASE, "wb+");
        if (fPtr == NULL) {
            perror("Error creating file");
            return;
        }
    }

    User user;
    unsigned int id = 0;

    while (fread(&user, sizeof(User), 1, fPtr) == 1) {
        if (user.id > id) {
            id = user.id;
        }
    }
    id++;

    User newUser = {.id = id};
    char gender;

    printf("Enter first name: ");
    scanf("%s", newUser.firstName);
    printf("Enter last name: ");
    scanf("%s", newUser.lastName);
    printf("Enter age: ");
    scanf("%u", &newUser.age);
    printf("Enter gender (M/F/0): ");
    scanf(" %c", &gender);
    printf("Enter address: ");
    scanf(" %[^\n]s", newUser.address);

    newUser.gender = (Gender) gender;

    fseek(fPtr, 0, SEEK_END);
    fwrite(&newUser, sizeof(User), 1, fPtr);
    fclose(fPtr);
}

void deleteUser(void) {
    FILE *fPtr = fopen(DATABASE, "rb+");
    if (fPtr == NULL) {
        perror("Error opening file");
        return;
    }

    printf("Enter user id: ");
    unsigned int id;
    scanf("%u", &id);

    User user;
    int search = 0;
    if ((fseek(fPtr, (id - 1) * sizeof(User), SEEK_SET) == 0) && (fread(&user, sizeof(User), 1, fPtr) == 1)) {
        if (user.id == id) {
            User nullUser = {0};
            fseek(fPtr, (id - 1) * sizeof(User), SEEK_SET);
            fwrite(&nullUser, sizeof(User), 1, fPtr);
            search = 1;
            printf("User with ID %u deleted successfully.\n", id);
        }
    }

    if (!search) {
        printf("No user found with ID %u.\n", id);
    }

    fclose(fPtr);
}

unsigned int options(void) {
    printf("%s", "\nOptions:\n"
                 "1) Display all users\n"
                 "2) Display a user\n"
                 "3) Create a user\n"
                 "4) Delete a user\n"
                 "5) Exit\n? ");

    unsigned int option;
    scanf("%u", &option);

    return option;
}

/*
NOTE:
    Records in a file created with the formatted output function fprintf
    are not necessarily of the same length. However, individual records
    that you write to and read from a random-access file are normally fixed
    in length and may be accessed directly (and thus quickly) without searching
    through other records. This makes random-access files appropriate for
    transaction-processing systems that require rapid access to specific data.
    There are other ways of implementing random-access files, but we’ll limit
    our discussion to this straightforward approach using fixed-length records.

    Because every record in a random-access file normally has the same length,
    the exact location of a record relative to the beginning of the file can be
    calculated as a function of the record key.

    Fixed-length records enable data to be inserted in a random-access file
    without destroying other data in the file. Data stored previously can also
    be updated or deleted without rewriting the entire file.

    Function fwrite transfers a specified number of bytes beginning at a specified
    location in memory to a file. The data is written beginning at the location in
    the file indicated by the file position pointer. Function fread transfers a
    specified number of bytes from the location in the file specified by the file
    position pointer to an area in memory beginning with a specified address. Now,
    when writing a four-byte integer, instead of using

        fprintf(fPtr, "%d", number);

    which could print a single digit or as many as 11 digits (10 digits plus a sign,
    each of which requires at least one byte of storage, based on the character set for
    the locale), we can use

        fwrite(&number, sizeof(int), 1, fPtr);

    which always writes four bytes on a system with four-byte integers from a variable
    number to the file represented by fPtr (we’ll explain the 1 argument shortly). Later,
    fread can be used to read those four bytes into an integer variable number. Although
    fread and fwrite read and write data, such as integers, in fixed-size rather than
    variable-size format, the data they handle are processed in computer “raw data” format
    (i.e., bytes of data) rather than in printf’s and scanf’s human-readable text format.
    Because the “raw” representation of data is system dependent, “raw data” may not be
    readable on other systems, or by programs produced by other compilers or with other
    compiler options.

    Functions fwrite and fread are capable of reading and writing arrays of data to and
    from files. The third argument of both fread and fwrite is the number of elements in
    the array that should be read from or written to a file. The preceding fwrite function
    call writes a single integer to a file, so the third argument is 1 (as if one element
    of an array were being written). File-processing programs rarely write a single field
    to a file. Normally, they write one struct at a time.

    fseek Function Prototype
    The function prototype for fseek is

        int fseek(FILE *stream, long int offset, int whence);

    where offset (displacement) is the number of bytes to seek from whence in the file
    pointed to by stream—a positive offset seeks forward and a negative one seeks backward.
    Argument whence is one of the values SEEK_SET, SEEK_CUR or SEEK_END (all defined in
    <stdio.h>), which indicate the location from which the seek begins. SEEK_SET indicates
    that the seek starts at the beginning of the file; SEEK_CUR indicates that the seek
    starts at the current location in the file; and SEEK_END indicates that the seek is
    measured from at the end of the file.

    The byte positions in the file start with 0 and the symbolic constant SEEK_SET
    indicates that the file position pointer is positioned relative to the beginning
    of the file by the amount of the offset.

    Error Checking
    Industrial-strength programs perform error checking by return values. Function fscanf
    returns the number of data items successfully read or the value EOF if a problem occurs
    while reading data. Function fseek returns a nonzero value if the seek operation cannot
    be performed (e.g., attempting to seek to a position before the start of the file).
    Function fwrite returns the number of items it successfully output. If this number is
    less than the third argument in the function call, then a write error occurred.

    Function fread reads a specified number of bytes from a file into memory. For example,

        fread(&instance, sizeof(object), n, fPtr);

    reads the number of bytes determined by sizeof(object) from the file referenced by
    fPtr, stores the data and returns the number of bytes read. The bytes are read from
    the location specified by the file position pointer. Function fread can read several
    fixed-size array elements by providing a pointer to the array in which the elements will
    be stored and by indicating the number of elements to be read. The preceding statement
    reads one element. To read more than one, specify the number of elements as fread’s
    third argument. Function fread returns the number of items it successfully input. If this
    number is less than the third argument in the function call, then a read error occurred.
*/
