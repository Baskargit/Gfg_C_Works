#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int size;
        scanf("%d",&size);

        for(int i=0; i<size; i++)
        {
            for(int j=0; j<i; j++)
            {
                printf("*");
            } printf(" ");
        }

    }
    
	return 0;
}

/*
int main()
{
    int size;
    scanf("%d",&size);

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf("*");
        } printf(" ");
    }
    return 0;
}
*/