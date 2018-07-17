#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        unsigned long long int aScore[3],bScore[3];
        for(unsigned long long int i=0; i<3; i++)
        {
            scanf("%llu",&aScore[i]);
        }
        for(unsigned long long int i=0; i<3; i++)
        {
            scanf("%llu",&bScore[i]);
        }

        unsigned long long int aAverage = 0;
        unsigned long long int bAverage = 0;

        for(unsigned long long int i=0; i<3; i++)
        {
            if(aScore[i] > bScore[i]) {
                ++aAverage;
            } else if(bScore[i] > aScore[i]) {
                ++bAverage;
            } else {
                // Do nothing
            }
        }
        printf("%llu %llu\n",aAverage,bAverage);
    }
    
	return 0;
}