#include<stdio.h>

int main()
{
    int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 ----> Get the Input

        int number;
        scanf("%d",&number);
        int binary[9];

        if(number > 1) 
        {
        // Step 2 ----> Convert to binary

            int iterationCount = 0;
            int numerator = number;
            int remainder = 0;

            for(int i=0; numerator != 1; i++)
            {
                remainder = numerator % 2;
                numerator = numerator / 2;
                binary[i] = remainder;
                iterationCount++;
                if(numerator == 1)
                {
                    binary[iterationCount] = numerator;
                    iterationCount++;
                }
            }

        // Step 3 ----> Print the output

            for(int i=iterationCount-1; i>=0; i--)
            {
                printf("%d",binary[i]);
            }

        // Step 4 ----> Flush the binary with all null characters

            for(int i=0; i<iterationCount; i++)
            {
                binary[i] = '\0';
            }
            printf("\n");

        } else {
            printf("1\n");
        } 
    }
    return 0;
}

/*
int main()
{
  // Step 1 ----> Get the Input

    int number = 2;
    int binary[9];

    if(number > 1) 
    {
    // Step 2 ----> Convert to binary

        int iterationCount = 0;
        int numerator = number;
        int remainder = 0;

        for(int i=0; numerator != 1; i++)
        {
            remainder = numerator % 2;
            numerator = numerator / 2;
            binary[i] = remainder;
            printf("numerator = %d and denominator = %d and array value arr[%d] = %d\n",numerator,remainder,i,binary[i]);
            iterationCount++;
            if(numerator == 1)
            {
                binary[iterationCount] = numerator;
                iterationCount++;
            }
        }

        printf("Iteration Count :%d\n",iterationCount);

        for(int i=0; i<iterationCount; i++)
        {
            printf("%d",binary[i]);
        }

    // Step 3 ----> Print the output

        printf("\nOutput :\n");

        for(int i=iterationCount-1; i>=0; i--)
        {
            printf("%d",binary[i]);
        }

    // Step 4 ----> Flush the binary with all null characters

        for(int i=0; i<iterationCount; i++)
        {
            binary[i] = '\0';
        }
        printf("\n");

    } else {
        printf("1\n");
    }
    return 0;
}
*/