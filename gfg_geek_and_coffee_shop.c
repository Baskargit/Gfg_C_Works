#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        unsigned long long int N,M;
        scanf("%lld %lld",&N,&M);

        for(int i=1; i<=(M-1); i++)
        {
            N /= 2;
        }
        printf("%lld\n",N);
    }
	return 0;
}

/*
int main()
{
    unsigned long long int N = 100 , M = 8;

    for(int i=1; i<=M-1; i++)
    {
        N /= 2;
    }

    printf("%lld\n",N);
    return 0;
}
*/