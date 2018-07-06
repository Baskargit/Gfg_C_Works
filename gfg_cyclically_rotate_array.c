#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int size;
        scanf("%d",&size);
        int Input[size];
        for(int i=0; i<size; i++)
        {
            scanf("%d",&Input[i]);
        }

        printf("%d ",Input[(size -1)]);

        for(int i=0; i<(size -1); i++)
        {
            printf("%d ",Input[i]);
        }
        printf("\n");
    }
    
	return 0;
}