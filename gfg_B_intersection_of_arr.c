#include<stdio.h>
int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount); 
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 ----> Get the Input
        int arrayOneSize;
        scanf("%d",&arrayOneSize);
        int arrayTwoSize;
        scanf("%d",&arrayTwoSize);
        int totalSize = (arrayOneSize + arrayTwoSize);

        int arrayOne[arrayOneSize];
        for(int i=0; i<arrayOneSize; i++)
        {
            scanf("%d",&arrayOne[i]);
        }
        int arrayTwo[arrayTwoSize];
        for(int i=0; i<arrayTwoSize; i++)
        {
            scanf("%d",&arrayTwo[i]);
        }
        
        int arrayThree[totalSize];

    // Step 2 ---> Insert both array into single array

        int position = 0;
        for(int i=0; i<arrayOneSize; i++)
        {
            arrayThree[position] = arrayOne[i];
            position++;
        }

        for(int j=0; j<arrayTwoSize; j++)
        {
            arrayThree[position] = arrayTwo[j];
            position++;
        }

    // Step 3 ---> Sort in asce order

        for(int i=0; i<position; i++)
        {
            for(int j=i+1; j<position; j++)
            {
                if(arrayThree[j] < arrayThree[i]) {
                    int temp = arrayThree[j];
                    arrayThree[j] = arrayThree[i];
                    arrayThree[i] = temp;
                }
            }
        }

    // Step 4 ---> Check for duplicates

        int flag = 0;

        for(int i=0; i<totalSize; i++)
        {
            for(int j=i+1; j<totalSize; j++)
            {
                if(arrayThree[i] == arrayThree[j]) {
                    // printf("%d ",arrayThree[i]);
                    flag = 1;
                    i = totalSize;
                    break;
                } else {
                    flag = 0;
                }
            }
        }

    // Step 5 ---> Print the result based on the flag

        if(flag) {
           for(int i=0; i<totalSize; i++)
            {
                for(int j=i+1; j<totalSize; j++)
                {
                    if(arrayThree[i] == arrayThree[j]) {
                        printf("%d ",arrayThree[i]);
                    } 
                }
            } 
            printf("\n");
        } else {
            printf("Zero\n");
        }

    }
    return 0;
}
/*