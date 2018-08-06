#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int n;
        scanf("%d",&n);
        int array[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&array[i]);
        }

        int sum1 = 0 , sum2 = 0;
        int midEle = (n/2);
        if(n > 1) {
            for(int i=0; i<n; i++)
            {
                if (i < midEle) {
                    sum1 = sum1 + array[i];
                } else {
                    sum2 = sum2 + array[i];
                }
            }
            printf("%d\n",sum1*sum2);
        } else {
            printf("%d",array[0]);
        }
    }
   
	return 0;
}