#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int size;
        scanf("%d",&size);
        int Input[size];
        for(int i=0; i<size; i++)
        {
            scanf("%d",&Input[i]);
        }

        for(int i=0; i<size; i++)
        {
            if(Input[i+1] < Input[i] && i != (size-1)) {
                printf("%d ",Input[i+1]);
            } else {
                printf("-1 ");
            }
        }
        printf("\n");
    }
    
	return 0;
}

/*
int main()
{
    int size = 6;
    int Input[] = {5,6,2,3,1,7};

    for(int i=0; i<size; i++)
    {
        if(Input[i+1] < Input[i] && i != (size-1)) {
            printf("%d ",Input[i+1]);
        } else {
            printf("-1 ");
        }
    }
    printf("\n");
    return 0;
}
*/