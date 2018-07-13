#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 10000

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the Input
        char Input[MAX_LENGTH];
        scanf("%s",Input);
        char encrypted[MAX_LENGTH];

        int flag = 0;
        int count = 1;
        int posEnc = 0;

    // Step 2 --> Get the Count of Individual Digits
        for(int i=(strlen(Input) -1); i>=0;)
        {
            if(Input[i] != '`') {
                for(int j=(i-1); j>=0; j--)
                {
                    if((Input[i] != Input[j])) {
                        break;
                    } else {
                        ++count;
                        Input[j] = '`';
                    }
                }
                char temp[4];
                int posT = 0;
                sprintf(temp,"%d",count);
                for(int k=(((strlen(temp)) -1)); k>=0; k--)
                {
                    encrypted[posEnc++] = temp[k];
                }
                encrypted[posEnc++] = Input[i];
                encrypted[posEnc] = '\0';
                count = 1;
                i--;
            } else {
                i--;
            }
        } 

    // Step 3 ---> Print the Result
        printf("%s\n",encrypted);
    }
	return 0;
}

/*
int main()
{
  // Step 1 -> Get the Input
    char Input[MAX_LENGTH];
    scanf("%s",Input);
    char encrypted[MAX_LENGTH];
    printf("Input Size :%ld\n",strlen(Input));

    int flag = 0;
    int count = 1;
    int posEnc = 0;

  // Step 2 --> Get the Count of Individual Digits
    for(int i=(strlen(Input) -1); i>=0;)
    {
        if(Input[i] != '`') {
            for(int j=(i-1); j>=0; j--)
            {
                if((Input[i] == Input[j])) {
                    ++count;
                    Input[j] = '`';
                }
            }
            printf("Count is :%d\n",count);
            char temp[4];
            int posT = 0;
            sprintf(temp,"%d",count);
            printf("temp is %s with a length of %ld\n",temp,strlen(temp));
            for(int k=0; k<=(((strlen(temp)) -1)); k++)
            {
                encrypted[posEnc++] = temp[k];
            }
            encrypted[posEnc++] = Input[i];
            encrypted[posEnc] = '\0';
            count = 1;
            i--;
        } else {
            i--;
        }
    } 

  // Step 3 ---> Print the Result
    printf("Str is %s\n\n",encrypted);

    return 0;
}
*/