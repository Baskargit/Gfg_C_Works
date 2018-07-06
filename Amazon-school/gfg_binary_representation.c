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
        int binary[14];

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

            int printBefore = (14 - iterationCount);

            for(int i=0; i<printBefore; i++)
            {
                printf("0");
            }

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
            printf("00000000000001\n");
        } 
    }
    return 0;
}
