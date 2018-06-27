#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    int input[testCaseCount];
    unsigned long int finalOutput[testCaseCount];
    unsigned long long int result = 0;
    int count = 1; 
    
    for(int count=0; count<testCaseCount; count++)
    {
        scanf("%d",&input[count]);
    }
    
    for(int i=0; i<testCaseCount;i++)
    {
        for(unsigned long long int j=1; count<=input[i];)
        {
            if(j%2 == 0) {
                ++count;
                result = result + (j*j);
                j++;
            } else {
                j++;
            }
        }
        finalOutput[i] = result;
        result = 0;
        count = 1;
    }

    for(int i=0; i<testCaseCount; i++)
    {
        printf("%lu\n",finalOutput[i]);
    }

	return 0;
}

/*
int main()
{
	int testCaseCount=3;
    int input[testCaseCount];
    unsigned long int finalOutput[testCaseCount]; 
    unsigned long long int result = 0;
    int count = 1;
    
    input[0] = 2; input[1] = 5; input[2] = 9;

    for(int i=0; i<testCaseCount;i++)
    {
        for(unsigned long long int j=1; count<=input[i];)
        {
            if(j%2 == 0) {
                ++count;
                result = result + (j*j);
                j++;
            } else {
                j++;
            }
        }
        finalOutput[i] = result;
        result = 0;
        count = 1;
    }

    for(int i=0; i<testCaseCount; i++)
    {
        printf("%lu\n",finalOutput[i]);
    }
    
	return 0;
}

*/