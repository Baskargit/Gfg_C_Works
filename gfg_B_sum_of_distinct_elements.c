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

    // Step 2 ---> Replace Duplicates with '\0'

        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                if(Input[i] == Input[j]) {
                    Input[j] = '\0';
                }
            }
        }

    // Step 3 ---> Add those values till size

        int sum = 0;

        for(int i=0; i<size; i++)
        {
            sum = sum + Input[i];
        }

    // Step 4 ---> Print the Result

        printf("%d\n",sum);

    }
    
	return 0;
}

/*
int main()
{
  // Step 1 ---> Get the Input

    int size = 5;
    int Input[] = {1,2,3,4,5};

  // Step 2 ---> Replace Duplicates with '\0'

    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(Input[i] == Input[j]) {
                Input[j] = '\0';
            }
        }
    }

    printf("Duplicates Removed Array :\n");

    for(int i=0; i<size; i++)
    {
        printf("%d ",Input[i]);
    }

    printf("\n");

  // Step 3 ---> Add those values till size

    int sum = 0;

    for(int i=0; i<size; i++)
    {
        sum = sum + Input[i];
    }

  // Step 4 ---> Print the Result

    printf("%d\n",sum);

    return 0;
}
*/
