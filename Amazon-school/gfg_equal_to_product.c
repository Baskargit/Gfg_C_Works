#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int size;
        scanf("%d",&size);
        int product;
        scanf("%d",&product);

        int Input[size];
        for(int i=0; i<size; i++)
        {
            scanf("%d",&Input[i]);
        }

        int flag = 0;

        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                if((Input[i] * Input[j]) == product) {
                    flag = 1;
                    i = size;
                    break;
                }
            }
        }

        if(flag) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    
	return 0;
}