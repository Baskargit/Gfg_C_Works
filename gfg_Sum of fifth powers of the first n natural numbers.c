#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    unsigned long long int input[testCaseCount];
    unsigned long long int  finalOutput[testCaseCount]; 
    unsigned long long int  result = 0;
    
    for(int count=0; count<testCaseCount; count++)
    {
        scanf("%llu",&input[count]);
    }

    for(int i=0; i<testCaseCount;)
    {   
        for(unsigned long long int j=1; j<=input[i]; j++)
        {
            result  = result + (j*j*j*j*j);
        }
        finalOutput[i] = result;
        result = 0;
        i++;
    }

    for(int i=0; i<testCaseCount; i++)
    {
        printf("%llu\n",finalOutput[i]);
    }
    
	return 0;
}

// https://practice.geeksforgeeks.org/problems/sum-of-fifth-powers-of-the-first-n-natural-numbers/0