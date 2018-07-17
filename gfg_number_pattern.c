#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int n;
        scanf("%d",&n);

        for(int i=1; i<=n; i++)
        {
            int max = i;
            for(int j=1; j<=i; j++)
            {
                printf("%d",j);
            }
            if((max - 1)>0) {
                --max;
                for(int k=max; k>=1; k--)
                {
                    printf("%d",k);
                }
            }
            printf(" ");
        }
        printf("\n");
    }
	return 0;
}

/*
int main()
{
    int n=6;

    for(int i=1; i<=n; i++)
    {
        int max = i;
        for(int j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        if((max - 1)>0) {
            --max;
            for(int k=max; k>=1; k--)
            {
                printf("%d",k);
            }
        }
        printf(" ");
    }
    printf("\n");

    return 0;
}
*/