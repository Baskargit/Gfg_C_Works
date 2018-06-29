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

        for(int i=0; i<totalSize; i++)
        {
            for(int j=i+1; j<totalSize; j++)
            {
                if(arrayThree[i] == arrayThree[j]) {
                    arrayThree[j] = '\0';
                }
            }
        }

    // Step 5 ---> Print the result

        for(int i=0; i<totalSize; i++)
        {
            if(arrayThree[i] != 0) {
                printf("%d ",arrayThree[i]);
            }
        }
        printf("\n");
    }
    
	return 0;
}
/*
int main()
{
  // Step 1 ----> Get the Input
    int arrayOneSize = 3;
    int arrayTwoSize = 3;
    int totalSize = (arrayOneSize + arrayTwoSize);

    // int arrayOne[] = {1 ,2 ,3 ,4 ,5};
    // int arrayTwo[] = {1 ,2 ,3};
    // int arrayTwo[] = {1 ,2 ,3 ,4 ,5};
    // int arrayOne[] = {1 ,2 ,3};
    int arrayTwo[] = {1 ,2 ,3};
    int arrayOne[] = {11 ,21 ,31};

  // Step 2 ----> Get the final arraysize

    int finalArraySize = 0;

    for(int i=0; i<arrayOneSize; i++)
    {
        for(int j=0; j<arrayTwoSize; j++)
        {
            if(arrayOne[i] == arrayTwo[j]) {
                finalArraySize++;
            }
        }
    }

    finalArraySize = (totalSize - finalArraySize);

    printf("Final array Size : %d\n",finalArraySize);

    int finalArray[(finalArraySize)];

  // Step 3 ----> Insert non-dups into the new array

    if(finalArraySize > 0) 
    {
        int position = 0;
        if(arrayOneSize > arrayTwoSize) {
            for(int i=0; i<arrayOneSize; i++)
            {
                for(int j=0; j<arrayTwoSize; j++)
                {
                    if(arrayOne[i] == arrayTwo[j]) {
                        finalArray[position] = arrayTwo[i];
                        position++;
                    } else {
                        finalArray[position] = arrayOne[i];
                        position++;
                    }
                }
            }

            printf("Arr1>Arr2 position is %d:\n",position);

            for(int i=0; i<position; i++)
            {
                for(int j=i+1; j<position; j++)
                {
                    if(finalArray[j] < finalArray[i]) {
                        int temp = finalArray[j];
                        finalArray[j] = finalArray[i];
                        finalArray[i] = temp;
                    }
                }
            }

            int incrementer = 0;
            int finSize = 0;

            for(int i=0; i<position; i++) // Insert null in duplicate positions
            {
                for(int j=i+1; j<position; j++)
                {
                    if(finalArray[i] == finalArray[j]) {
                        finalArray[j] = '\0';
                        incrementer++;
                        finSize++;
                    }
                }
                i = i+incrementer;
                incrementer = 0;
            }
            printf("Finsize :%d\n",finSize);

            int finalArray1[finalArraySize];
            int pos = 0;

            for(int i=0; i<position; i++)
            {
                if(finalArray[i] != 0) {
                    finalArray1[pos] = finalArray[i];
                    pos++;
                }
            }

            for(int i=0; i<position; i++)
            {
                printf("%d ",finalArray[i]);
            }
            printf("\n");
            
            for(int i=0; i<pos; i++)
            {
                printf("%d ",finalArray1[i]);
            }
            printf("\n");
        } 
        else if (arrayTwoSize > arrayOneSize) // arr 2 > arr
        {
            for(int i=0; i<arrayTwoSize; i++)
            {
                for(int j=0; j<arrayOneSize; j++)
                {
                    if(arrayTwo[i] == arrayOne[j]) {
                        finalArray[position] = arrayOne[i];
                        position++;
                    } else {
                        finalArray[position] = arrayTwo[i];
                        position++;
                    }
                }
            }

            for(int i=0; i<position; i++)
            {
                printf("%d ",finalArray[i]);
            }
            printf("\n");

            for(int i=0; i<position; i++)
            {
                for(int j=i+1; j<position; j++)
                {
                    if(finalArray[j] < finalArray[i]) {
                        int temp = finalArray[j];
                        finalArray[j] = finalArray[i];
                        finalArray[i] = temp;
                    }
                }
            }

            for(int i=0; i<position; i++)
            {
                printf("%d ",finalArray[i]);
            }
            printf("\n");

            int incrementer = 0;
            int finSize = 0;

            for(int i=0; i<position; i++) // Insert null in duplicate positions
            {
                for(int j=i+1; j<position; j++)
                {
                    if(finalArray[i] == finalArray[j]) {
                        finalArray[j] = '\0';
                        incrementer++;
                        finSize++;
                    }
                }
                i = i+incrementer;
                incrementer = 0;
            }
            printf("Finsize :%d\n",finSize);

            int finalArray1[finalArraySize];
            int pos = 0;

            for(int i=0; i<position; i++)
            {
                if(finalArray[i] != 0) {
                    finalArray1[pos] = finalArray[i];
                    pos++;
                }
            }

            for(int i=0; i<position; i++)
            {
                printf("%d ",finalArray[i]);
            }
            printf("\n");
            
            for(int i=0; i<pos; i++)
            {
                printf("%d ",finalArray1[i]);
            }
            printf("\n");
        }
        
    } else {
        printf("Inside the else :\n");
        int position = 0;
        int finalArray[totalSize];

        for(int i=0; i<arrayOneSize; i++)
        {
            finalArray[position] = arrayOne[i];
            position++;
        }

        for(int i=0; i<position; i++)
        {
            printf("%d ",finalArray[i]);
        }
        printf("\n");

        for(int i=0; i<arrayTwoSize; i++)
        {
            finalArray[position] = arrayTwo[i];
            position++;
        }

        for(int i=0; i<position; i++)
        {
            printf("%d ",finalArray[i]);
        }
        printf("\n");

        for(int i=0; i<totalSize; i++)
        {
            for(int j=i+1; j<totalSize; j++)
            {
                if(finalArray[j] < finalArray[i]) {
                    int temp = finalArray[j];
                    finalArray[j] = finalArray[i];
                    finalArray[i] = temp;
                }
            }
        }

        int incrementer = 0;
        int finSize = 0;

        for(int i=0; i<position; i++) // Insert null in duplicate positions
        {
            for(int j=i+1; j<position; j++)
            {
                if(finalArray[i] == finalArray[j]) {
                    finalArray[j] = '\0';
                    incrementer++;
                    finSize++;
                }
            }
            i = i+incrementer;
            incrementer = 0;
        }
        printf("Finsize :%d\n",finSize);

        int finalArray1[finalArraySize];
        int pos = 0;

        for(int i=0; i<position; i++)
        {
            if(finalArray[i] != 0) {
                finalArray1[pos] = finalArray[i];
                pos++;
            }
        }

        for(int i=0; i<position; i++)
        {
            printf("%d ",finalArray[i]);
        }
        printf("\n");
        
        for(int i=0; i<pos; i++)
        {
            printf("%d ",finalArray1[i]);
        }
        printf("\n");

    }

    return 0;
}
*/

/*
int main()
{
  // Step 1 ----> Get the Input
    int arrayOneSize = 3;
    int arrayTwoSize = 5;
    int totalSize = (arrayOneSize + arrayTwoSize);

    // int arrayOne[] = {1 ,2 ,3 ,4 ,5};
    // int arrayTwo[] = {1 ,2 ,3};
    int arrayTwo[] = {1 ,2 ,3 ,4 ,5};
    int arrayOne[] = {1 ,2 ,3};
    //int arrayTwo[] = {1 ,2 ,3};
    //int arrayOne[] = {11 ,21 ,31};
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

    printf("All valued array not Sorted:\n");

    for(int i=0; i<totalSize; i++)
    {
        printf("%d ",arrayThree[i]);
    }

    printf("\n");

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

    printf("All valued array Asec order sorted:\n");

    for(int i=0; i<totalSize; i++)
    {
        printf("%d ",arrayThree[i]);
    }

    printf("\n");

  // Step 4 ---> Check for duplicates

    for(int i=0; i<totalSize; i++)
    {
        for(int j=i+1; j<totalSize; j++)
        {
            if(arrayThree[i] == arrayThree[j]) {
                arrayThree[j] = '\0';
            }
        }
    }

    printf("All valued array Dups removed and sorted:\n");

    for(int i=0; i<totalSize; i++)
    {
        printf("%d ",arrayThree[i]);
    }

    printf("\n");

  // Step 5 ---> Print the result

    for(int i=0; i<totalSize; i++)
    {
        if(arrayThree[i] != 0) {
            printf("%d ",arrayThree[i]);
        }
    }

    printf("\n");
    
    return 0;
}
*/
