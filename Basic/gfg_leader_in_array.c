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
        for(int i=0; i<size; i++)
        {
            scanf("%d",&array[i]);
        }
        int flag = 0;

        for(int i=0; i<size; i++)
        {
            for(int j=(i+1); j<size; j++)
            {
                if(array[i] > array[j]) {
                    flag = 1;
                } else {
                    flag = 0;
                    break;
                }
            }
            if(flag) {
                printf("%d ",array[i]);
            }
            flag = 0;
        }
        printf("%d",array[(size - 1)]);
        printf("\n");
    }
	return 0;
}

/*
int main()
{
    int size = 6;
    int array[] = {16 ,17 ,4 ,3 ,5 ,2};
    int flag = 0;

    for(int i=0; i<size; i++)
    {
        for(int j=(i+1); j<size; j++)
        {
            if(array[i] > array[j]) {
                flag = 1;
            } else {
                flag = 0;
                break;
            }
        }
        if(flag) {
            printf("%d ",array[i]);
        }
        flag = 0;
    }
    printf("%d",array[(size - 1)]);
    printf("\n");

    return 0;
}
*/