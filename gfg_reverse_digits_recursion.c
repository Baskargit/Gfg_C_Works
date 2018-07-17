#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 10

int reversed(long int length , unsigned long long int mul);

char Input[MAX_LENGTH];
unsigned long long int result = 0;

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        scanf("%s",Input);
        unsigned long long int multiplier = 1;
        long int strlength = strlen(Input);

        for(int i=0; i<(strlength - 1); i++)
        {
            multiplier = multiplier * 10;
        }
        result = reversed(strlength , multiplier);
        printf("%llu\n",result);
        result = 0;
    }
    
	return 0;
}

int  reversed(long int length , unsigned long long int mul)
{
    if(length == 0) {
        return (result * 1);
    } else {
        int num = (Input[(length - 1)] - '0');
        result =  ((num * mul) + result);
        reversed(--length , (mul/10));
    }
}


/*
int main()
{   
    unsigned long long int multiplier = 1;
    long int strlength = strlen(Input);
    for(int i=0; i<(strlength - 1); i++)
    {
        multiplier = multiplier * 10;
    }
    reversed(strlength , multiplier);
    printf("Reversed number is %llu\n",result);

    return 0;
}

int  reversed(long int length , unsigned long long int mul)
{
    //printf("length is %ld and multiplier is %llu\n",length,mul);

    if(length == 0) {
        printf("length is %ld and multiplier is %llu char of %c\n",length,mul,Input[length]);
        return (result * 1);
    } else {
        int num = (Input[(length - 1)] - '0');
        result =  ((num * mul) + result);
        printf("length is %ld and multiplier is %llu and num is %d and result is %llu\n",length,mul,num,result);
        reversed(--length , (mul/10));
    }
}
*/