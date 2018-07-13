#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the Input
        unsigned long long int Input[10];
        for(int i=0; i<10; i++)
        {
            scanf("%llu",&Input[i]);
        }

    // Step 2 --> Print the output

        if(Input[5] != Input[6]) {
            printf("%llu\n",Input[4]);
        } else {
            printf("%llu\n",Input[5]);
        }

    }
    
	return 0;
}

/*
int main()
{   
  // Step 1 -> Get the Input
    long long int Input[10];
    for(int i=0; i<10; i++)
    {
        scanf("%lld",&Input[i]);
    }

  // Step 2 --> Print the output

    if(Input[5] != Input[6]) {
        printf("%lld\n",Input[4]);
    } else {
        printf("%lld\n",Input[5]);
    }

    return 0;
}
*/