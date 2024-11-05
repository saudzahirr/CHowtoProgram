/*
 * Author  : Saud Zahir
 * Date    : November 04, 2024
 * Contact : m.saud.zahir@gmail.com
 *
 *
 * Topic: Linked Lists
 */

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

typedef struct Node LinkedList;
typedef LinkedList *LinkedListPtr;

void insert(LinkedListPtr *, int *);
int delete(LinkedListPtr *, int *);
_Bool isEmpty(LinkedListPtr);
void printList(LinkedListPtr);
void freeList(LinkedListPtr *);
void options(void);

int main(void) {
    LinkedListPtr sPtr = NULL;

    int data;
    options();
    printf("%s", "? ");
    unsigned int option;
    scanf("%u", &option);

    while (option != 3) {
        switch (option) {
            case 1:
                printf("%s", "Enter an integer: ");
                scanf("%d", &data);
                insert(&sPtr, &data);
                printList(sPtr);
                break;

            case 2:
                if (!isEmpty(sPtr)) {
                    printf("%s", "Enter integer to be deleted: ");
                    scanf("%d", &data);
                    if (delete(&sPtr, &data)) {
                        printf("%d deleted.\n", data);
                        printList(sPtr);
                    }
                    else {
                        printf("%d not found.\n\n", data);
                    }
                }
                else {
                    puts("List is empty.\n");
                }
                break;

            default:
                puts("Invalid choice.\n");
                options();
                break;
        }
        printf("%s", "? ");
        scanf("%u", &option);
    }

    freeList(&sPtr);
    puts("End of run.");

    return 0;
}

void options(void) {
    puts("Enter your choice:\n"
         "1 to insert an element into the list.\n"
         "2 to delete an element from the list.\n"
         "3 to end."
    );
}

void insert(LinkedListPtr *sPtr, int *data) {
    LinkedListPtr nPtr = malloc(sizeof(LinkedList)); // new node pointer

    if (nPtr != NULL) {
        nPtr->data = *data;
        nPtr->next = NULL;

        LinkedListPtr pPtr = NULL; // previous node pointer
        LinkedListPtr cPtr = *sPtr; // current node pointer

        while (cPtr != NULL && *data > cPtr->data) {
            pPtr = cPtr;
            cPtr = cPtr->next;
        }

        if (pPtr == NULL) {
            nPtr->next = *sPtr;
            *sPtr = nPtr;
        }
        else {
            pPtr->next = nPtr;
            nPtr->next = cPtr;
        }
    }
    else {
        puts("Memory not allocated!");
    }
}

int delete(LinkedListPtr *sPtr, int *data) {
    if (*sPtr == NULL) {
        return 0;
    }

    if (*data == (*sPtr)->data) {
        LinkedListPtr tempPtr = *sPtr;
        *sPtr = (*sPtr)->next;
        free(tempPtr);
        return 1;
    }
    else {
        LinkedListPtr pPtr = *sPtr;
        LinkedListPtr cPtr = (*sPtr)->next;

        while (cPtr != NULL && cPtr->data != *data) {
            pPtr = cPtr;
            cPtr = cPtr->next;
        }

        if (cPtr != NULL) {
            LinkedListPtr tempPtr = cPtr;
            pPtr->next = cPtr->next;
            free(tempPtr);
            return 1;
        }
    }

    return 0;
}

_Bool isEmpty(LinkedListPtr sPtr) {
    return sPtr == NULL;
}

void printList(LinkedListPtr cPtr) {
    if (isEmpty(cPtr)) {
        puts("List is empty.\n");
    }
    else {
        puts("The list is:");
        while (cPtr != NULL) {
            printf("%d --> ", cPtr->data);
            cPtr = cPtr->next;
        }
        puts("NULL\n");
    }
}

void freeList(LinkedListPtr *sPtr) {
    LinkedListPtr tempPtr;

    while (*sPtr != NULL) {
        tempPtr = *sPtr;
        *sPtr = (*sPtr)->next;
        free(tempPtr);
    }

    puts("All nodes have been freed.\n");
}
