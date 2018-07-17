#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int size;
        scanf("%d",&size);
        int array[size][size];
        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size; j++)
            {
                scanf("%d",&array[i][j]);
            }
        }

        int upperTriangular = 0;
        int lowerTriangular = 0;
        int diagonal = 0;

        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size; j++)
            {
                if(j < i) {
                    lowerTriangular = lowerTriangular + array[i][j];
                } else if(j == i) { 
                    diagonal = diagonal + array[i][j];
                }else {
                    upperTriangular = upperTriangular + array[i][j];
                }
            }
        }
        printf("%d %d\n",upperTriangular+diagonal,lowerTriangular+diagonal);
    }
    
	return 0;
}

/*
int main()
{
    int size = 3;
    int array[][3] = {6 ,5 ,4 ,1 ,2 ,5 ,7 ,9 ,7};

    int upperTriangular = 0;
    int lowerTriangular = 0;
    int diagonal = 0;

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(j < i) {
                printf("l%d ",array[i][j]);
                lowerTriangular = lowerTriangular + array[i][j];
            } else if(j == i) { 
                printf("d ");
                diagonal = diagonal + array[i][j];
            }else {
                upperTriangular = upperTriangular + array[i][j];
                printf("u%d ",array[i][j]);
            }
        }
        printf("\n");
    }

    printf("%d %d\n",upperTriangular+diagonal,lowerTriangular+diagonal);

    return 0;
}
*/