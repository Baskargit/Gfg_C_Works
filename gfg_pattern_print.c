#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int N;
        scanf("%d",&N);
        int alpha = 0;

        for(int i=1; i<=N; i++)
        {
            if(i == 1 || i == N) {
                for(int j=1; j<=N; j++)
                {
                    printf("%c",(alpha + 'A'));
                    alpha++;
                } printf("\n");
            } else {
                for(int j=1; j<=N; j++)
                {
                    if(j == 1 || j == N) {
                        printf("%c",(alpha + 'A'));
                        alpha++;
                    } else {
                        printf("$");
                    }
                } printf("\n");
            }
        }
        alpha = 0;
    }
	return 0;
}

/*
int main()
{
    int N=6;
    int alpha = 0;

    for(int i=1; i<=N; i++)
    {
        if(i == 1) {
            for(int j=1; j<=N; j++)
            {
                printf("%c",(alpha + 'A'));
                alpha++;
            } printf("\n");
        } else if(i == N) {
           for(int j=1; j<=N; j++)
            {
                printf("%c",(alpha + 'A'));
                alpha++;
            } printf("\n"); 
        } else {
            for(int j=1; j<=N; j++)
            {
                if(j == 1) {
                    printf("%c",(alpha + 'A'));
                    alpha++;
                } else if(j == N) {
                    printf("%c",(alpha + 'A'));
                    alpha++;
                } else {
                    printf("$");
                }
            } printf("\n");
        }
    }
    return 0;
}
*/