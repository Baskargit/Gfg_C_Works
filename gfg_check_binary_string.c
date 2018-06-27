#include<stdio.h>
#define max_length 1000000

int main()
{
    int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 ----> Get the Input

        char inputString[max_length];
        scanf("%s",inputString);
        int stringLength = 0;

        for(int i=0; inputString[i] != '\0'; stringLength++,i++);

    // Step 2 ----> Count the number of ones in the given string

        long int onesCount = 0;

        for(int i=0; i<stringLength;)
        {
            if((inputString[i] - '0') == 1) {
                onesCount++;
                i++;
            } else {
                i++;
            }
        }

    // Step 3 ----> Get all the 1's position and store it in an array

        int flag = 0;
        long int position = 0;
        long int ones[onesCount];

        if(onesCount > 1) 
        {
            for(int i=0; i<stringLength;)  // Finding the ones position
            {
                if((inputString[i] - '0') == 1) {
                    ones[position] = i+1;
                    position++;
                    i++;
                } else {
                    i++;
                }
            }

            for(int i=0; i<(onesCount-1);) // Check VALID or NOT
            {
                if((ones[i+1] - ones[i]) == 1) {
                    flag = 1;
                    i++;
                } else {
                    flag = 0;
                    break;
                }
            }

        } else {
            flag = 1;
        }

    // Step 4 ----> Print the result

        if(flag) {
            printf("VALID\n");
        } else {
            printf("INVALID\n");
        }

    // Step 5 ----> Flush the input

        for(int i=0; i<stringLength; i++)
        {
            inputString[i] = '\0';
        }

    }
	return 0;
}

/*
int main()
{
  // Step 1 ----> Get the Input

    char inputString[] = "011";
    int stringLength = 0;

    for(int i=0; inputString[i] != '\0'; stringLength++,i++);

  // Step 2 ----> Count the number of ones in the given string

    long int onesCount = 0;

    for(int i=0; i<stringLength;)
    {
        if((inputString[i] - '0') == 1) {
            onesCount++;
            i++;
        } else {
            i++;
        }
    }

    printf("OnesCount is :%ld\n",onesCount);

  // Step 3 ----> Get all the 1's position and store it in an array

    int flag = 0;
    long int position = 0;
    long int ones[onesCount];

    if(onesCount > 1) 
    {
        for(int i=0; i<stringLength;)  // Finding the ones position
        {
            if((inputString[i] - '0') == 1) {
                ones[position] = i+1;
                position++;
                i++;
            } else {
                i++;
            }
        }

        for(int i=0; i<onesCount; i++) // Pirnt the ones
        {
            printf("%d --- > %ld\n",i,ones[i]);
        }

        for(int i=0; i<onesCount;) // Actual Logic
        {
            if((ones[i+1] - ones[i]) == 1) {
                printf("i=%d and i+1=%d values of ones[%d]-ones[%d]=%ld\n",i,i+1,i+1,i,(ones[i+1] - ones[i]));
                flag = 1;
                i++;
            } else {
                break;
                printf("flagged as 0 at index of %d\n",i);
                break;
            }
        }

    } else {
        flag = 1;
    }

  // Step 4 ----> Print the result

    if(flag) {
        printf("VALID\n");
    } else {
        printf("INVALID\n");
    }

  // Step 5 ----> Flush the input

    for(int i=0; i<stringLength; i++)
    {
        inputString[i] = '\0';
    }
    return 0;
}
*/