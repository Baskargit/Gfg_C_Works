#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the Input
        int N;
        scanf("%d",&N);
        int mid = (N%2 == 0) ? (((N+1)/2)) : ((N/2));
        int flag = 0;
        int st = 0;
        int ed = (N%2 == 0) ? N : (N - 1);

    // Step 2 --> Print the Result

        if(N%2 == 0) 
        {           
            for(int i=0; i<N; i++)
            {
                for(int j=0; j<(N+1); j++)
                {
                    if(((j==st) || (j == ed)) && (flag == 0)) {
                        if((st == mid) && (ed == mid)) {
                            flag = 1;
                            printf("*");
                        } else {
                            printf("*");
                        }
                    } else if(flag && (j == mid)) {
                        printf("*");
                    }else {
                        printf(" ");
                    }
                }
                ++st;
                --ed;
            }
            printf("\n");
        } 
        else 
        {
            for(int i=0; i<N; i++)
            {
                for(int j=0; j<N; j++)
                {
                    if(((j==st) || (j == ed)) && (flag == 0)) {
                        if((st == mid) && (ed == mid)) {
                            flag = 1;
                            printf("*");
                        } else {
                            printf("*");
                        }
                    } else if(flag && (j == mid)) {
                        printf("*");
                    }else {
                        printf(" ");
                    }
                }
                ++st;
                --ed;
            }
            printf("\n");
        }

    }
    
	return 0;
}

/*
int main()
{
  // Step 1 -> Get the Input
    int N = 4;

  // Step 2 --> Print the Result

    if(N%2 == 0) {
        int st = 0;
        int ed = N;
        int mid = (((N+1)/2));
        printf("Mid is %d\n",mid);
        int flag = 0;
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<(N+1); j++)
            {
                if(((j==st) || (j == ed)) && (flag == 0)) {
                    if((st == mid) && (ed == mid)) {
                        flag = 1;
                        printf("*");
                    } else {
                        printf("*");
                    }
                } else if(flag && (j == mid)) {
                    printf("*");
                }else {
                    printf(" ");
                }
            }
            ++st;
            --ed;
            // printf("\n");
        }
        printf("\n");
    } else {
        int st = 0;
        int ed = (N - 1);
        int mid = ((N/2));
        printf("Mid is %d\n",mid);
        int flag = 0;
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                if(((j==st) || (j == ed)) && (flag == 0)) {
                    if((st == mid) && (ed == mid)) {
                        flag = 1;
                        printf("*");
                    } else {
                        printf("*");
                    }
                } else if(flag && (j == mid)) {
                    printf("*");
                }else {
                    printf(" ");
                }
            }
            ++st;
            --ed;
            // printf("\n");
        }
        printf("\n");
    }
    return 0;
}
*/