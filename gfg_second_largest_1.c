#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the Input
        int size;
        scanf("%d",&size);
        int Input[size];
        for(int i=0; i<size; i++)
        {
            scanf("%d",&Input[i]);
        }

    // Step 2 --> Sort in desc Order
        for(int i=0; i<size; i++)
        {
            for(int j=(i+1); j<size; j++)
            {
                if(Input[j] > Input[i]) {
                    int temp = Input[j];
                    Input[j] = Input[i];
                    Input[i] = temp;
                }
            }
        }

    // Step 3 ---> Get the second Largest
        int secondMax = Input[0];

        for(int i=0; i<size; i++)
        {
            if(Input[i] < secondMax) {
                secondMax = Input[i];
                break;
            }
        }

    // Step 4 ----> Print the result
        printf("%d\n",secondMax);
    }
	return 0;
}

/*
int main()
{
  // Step 1 -> Get the Input
    int size;
    scanf("%d",&size);
    int Input[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d",&Input[i]);
    }

  // Step 2 --> Sort in desc Order
    for(int i=0; i<size; i++)
    {
        for(int j=(i+1); j<size; j++)
        {
            if(Input[j] > Input[i]) {
                int temp = Input[j];
                Input[j] = Input[i];
                Input[i] = temp;
            }
        }
    }

    for(int i=0; i<size; i++)
    {
        printf("%d ",Input[i]);
    } printf("\n");

  // Step 3 ---> Get the second Largest

    int secondMax = Input[0];

    for(int i=0; i<size; i++)
    {
        if(Input[i] < secondMax) {
            secondMax = Input[i];
            break;
        }
    }

  // Step 4 ----> Print the result
    printf("%d\n",secondMax);

    return 0;
}
*/