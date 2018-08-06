#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the Input
        int row,column;
        scanf("%d %d",&row,&column);
        int matrix[row][column];
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<column; j++)
            {
                scanf("%d",&matrix[i][j]);
            }
        }

        int sum = 0;
        int maxsum = 0;
        int midPointer = 0;
    // Step 2 --> Get the Maxsum

        if((row >= 3) && (column >= 3)) 
        {
            for(int i=0; i<((row - 3) + 1); i++) // Base Incrementer
            {
                for(int j=0; j<((column - 3) + 1); j++) // Row checker
                {
                    for(int k=j; k<(j+3); k++) // Hour glass row 1
                    {
                        sum = sum + matrix[i][k];
                    } 

                    sum = sum + matrix[(i+1)][++midPointer]; // Hour glass row Mid
                    
                    for(int l=j; l<(j+3); l++) // Hour glass row 3
                    {
                        sum = sum + matrix[i+2][l];
                    } 

                    maxsum = (sum > maxsum) ? sum : maxsum;
                    sum = 0;
                }
                midPointer = 0;
            }
        } else {
            maxsum = -1;
        }
    // Step 3 ---> Print the Result

        printf("%d\n",maxsum);
    }
	return 0;
}

/*
int main()
{
    int row,column;
    row = 6;
    column = 6;
    int matrix[6][6] = {
                            {1,1,1,0,0,0},
                            {0,1,0,0,0,0},
                            {1,1,1,0,0,0},
                            {0,0,2,4,4,0},
                            {0,0,0,2,0,0},
                            {0,0,1,2,4,0}
                        };

    int sum = 0;
    int midPointer = 0;
    int maxsum = 0;

    if((row >= 3) && (column >= 3)) 
    {
        for(int i=0; i<((row - 3) + 1); i++) // Base Incrementer
        {
            for(int j=0; j<((column - 3) + 1); j++) // Row checker
            {
                for(int k=j; k<(j+3); k++) // Hour glass row 1
                {
                    sum = sum + matrix[i][k];
                    printf("%d ",matrix[i][k]);
                } printf("\n");

                sum = sum + matrix[(i+1)][++midPointer]; // Hour glass row Mid
                printf("  %d",matrix[(i+1)][midPointer]);
                printf("\n");

                for(int l=j; l<(j+3); l++) // Hour glass row 3
                {
                    sum = sum + matrix[i+2][l];
                    printf("%d ", matrix[i+2][l]);
                } printf("\n");

                printf("Sum is :%d\n",sum);
                
                maxsum = (sum > maxsum) ? sum : maxsum;
                sum = 0;
            }
            midPointer = 0;
            printf("Base Incremented\n");
        }

    } else {
        maxsum = -1;
    }

    printf("Max Sum is %d\n",maxsum);

    
    return 0;
}
*/