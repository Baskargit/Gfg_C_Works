#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        unsigned int size;
        scanf("%u",&size);
        unsigned int k;
        scanf("%u",&k);
        unsigned int array[size];
        for(unsigned int i=0; i<size; i++)
        {
            scanf("%d",&array[i]);
        }

        for(int i=0; i<size; i++)
        {
            for(int j=i; j<size; j++)
            {
                if(array[j] > array[i]) {
                    unsigned temp = array[j];
                    array[j] = array[i];
                    array[i] = temp;
                }
            }
        }

        for(int i=0; i<size; i++)
        {
            printf("%d ",array[i]);
        } printf("\n");

        unsigned count = 0;
        for(int i=0; i<size; i++)
        {
            if((array[i] - array[i+1]) < k) {
                printf("%d-%d = %d\n",array[i],array[i+1],(array[i] - array[i+1]));
                ++count;
            }
        }

        printf("%u\n",count);
    }
    
	return 0;
}

/*
4 11
55 100 33 61 
15 7
57 44 92 28 66 60 37 33 52 38 29 76 8 75 22

Your Output is:
6
105
*/