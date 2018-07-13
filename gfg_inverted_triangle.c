#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int N;
        scanf("%d",&N);
        int size = ((N*2) - (1));

        int st = -1;
        int ed = (size);
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<size; j++)
            {
                if(((j > st) && (j < ed))) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            st++;
            ed--;
        }
        printf("\n");
    }
	return 0;
}

/*
int main()
{
    int N = 3;
    int size = ((N*2) - (1));

    int st = -1;
    int ed = (size);
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(((j > st) && (j < ed))) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        st++;
        ed--;
        printf("\n");
    }


    return 0;
}
*/