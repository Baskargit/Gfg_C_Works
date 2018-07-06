#include<stdio.h>

int main()
{
    int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the Input

        int number;
        scanf("%d",&number);
        int binary[28];

        if(number > 1) 
        {
        // Step 2 --> Convert to binary

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

        // Step 3 ---> Check whether the binary have only one 1 or more

        int onesCount = 0;

        for(int i=0; i<iterationCount; i++)
        {
            if(binary[i] == 1) {
                onesCount++;
                //printf("Numerator = %d and onesCOunt = %d\n",numerator,onesCount);
            }
        }

        //printf("No of 1's :%d\n",onesCount);

        if(onesCount == 1) {
            for(int i=0; i<iterationCount; i++)
            {
                if(binary[i] == 1) {
                    printf("%d\n",(i+1));
                    break;
                }
            }
        } else {
            printf("-1\n");
        }

        // Step 4 ----> Flush the binary with all null characters

            for(int i=0; i<iterationCount; i++)
            {
                binary[i] = '\0';
            }

        } else {
            printf("1\n");
        } 
    }
    return 0;
}
