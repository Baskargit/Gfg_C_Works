#include <stdio.h>
#include <string.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int size;
        scanf("%d",&size);
        char Input[size][10000];
        
        for(int i=0; i<size; i++)
        {
            scanf("%s",Input[i]);
        }

        int max = 0;
        int index = 0;

        for(int i=0; i<size; i++)
        {
            if(strlen(Input[i]) > max) {
                max = strlen(Input[i]);
                index = i;
            }
        }

        printf("%s\n",Input[index]);

        return 0;
    }
    
	return 0;
}