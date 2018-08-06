#include <stdio.h>

int main()
{
    // 1D array

    int arr[10] = {1,2,3}; 
    int *ptr;
    ptr = arr; // Normal Pointer pointing arr[0] or zeroth element of array "arr"

    printf("Array Base address :%p\n",ptr);

    // 2D of Known column size

    int two_Dim_known[3][3] = {1,2,3,4,5,6,7,8,9};
    int *knownPtr[3][3];
    knownPtr[0][0] = &two_Dim_known[0][0];

    printf("\n2D array base address %p\n",two_Dim_known);
    printf("Array of 2D Pointer Base address :%p\n",knownPtr[0][0]);
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ",(*(knownPtr[0][0] + (i * 3) + j)));
        }
    } printf("\n");

    // 2D of unknown column size

    char *unknown2DColumn[] = {"sdsdsd" , "we" , "12dsscscscscscs"};

    printf("\nThree string with various length\n");
    for(int i=0; i<3; i++)
    {
        printf("%s ---> %u\n",unknown2DColumn[i],i[unknown2DColumn]);
    }

    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int *b[10];

    printf("\n");
    printf("Array a base address :%p\n",a);
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d---> %p === %d\n",i,(*(a+i)+j),a[i][j]);
        }
    }
    

    return 0;
}