#include<stdio.h>

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

        int count = (size -1);
        int flag = 0;
        for(int i=0; i<size; i++)
        {
            if(array[count] == array[i]) {
                --count;
                flag = 1;
            } else {
                break;
            }
        }

        if(flag) {
            printf("PERFECT\n");
        } else {
            printf("NOT PERFECT\n");
        }
    }
	return 0;
}