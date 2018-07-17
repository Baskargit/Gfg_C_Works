#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int size;
        scanf("%d",&size);
        int array[size];
        int sum = 0;
        for(int i=0; i<size; i++)
        {
            scanf("%d",&array[i]);
        }

        for(int i=0; i<size; i++)
        {
            sum = sum + (*(array+i));
        }

        printf("%d\n",sum);
    }
	return 0;
}

/*
int main()
{
    int size;
    scanf("%d",&size);
    int array[size];
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }

    for(int i=0; i<size; i++)
    {
        sum = sum + (*(array+i));
    }

    printf("%d\n",sum);
}
*/