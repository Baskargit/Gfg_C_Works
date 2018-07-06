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
        int binary[8] = {0,0,0,0,0,0,0,0};

        if(number > 1) 
        {
        // Step 2 --> Convert to binary

            int iterationCount = 7;
            int numerator = number;
            int remainder = 0;        

            for(int i=0; numerator != 1; i++)
            {
                remainder = numerator % 2;
                numerator = numerator / 2;
                binary[iterationCount] = remainder;
                iterationCount--;
                if(numerator == 1)
                {
                    binary[iterationCount] = numerator;
                    iterationCount--;
                }
            }

        // Step 3 ---> Swap the nibbles
        
            int pos = 4;

            for(int i=0; i<=3; i++)
            {
                int temp = binary[i];
                binary[i] = binary[pos];
                binary[pos] = temp;
                pos++;
            }

            int swappedDecEqu = 0;
            int multiplier = 1;

            for(int i=7; i>=0; i--)
            {
                if(i == 7) {
                    multiplier = 1;
                    if(binary[7] == 1) {
                        swappedDecEqu = swappedDecEqu + multiplier;
                    }
                } else {
                    multiplier = (multiplier * 2);
                    if(binary[i] == 1) {
                        swappedDecEqu = swappedDecEqu + multiplier;
                    }
                }
            }

            printf("%d\n",swappedDecEqu);
        } else {
            printf("16\n");
        }
        
    }
    return 0;
}

/*
int main()
{
    int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the Input

        int number;
        scanf("%d",&number);
        int binary[8] = {0,0,0,0,0,0,0,0};

        if(number > 1) 
        {
            // Step 2 --> Convert to binary

            int iterationCount = 7;
            int numerator = number;
            int remainder = 0;        

            for(int i=0; numerator != 1; i++)
            {
                remainder = numerator % 2;
                numerator = numerator / 2;
                binary[iterationCount] = remainder;
                iterationCount--;
                if(numerator == 1)
                {
                    binary[iterationCount] = numerator;
                    iterationCount--;
                }
            }

            for(int i=0; i<8; i++)
            {
                printf("%d ",binary[i]);
            } printf("\n");

            // Step 3 ---> Swap the nibbles
            int pos = 4;

            for(int i=0; i<=3; i++)
            {
                int temp = binary[i];
                binary[i] = binary[pos];
                binary[pos] = temp;
                pos++;
            }

            for(int i=0; i<8; i++)
            {
                printf("%d ",binary[i]);
            } printf("\n");

            int swappedDecEqu = 0;
            int multiplier = 1;

            for(int i=7; i>=0; i--)
            {
                if(i == 7) {
                    multiplier = 1;
                    printf("%d\n",multiplier);
                    if(binary[7] == 1) {
                        swappedDecEqu = swappedDecEqu + multiplier;
                        printf("if %d + %d\n",swappedDecEqu,multiplier);
                    }
                } else {
                    multiplier = (multiplier * 2);
                    printf("%d\n",multiplier);
                    if(binary[i] == 1) {
                        printf("Else %d + %d\n",swappedDecEqu,multiplier);
                        swappedDecEqu = swappedDecEqu + multiplier;
                    }
                }
            }

            printf("%d\n",swappedDecEqu);
        } else {
            printf("16\n");
        }
        
    }
    return 0;
}
*/