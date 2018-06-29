#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 ---> Get the Input
        int size;
        scanf("%d",&size);
        unsigned long long int input[size];
        for(int i=0; i<size; i++)
        {
            scanf("%ld",&input[i]);
        }
        
    // Step 2 ---> Sort in Desc order
    
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size;)
            {
                if(input[j] > input[i]) {
                    long int temp = input[j];
                    input[j] = input[i];
                    input[i] = temp;
                    j++;
                } else {
                    j++;
                }
            }
        }

    // Step 3 ---> Print the result

        printf("%llu %llu\n",input[(size-1)],input[0]);
    }
	return 0;
}