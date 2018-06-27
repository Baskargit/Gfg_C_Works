#include<stdio.h>

int main()
{
    int testCaseCount;
    scanf("%d",&testCaseCount); 
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 ----> Get the Input
        int size;
        scanf("%d",&size);
        long int inputArray[size];
        for(int i=0; i<size; i++)
        {
            scanf("%ld",&inputArray[i]);
        }

    // Step 2 ----> Order the array in desc order

        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                if(inputArray[i] < inputArray[j]) {
                    long temp = inputArray[j];
                    inputArray[j] = inputArray[i];
                    inputArray[i] = temp;  
                } 
            }
        }

    // Step 3 ----> Print the output

        printf("%ld\n",inputArray[0]);
    }

    return 0;
}

/*
int main()
{
  // Step 1 ----> Get the Input
    int size = 5;
    long int inputArray[] = {2 ,3 ,4 ,1 ,2};

  // Step 2 ----> Order the array in desc order

    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(inputArray[i] < inputArray[j]) {
                long temp = inputArray[j];
                inputArray[j] = inputArray[i];
                inputArray[i] = temp;  
            } 
        }
    }

    for(int i=0; i<size; i++)
    {
        printf("%ld ",inputArray[i]);
    }

  // Step 3 ----> Print the output

    

    printf("\n");

    return 0;
}
*/