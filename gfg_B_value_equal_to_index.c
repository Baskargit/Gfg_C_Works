#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 ---> Get the Input

        int size;
        scanf("%d",&size);
        int Input[size];
        for(int i=1; i<=size; i++)
        {
            scanf("%d",&Input[i]);
        }

    // Step 2 ---> Find the index

        int flag = 0;
        int counter = 0;

        for(int i=1; i<=size; i++)
        {
            if(i == Input[i]) {
                flag = 1;
                counter++;
                printf("%d ",Input[i]);
            } 
        }
        printf("\n");

        int sameAsIndex[counter];
        int position = 0;

        for(int i=1; i<=size; i++)
        {
            if(i == Input[i]) {
                sameAsIndex[position] = Input[i];
                position++;
            } 
        }

    // Step 3 ---> Print the Result

        if(flag) {
            for(int i=0; i<counter; i++)
            {
                printf("%d ",sameAsIndex[i]);
            }
            printf("\n");
        } else {
            printf("Not Found\n");
        }

    }
    
	return 0;
}