#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 : Get the Input
        unsigned long int size;
        scanf("%ld",&size);
        unsigned long int sum1 = 0;
        unsigned long int sum2 = 0;
        unsigned long int number;

        sum1 = ((size*(size+1))/2);
        
        for(int i=0; i<(size-1); i++)
        {
            scanf("%ld",&number);
            sum2 += number;
        }
        
    // Step 3 : Print the Result
        printf("%ld\n",(sum1-sum2));

    }
	return 0;
}

/*
int main()
{
    // Step 1 : Get the Input
    int size = 5;
    unsigned long int array[] = {2,5,1,3};
    unsigned long int sum1 = 0;
    unsigned long int sum2 = 0;

    // Step 2 : Get the missing element
    sum1 = ((size*(size+1))/2);
    for(int i=0; i<(size-1); i++)
    {
        sum2 += array[i];
    }

    // Step 3 : Print the Result
    printf("%ld\n",((sum1 >= sum2) ? sum1-sum2 : sum2-sum1));
}
*/
