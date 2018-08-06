#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int size;
        scanf("%d",&size);
        int values[size];
        for(int i=0; i<size; i++)
        {
            scanf("%d",&values[i]);
        }
        int k;
        scanf("%d",&k);
        
        int pos = (k - 1);
        int till = 0;
        while (pos < size) 
        {
            if((pos != (size - 1))) {
                for(int i=(pos); i>=till; i--)
                {
                    printf("%d ",values[i]);
                }
                till = pos + 1;
                pos = ((pos+k) < size) ? ((pos + k)) : (size - 1);
            } else {
                for(int i=(pos); i>=till; i--)
                {
                    printf("%d ",values[i]);
                }
                pos = pos + pos;
            }
        }
        printf("\n"); 
    }
	return 0;
}