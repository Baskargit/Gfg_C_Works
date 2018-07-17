#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int size;
        scanf("%d",&size);
        int rotateBy;
        scanf("%d",&rotateBy);
        int array[size];
        for(int i=0; i<size; i++)
        {
            scanf("%d",&array[i]);
        }

        for(int i=0; i<rotateBy; i++)
        {
            for(int j=0; j<(size - 1); j++)
            {
                int temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }

        for(int i=0; i<size; i++)
        {
            printf("%d ",array[i]);
        }
        printf("\n");
    }
	return 0;
}

/*
int main()
{
    int size = 5;
    int rotateBy = 2;
    int array[] = {1 ,2 ,3 ,4 ,5};

    for(int i=0; i<rotateBy; i++)
    {
        for(int j=0; j<(size - 1); j++)
        {
            int temp = array[j+1];
            array[j+1] = array[j];
            array[j] = temp;
        }
    }

    for(int i=0; i<size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    return 0;
}
*/