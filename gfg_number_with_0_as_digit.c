#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int num;
        scanf("%d",&num);
        int counter = 0;
        char numAsStr[5];

        for(int i=1; i<=num; i++)
        {
            sprintf(numAsStr,"%d",i);
            for(int j=0; numAsStr[j] != '\0'; j++)
            {
                if(numAsStr[j] == '0') {
                    ++counter;
                    break;
                }
            }
        }

        printf("%d\n",counter);
    }
	return 0;
}

/*
int main()
{
    int num = 200;
    char numAsStr[5];
    sprintf(numAsStr,"%d",num);

    num = num/10;
    printf("num=%d\n",num);


    for(int i=0; numAsStr[i] != '\0'; i++)
    {
        if(numAsStr[i] == '0') {
            ++num;
            break;
        }
    }
    printf("After check num=%d\n",num);

    return 0;
}
*/