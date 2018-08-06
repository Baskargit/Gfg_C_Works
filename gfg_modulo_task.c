#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        unsigned long long int N;
        scanf("%llu",&N);

        unsigned long long int K=0;
        unsigned long long int max = 0;
        for(unsigned long long int i=1; i<N; i++)
        {
            if((N%i) > max) {
                max = (N%i);
                K = i;
            } else {
                if((N%i) < max) {
                    break;
                }
            }
        }

        printf("%llu\n",K);
    }
    
	return 0;
}