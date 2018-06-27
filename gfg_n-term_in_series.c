#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    int input;
    unsigned int value = 0;
    int series[1000];
    int finalOutput[testCaseCount]; 

    for(int i=0; i<1000; i++)
    {
        value = value + (i+1);
        series[i] = value; 
    }

    // for(int i=0; i<100; i++)
    // {
    //     printf("%d\n",series[i]);
    // }
    
    for(int count=0; count<testCaseCount; count++)
    {
        scanf("%d",&input);
        finalOutput[count] = series[(input-1)];
    }

    for(int i=0; i<testCaseCount; i++)
    {
        printf("%d\n",finalOutput[i]);
    }
    
	return 0;
}