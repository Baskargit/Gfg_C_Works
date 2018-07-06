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

        int onesCount = 0;
        int zerosCount = 0;

        for(int i=0; i<size; i++)
        {
            if(Input[i] == 1) {
                onesCount++;
            } else {
                zerosCount++;
            }
        }

        for(int i=0; i<zerosCount; i++)
        {
            printf("0 ");
        }

        for(int i=0; i<onesCount; i++)
        {
            printf("1 ");
        }

        printf("\n");
    }
   
	return 0;
}