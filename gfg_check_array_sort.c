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

        if(size > 1) {
            for(int i=0; i<(size -1); i++)
            {
                if(array[i] <= array[i+1]) {
                    flag = 1;
                } else {
                    flag = 0;
                    break;
                }
            }
        } else {
            flag = 1;
        }

        printf("%d\n",((flag) ? 1 : 0));
    }
	return 0;
}
