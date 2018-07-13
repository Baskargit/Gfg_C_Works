#include <stdio.h>
#include <string.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the Input
        char Input[1000000];
        scanf("%s",Input);
        int num[strlen(Input)];

    // Step 2 --> Convert the string into number for sorting
        int pos = 0;
        for(int i=0; Input[i] != '\0'; i++)
        {
            num[pos++] = (int)(Input[i] - '0');
        }

    // Step 3 ---> Sort the number in the Asec format

        for(int i=0; i<pos; i++)
        {
            for(int j=i+1; j<pos; j++)
            {
                if(num[j] < num[i]) {
                    int temp = num[j];
                    num[j] = num[i];
                    num[i] = temp;
                }
            }
        }

        unsigned long long int number= 0;
        unsigned long long int multiplier = 1;

        for(int i=(pos - 1); i>=0; i--)
        {
            number = ((number) +(num[i] * multiplier));
            multiplier = multiplier *10;
        }

        char finNum[pos];
        sprintf(finNum,"%llu",number);

    // Step 4 ---> Print the Result

        if((strcmp(finNum , Input)) == 0) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }
	return 0;
}

/*
int main()
{
  // Step 1 -> Get the Input
    char Input[1000000];
    scanf("%s",Input);
    int num[strlen(Input)];

  // Step 2 --> Convert the string into number for sorting
    int pos = 0;
    for(int i=0; Input[i] != '\0'; i++)
    {
        num[pos++] = (int)(Input[i] - '0');
    }

    for(int i=0; i<pos; i++)
    {
        printf("%d ",num[i]);
    } printf("\n");

  // Step 3 ---> Sort the number in the Asec format

    for(int i=0; i<pos; i++)
    {
        for(int j=i+1; j<pos; j++)
        {
            if(num[j] < num[i]) {
                int temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }
    for(int i=0; i<pos; i++)
    {
        printf("%d ",num[i]);
    } printf("\n");

    unsigned long long int number= 0;
    unsigned long long int multiplier = 1;

    for(int i=(pos - 1); i>=0; i--)
    {
        number = ((number) +(num[i] * multiplier));
        multiplier = multiplier *10;
    }
    printf("%llu\n",number);


    char finNum[pos];
    sprintf(finNum,"%llu",number);
    printf("Number in string %s\n",finNum);

  // Step 4 ---> Print the Result

    if((strcmp(finNum , Input)) == 0) {
        printf("1\n");
    } else {
        printf("0\n");
    }


    return 0;
}
*/