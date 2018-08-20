#include <stdio.h>
#pragma pack(1) // This eliminates the structure padding
// Ref : https://fresh2refresh.com/c-programming/c-struct-memory-allocation/
// Ref : https://fresh2refresh.com/c-programming/c-structure-padding/

struct linkedList
{
    int data;
    struct linkedList *nextElement;
};

// Implementation of the Linked list "Without Dynamic memory allocation (Heap Memory)"

int main()
{
    struct linkedList head;
    struct linkedList second;
    struct linkedList third;

    head.data = 1;
    head.nextElement = &second;

    second.data = 2;
    second.nextElement = &third;

    third.data = 3;
    third.nextElement = NULL;

    printf("Size of Struct Linked List is :%ld\n",sizeof(struct linkedList));
    printf("Head Pointer :%p\n",head.nextElement);
    printf("Second Pointer :%p\n",second.nextElement);
    printf("Third Pointer :%p\n",third.nextElement);

    printf("\nTravarse through the Single Linked List :\n");

    struct linkedList *traverse;
    traverse = &head;
    printf("Traverse Pointer is :%p\n\n",traverse);

    while(traverse != NULL) {
        printf("%d -> with size of %ld -->%p\n",traverse->data,sizeof(traverse->data),(&traverse->data));
        traverse = traverse->nextElement;
        printf("Next element is :%p with size of %ld\n",traverse,sizeof(traverse->nextElement));
        printf("\n");
    } 

    return 0;
}