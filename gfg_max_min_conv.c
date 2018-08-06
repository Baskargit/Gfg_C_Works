#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 10000

int convert(char Input[]);

int convert(char Input[])
{
    int num1 = 0;
    int multiplier = 1;
    for(int i=(strlen(Input) -1); i>=0; i--)
    {
        int digit = (int)(Input[i] - '0');
        num1 = num1 + (multiplier*digit);
        multiplier *= 10;
    }
    return num1;
}

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char Input[MAX_LENGTH];
        scanf("%s",Input);

        int num1 = convert(Input);
        for(int i=0; Input[i] != '\0'; i++)
        {
            if(Input[i] == '5') {
                Input[i] = '6';
            } else if(Input[i] == '6') {
                Input[i] = '5';
            }
        }
        int num2 = convert(Input);

        printf("%d\n",(num1 + num2));
    }
	return 0;
}

/*
int main()
{
    char Input[] = "555";

    int num1 = convert(Input);

    printf("Num1 is %d\n",num1);

    for(int i=0; Input[i] != '\0'; i++)
    {
        if(Input[i] == '5') {
            Input[i] = '6';
            printf("%c %d\n",Input[i],i);
        } else if(Input[i] == '6') {
            Input[i] = '5';
        }
    }
    printf("String changed %s\n",Input);

    int num2 = convert(Input);

    printf("Num2 is %d\n",num2);

    printf("%d\n",(num1 + num2));


    return 0;
}
*/