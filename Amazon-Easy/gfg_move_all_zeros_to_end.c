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
        for(int i=0; i<size; i++)
        {
            scanf("%d",&Input[i]);
        }
        int result[size];

    // Step 2 ---> Move all zeros to the end

        int position = 0;

        for(int i=0; i<size; i++)  // Put +ve values into result array
        {
            if(Input[i] > 0) {
                result[position] = Input[i];
                position++;
            }   
        }

        for(int i=position; i<size; i++) // Insert remaining positions with zero
        {
            result[i] = (int)0;
        }

    // Step 3 ---> Print the Result
        
        for(int i=0; i<size; i++)
        {
            printf("%d ",result[i]);
        }

        printf("\n");

    }
    
	return 0;
}

/*
int main()
{
  // Step 1 ---> Get the Input

    int size = 9;
    int Input[] = {0 ,8 ,10 ,6 ,20 ,0 ,2 ,50 ,7};
    int result[size];

    for(int i=0; i<size; i++)
    {
        printf("%d ",Input[i]);
    }

    printf("\n");

  // Step 2 ---> Move all zeros to the end

    int position = 0;

    for(int i=0; i<size; i++)  // Put +ve values into result array
    {
        if(Input[i] > 0) {
            result[position] = Input[i];
            position++;
        }   
    }

    for(int i=position; i<size; i++) // Insert remaining positions with zero
    {
        result[i] = (int)0;
    }

  // Step 3 ---> Print the Result
    
    for(int i=0; i<size; i++)
    {
        printf("%d ",result[i]);
    }

    printf("\n");


    return 0;
}
*/