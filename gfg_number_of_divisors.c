#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int N;
        scanf("%d",&N);
        int flag = 0;
        int count = 0;

        for(int i=1; i<=N; i++)
        {
            if(N%i == 0) {
                flag = (i%3 == 0) ? 1 : 0;
                count = (flag) ? ++count : count;
            }
        }
        printf("%d\n",count);
    }
	return 0;
}

/*
int main()
{
    int N = 10;
    int flag = 0;
    int count = 0;

    for(int i=1; i<=N; i++)
    {
        if(N%i == 0) {
            printf("%d ",i);
            flag = (i%3 == 0) ? 1 : 0;
            count = (flag) ? ++count : count;
        }
    }
    printf("count = %d\n",count);
    return 0;
}
*/