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
        int serachFor;
        scanf("%d",&serachFor);
        for(int i=0; i<size; i++)
        {
            scanf("%d",&Input[i]);
        }

        int flag = 0;
        int position;

        for(int i=0; i<size; i++)
        {
            if(serachFor == Input[i]) {
                position = i;
                flag = 1;
                i = size;
            } else {
                flag = 0;
            }
        }

        if(flag) {
            printf("%d\n",position);
        } else {
            printf("OOPS! NOT FOUND\n");
        }  
    }
    
	return 0;
}