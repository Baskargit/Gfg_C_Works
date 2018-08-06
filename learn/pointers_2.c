#include <stdio.h>

int main()
{
    char *a[] = {"one" , "Next" ,"Variable Length"};

    for(int i=0; i<3; i++)
    {
        printf("Address of a[%d] = %p\n",i,a[i]);
    }

    int b[3][3] = {1,2,3,4,5,6,7,8,9};
    int (*c)[3]; // pointer to an array
    int *d = &b[0][0]; // Just pointer
    c = b;

    printf("Array base address :%u\n",c);

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            // printf("%d --> %u\n",*(*(c+i)+j),(*(c+i)+j));
            printf("i --> %u\n",(d +(i*3+j)));
        }
    } printf("\n");

    return 0;
}