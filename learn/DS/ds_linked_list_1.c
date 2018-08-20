/* 
In this Program lists are created in the Heap but the head(Pointer) will reside in stack portion
of the Program memory
*/

#include <stdio.h>
#include <stdlib.h>
#pragma pack(1) // Eliminates Structure Padding for the list member (int data)

struct list 
{
    int data;
    struct list *nxtPtr; // Self-reference
};

void createLists(struct list **headPointer,struct list **tailPointer,int listSize);
void showLists(struct list *headPointer);
void insertAtHead(struct list **headPointer ,int value);
void insertAtArbitaryPos(struct list *headPointer ,int position ,int value);
void insertAtTail(struct list *tailPointer,int value);
void deleteNode(int position);
void copyList(struct list *destination , struct list *source);
void deleteList(struct list *pointer);

void createLists(struct list **headPointer,struct list **tailPointer,int listSize) // Create
{
    struct list *nodes[listSize];

    for(int i=0; i<listSize; i++)
    {
        nodes[i] = (struct list *) malloc((sizeof(struct list)));
    }

    for(int i=0; i<listSize; i++)
    {
        if(i != (listSize - 1)) {
            nodes[i]->data = i+1;
            nodes[i]->nxtPtr = nodes[i+1];
        } else {
            nodes[i]->data = i+1;
            nodes[i]->nxtPtr = NULL;
            *tailPointer = nodes[i];
        }
    }

    *headPointer = nodes[0];
}

void showLists(struct list *nodePointer) // Show
{
    while (nodePointer != NULL)
    {
        printf("%d\n",nodePointer->data);
        nodePointer = nodePointer->nxtPtr;
    }
}

void insertAtHead(struct list **headPointer ,int value) // Insert (H)
{
    struct list *newHead;
    newHead = (struct list *) malloc(sizeof(struct list));
    newHead->data = value;
    newHead->nxtPtr = *headPointer;

    *headPointer = newHead;
}

void insertAtTail(struct list *tailPointer,int value) // Insert (T)
{
    struct list *newTail;
    newTail = (struct list *) malloc(sizeof(struct list));

    tailPointer->nxtPtr = newTail;
    newTail->data = value;
    newTail->nxtPtr = NULL;
}

void insertAtArbitaryPos(struct list *headPointer ,int position ,int value) // Insert (Arb)
{
    struct list *newNode;
    newNode = (struct list *)malloc(sizeof(struct list));
    newNode->data = value;

    struct list *nxtPointer;
    nxtPointer = headPointer;

    for(int i=1; i<=position; i++)
    {
        if(i == position) {
            newNode->nxtPtr = nxtPointer->nxtPtr;
            nxtPointer->nxtPtr = newNode;
        }
        nxtPointer = nxtPointer->nxtPtr;
    }
}

void deleteList(struct list *pointer) // Free
{
    struct list *ptr;
    ptr = pointer;
    for(;pointer != NULL;)
    {
        ptr = pointer->nxtPtr;
        free(pointer);
        pointer = ptr;
    }

    printf("Memory freed (or) List Deleted successfully\n");
}

int main()
{
    int listSize = 5;
    struct list *head; // This will be created on the Stack Portion of the program memory
    struct list *tail;
    head = NULL;
    tail = NULL;

    printf("Initial List :\n");
    createLists(&head,&tail,listSize);
    showLists(head);

    int newData = 2000;
    printf("Inserion new Node before Existing head : (Head Ins)\n");
    insertAtHead(&head,newData);
    showLists(head);

    int tailData = 20;
    printf("Inserting new Node at end : (Tails Ins)\n");
    insertAtTail(tail,tailData); 
    showLists(head);

    int arbPosVal = 200;
    printf("Arbitary Position Isertion : (Arb Pos Ins)\n");
    insertAtArbitaryPos(head,3,arbPosVal);
    showLists(head);

    printf("Delete the Whole List by Breaking Logical Connection :\n");
    deleteList(head);

    return 0;
}
