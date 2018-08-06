#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *heap;

    heap = (int *) malloc(5*sizeof(int));  // malloc
    printf("Allocated heap address :%p\n",heap);
    
    for(int i=0; i<5; i++)
    {
        heap[i] = 5+6;
    }

    for(int i=0; i<6; i++)
    {
        printf("%d ",heap[i]);
    } printf("\n");

    heap = realloc(heap,10*sizeof(int)); // realloc size increase
    printf("Re-Allocated(Increased size) heap address :%p\n",heap);
    for(int i=5; i<8; i++)
    {
        heap[i] = 78;
    }
    for(int i=0; i<8; i++)
    {
        printf("%d ",heap[i]);
    } printf("\n");
    
    free(heap); // free
    heap = NULL; // avoid dangling pointer
    return 0;
    
}