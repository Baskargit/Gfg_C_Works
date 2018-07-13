#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get Input N
        int N;
        scanf("%d",&N);
        int transpose[N][N];

    // Step 2 --> Get the Input matrix and Take Transpose
        int row = 0;
        int col = 0;
        int temp;
        for(int i=0; i<(N * N); i++)
        {
            scanf("%d",&temp);
            if((row < N) && (col < N)) {
                transpose[row++][col] = temp;
            } else {
                row = 0;
                transpose[row++][++col] = temp;
            }
        }

    // Step 3 ---> Print the Result
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                printf("%d ",transpose[i][j]);
            }
        }
        printf("\n");
    }
	return 0;
}

/*
int main()
{
  // Step 1 -> Get Input N
    int N;
    scanf("%d",&N);
    int transpose[N][N];

  // Step 2 --> Get the Input matrix and Take Transpose
    int row = 0;
    int col = 0;
    int temp;
    for(int i=0; i<(N * N); i++)
    {
        scanf("%d",&temp);
        if((row < N) && (col < N)) {
            transpose[row++][col] = temp;
        } else {
            row = 0;
            transpose[row++][++col] = temp;
        }
    }

  // Step 3 ---> Print the Result
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            printf("%d ",transpose[i][j]);
        }
    }
    printf("\n");
    return 0;
}
*/