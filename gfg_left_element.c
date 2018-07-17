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

        for(int i=0; i<size; i++)
        {
            for(int j=i; j<size; j++)
            {
                if(array[j] > array[i]) {
                    int temp = array[j];
                    array[j] = array[i];
                    array[i] = temp;
                }
                
            }
        }
        printf("%d\n",array[(size/2)]);
    }
    
	return 0;
}