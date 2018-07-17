#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int size;
        scanf("%d",&size);
        int array[size];
        for(int i=0; i<size; i++)
        {
            scanf("%d",&array[i]);
        }

        for(int i=(size - 1); i>=0; i--)
        {
            printf("%d ",array[i]);
        }
    }
	return 0;
}
