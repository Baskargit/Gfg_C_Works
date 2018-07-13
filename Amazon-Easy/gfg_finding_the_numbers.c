#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the Input

        unsigned int N;
        scanf("%u",&N);
        unsigned long long int array[((2 * N) + 2)];
        unsigned long long int final[2];
        
        for(unsigned long long int i=0; i<((2 * N) + 2); i++)
        {
            scanf("%llu",&array[i]);
        }

        int found = 0;

    // Step 2 --> Find the unpair numbers

        for(unsigned long long int i=0; i<((2 * N) + 2);)
        {
            for(unsigned long long int j=i+1; j<((2 * N) + 2); j++)
            {
                if(array[i] == array[j]) {
                    array[j] = 0;
                    found = 1;
                    break;
                }
            }
            if(found) {
                array[i] = 0;
                found = 0;
                i++;
            } else {
                i++;
            }
        }

        int pos = 0;
        for(unsigned long long int i=0; i<((2 * N) + 2); i++)
        {
            if(array[i] != 0) {
                final[pos++] = array[i];
            }
        }

    // Step 3 ---> Print the result

        if(final[0] < final[1]) {
            printf("%llu %llu",final[0],final[1]);
        } else {
            printf("%llu %llu",final[1],final[0]);
        }
        printf("\n");
    }
    
	return 0;
}

/*
int main()
{
  // Step 1 -> Get the Input

    unsigned int N;
    scanf("%u",&N);
    unsigned long long int array[((2 * N) + 2)];
    unsigned long long int final[2];
    
    for(unsigned long long int i=0; i<((2 * N) + 2); i++)
    {
        scanf("%llu",&array[i]);
    }

    for(unsigned long long int i=0; i<((2 * N) + 2); i++)
    {
        printf("%llu ",array[i]);
    }  printf("\n");

    int found = 0;

  // Find the unpair numbers

    for(unsigned long long int i=0; i<((2 * N) + 2);)
    {
        for(unsigned long long int j=i+1; j<((2 * N) + 2); j++)
        {
            if(array[i] == array[j]) {
                array[j] = 0;
                found = 1;
                break;
            }
        }
        if(found) {
            array[i] = 0;
            found = 0;
            i++;
        } else {
            i++;
        }
    }

    int pos = 0;
    for(unsigned long long int i=0; i<((2 * N) + 2); i++)
    {
        if(array[i] != 0) {
            final[pos++] = array[i];
        }
    }

  // Step 3 ---> Print the result

    if(final[0] < final[1]) {
        printf("%llu %llu",final[0],final[1]);
    } else {
        printf("%llu %llu",final[1],final[0]);
    }
    printf("\n");

    return 0;
}
*/