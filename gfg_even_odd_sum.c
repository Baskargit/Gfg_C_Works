#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        unsigned int size;
        scanf("%u",&size);
        unsigned int array[size];
        for(int i=0; i<size; i++)
        {
            scanf("%u",&array[i]);
        }
        unsigned int evenSum = 0;
        unsigned int oddSum = 0;

        for(int i=0; i<size; i++)
        {
            if(i%2 == 0) {
                evenSum += array[i];
            } else {
                oddSum += array[i];
            }
        } 

        printf("%u\n%u\n",evenSum,oddSum);
    }
	return 0;
}

/*
int main()
{
    unsigned int size = 6;
    unsigned int array[] = {1 ,2 ,3 ,4 ,5 ,6};
    unsigned int evenSum = 0;
    unsigned int oddSum = 0;

    for(int i=0; i<size; i++)
    {
        if(i%2 == 0) {
            evenSum += array[i];
            printf("o ");
        } else {
            oddSum += array[i];
            printf("e ");
        }
    } 

    printf("\n%u\n%u\n",evenSum,oddSum);

    return 0;
}
*/