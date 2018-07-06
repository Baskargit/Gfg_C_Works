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
        
        int rotateFrom;
        scanf("%d",&rotateFrom);

        for(int i=rotateFrom; i<size; i++)
        {
            printf("%d ",Input[i]);
        }

        for(int i=0; i<rotateFrom; i++)
        {
            printf("%d ",Input[i]);
        }
        printf("\n");
    }
    
	return 0;
}