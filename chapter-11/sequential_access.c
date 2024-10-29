/*
 * Author  : Saud Zahir
 * Date    : October 29, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: A Sequential-Access File
 */

#include <stdio.h>
#define SIZE 32

void write(FILE *);
void read(FILE *);

int main(void) {
    FILE *fPtr;

    if ((fPtr = fopen("clients.dat", "a+")) == NULL) {
        puts("File could not be opened");
    }
    else {
        write(fPtr);
        rewind(fPtr);
        read(fPtr);
        fclose(fPtr);
    }

    return 0;
}

void write(FILE *fPtr) {
    unsigned int account;
    char name[SIZE];
    double balance;

    puts("Enter account number, name, and balance (EOF to end input):");
    printf("Account Name Balance\n");
    while (scanf("%d%31s%lf", &account, name, &balance) == 3) {
        fprintf(fPtr, "%d %s %.2f\n", account, name, balance);
    }
}

void read(FILE *fPtr) {
    unsigned int account;
    char name[SIZE];
    double balance;

    printf("\n%-10s%-13s%s\n", "Account", "Name", "Balance");

    while (fscanf(fPtr, "%d%31s%lf", &account, name, &balance) == 3) {
        printf("%-10d%-13s%7.2f\n", account, name, balance);
    }
}

/*
NOTE:
    C imposes no structure on a file. Thus, notions such as a record of a file
    are not part of the C language.

    A C program administers each file with a separate FILE structure. Each open
    file must have a separately declared pointer of type FILE that’s used to refer
    to the file. The FILE structure leads indirectly to the operating system’s 'file
    control block' (FCB) for a file.

    The file pointer cfPtr is assigned a pointer to the FILE structure for the file
    opened with fopen. Function fopen takes two arguments:

        1. a filename (which can include path information leading to the file’s location) and
        2. a file open mode.

    If function fclose is not called explicitly, the operating system normally will close the
    file when program execution terminates.

    Closing a file can free resources for which other users or programs may be waiting, so close
    each file as soon as it’s no longer needed rather than waiting for the operating system to
    close it at program termination.

    1. File Open Modes

    r   Open an existing file for reading.

    w   Create a file for writing. If the file already exists, discard the current contents.

    a   Open or create a file for writing at the end of the file—i.e., write operations
        append data to the file.

    r+  Open an existing file for update (reading and writing).

    w+  Create a file for reading and writing. If the file already exists, discard the current
        contents.

    a+  Open or create a file for reading and updating; all writing is done at the end of the
        file—i.e., write operations append data to the file.

    rb  Open an existing file for reading in binary mode.

    wb  Create a file for writing in binary mode. If the file already exists, discard the
        current contents.

    ab  Append: open or create a file for writing at the end of the file in binary mode.

    rb+ Open an existing file for update (reading and writing) in binary mode.

    wb+ Create a file for update in binary mode. If the file already exists, discard the
        current contents.

    ab+ Append: open or create a file for update in binary mode; writing is done at the
        end of the file.

    In addition, C11 provides exclusive write mode, which you indicate by adding an x to the
    end of the w, w+, wb or wb+ modes. In exclusive write mode, fopen will fail if the file
    already exists or cannot be created. If opening a file in exclusive write mode is successful
    and the underlying system supports exclusive file access, then only your program can access
    the file while it’s open. (Some compilers and platforms do not support exclusive write mode.)
    If an error occurs while opening a file in any mode, fopen returns NULL.

    2. Resetting the File Position Pointer

    To retrieve data sequentially from a file, a program normally starts reading from the
    beginning of the file and reads all data consecutively until the desired data is found.
    It may be desirable to process the data sequentially in a file several times (from the
    beginning of the file) during the execution of a program. The statement

        rewind(cfPtr);

    causes a program’s file position pointer—which indicates the number of the next byte in
    the file to be read or written—to be repositioned to the beginning of the file (i.e., byte 0)
    pointed to by fPtr. The 'file position pointer' is not really a pointer. Rather it’s an integer
    value that specifies the byte in the file at which the next read or write is to occur. This is
    sometimes referred to as the 'file offset'. The file position pointer is a member of the FILE
    structure associated with each file.
*/
