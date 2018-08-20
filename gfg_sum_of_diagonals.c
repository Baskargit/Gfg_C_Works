#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int size;
        scanf("%d",&size);
        int matrix[size][size];
        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size; j++)
            {
                scanf("%d",&matrix[i][j]);
            }
        }

        int priDigSum = 0;
        int secDigSum = 0;

        if(size%2 == 0) {
            for(int i=0; i<size; i++)
            {
                for(int j=0; j<size; j++)
                {
                    if(i==j) {
                        priDigSum += matrix[i][j];
                    } else {
                        if(j == ((size-i) -1)) {
                            secDigSum += matrix[i][j];
                        }
                    }
                }
            }
        } else {
            for(int i=0; i<size; i++)
            {
                for(int j=0; j<size; j++)
                {
                    if(i==j) {
                        priDigSum += matrix[i][j];
                        secDigSum += ( (i == size/2) && (j == size/2) ) ? matrix[i][j] : 0;
                    } else {
                        if(j == ((size-i) -1)) {
                            secDigSum += matrix[i][j];
                        }
                    }
                }
            }
        }

        printf("%d %d\n",priDigSum,secDigSum);
    }
	return 0;
}

/*
int main()
{
    int size = 4;
    int matrix[][4] = {1 ,2 ,3 ,4 ,4 ,3 ,2 ,1 ,7 ,8 ,9 ,6 ,6 ,5 ,4 ,3};
    int priDigSum = 0;
    int secDigSum = 0;

    if(size%2 == 0) {
        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size; j++)
            {
                if(i==j) {
                    priDigSum += matrix[i][j];
                    printf("pri %d-->%d%d\n",matrix[i][j],i,j);
                } else {
                    if(j == ((size-i) -1)) {
                        secDigSum += matrix[i][j];
                        printf(" sec %d-->%d%d\n",matrix[i][j],i,j);
                    }
                }
            }
        }
    } else {
        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size; j++)
            {
                if(i==j) {
                    priDigSum += matrix[i][j];
                    secDigSum += ( (i == size/2) && (j == size/2) ) ? matrix[i][j] : 0;
                    printf("pri %d\n",matrix[i][j]);
                } else {
                    if(j == ((size-i) -1)) {
                        secDigSum += matrix[i][j];
                        printf("sec %d\n",matrix[i][j]);
                    }
                }
            }
        }
    }

    printf("%d %d\n",priDigSum,secDigSum);

    return 0;
}
*/