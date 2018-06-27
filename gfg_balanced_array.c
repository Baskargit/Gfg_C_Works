#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int size;
        scanf("%d",&size);
        long long int input[10000];
        for(int i=0; i<size; i++)
        {
            scanf("%lld",&input[i]);
        }

        long long int firstHalfSum = 0;
        long long int secondhalfSum = 0;

        for(int i=0; i<(size/2); i++)
        {
            firstHalfSum = firstHalfSum+input[i];
        }

        for(int i=(size/2); i<size; i++)
        {
            secondhalfSum = secondhalfSum+input[i];
        }

        if(secondhalfSum > firstHalfSum) {
            printf("%lld\n",(secondhalfSum - firstHalfSum));
        } else if(firstHalfSum > secondhalfSum) {
            printf("%lld\n",(firstHalfSum - secondhalfSum));
        } else {
            printf("%lld\n",(firstHalfSum-secondhalfSum));
        }
    }
	return 0;
}

/*
int main()
{
    int size = 6;
    long long int input[] = {1 ,2 ,1 ,2 ,1 ,3};
    // int size = 2;
    // int input[] = {1 ,-2};

    long long int firstHalfSum = 0;
    long long int secondhalfSum = 0;

    for(int i=0; i<(size/2); i++)
    {
        firstHalfSum = firstHalfSum+input[i];
    }

    for(int i=(size/2); i<size; i++)
    {
        secondhalfSum = secondhalfSum+input[i];
    }

    printf("Firsthalf :%lld\n",firstHalfSum);
    printf("Secondhalf :%lld\n",secondhalfSum);

    if(secondhalfSum > firstHalfSum) {
        printf("%lld\n",(secondhalfSum - firstHalfSum));
    } else if(firstHalfSum > secondhalfSum) {
        printf("%lld\n",(firstHalfSum - secondhalfSum));
    } else {
        printf("%lld",(firstHalfSum-secondhalfSum));
    }

    return 0;
}
*/