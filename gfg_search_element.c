#include <stdio.h>

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

        int searchFor;
        scanf("%d",&searchFor);

        int index;
        int flag = 0;

        for(int i=0; i<size; i++)
        {
            if(Input[i] == searchFor) {
                flag = 1;
                index = i;
                break;
            }
        }

        if(flag) {
            printf("%d\n",index);
        } else {
            printf("-1\n");
        }
    }
    
	return 0;
}