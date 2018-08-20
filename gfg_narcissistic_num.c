#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 6

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        // char newLineFeed = getchar();
        char num[MAX_LENGTH];
        scanf("%s",num);
        int length = strlen(num);

        int sum = 0;
        for(int i=0; num[i] != '\0'; i++)
        {
            int digit = (num[i] - '0');
            int temp = 1;

            for(int j=1; j<=length; j++)
            {
                temp = temp * digit;
            }
            sum += temp;
        }

        char sumChar[6];
        sprintf(sumChar,"%d",sum);
        printf("%s\n",((strcmp(num,sumChar) == 0) ? "Yes" : "No"));
    }
	return 0;
}

/*
int main()
{
    char num[] = "111";
    int length = strlen(num);
    printf("Str lenght :%d\n",length);

    int sum = 0;
    for(int i=0; num[i] != '\0'; i++)
    {
        int digit = (num[i] - '0');
        int temp = 1;

        for(int j=1; j<=length; j++)
        {
            temp = temp * digit;
        }
        sum += temp;
        printf("Temp is :%d\n",temp);
    }

    printf("Final Sum is :%d\n",sum);
    char sumChar[6];
    sprintf(sumChar,"%d",sum);

    printf("%s\n",((strcmp(num,sumChar) == 0) ? "Yes" : "No"));

    return 0;
}
*/