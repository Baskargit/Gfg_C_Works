#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the Input
        int N;
        scanf("%d",&N);
        int digits[N];
        for(int i=0; i<N; i++)
        {
            scanf("%d",&digits[i]);
        }

    // Step 2 --> Re-arrange the array in desc order

        for(int i=0; i<N; i++)
        {
            for(int j=i+1; j<N; j++)
            {
                if(digits[j] > digits[i]) {
                    int temp = digits[j];
                    digits[j] = digits[i];
                    digits[i] = temp;
                }
            }
        }

    // Step 3 ---> Print the Result

        for(int i=0; i<N; i++)
        {
            printf("%d",digits[i]);
        } printf("\n");

    }
    
	return 0;
}

/*
int main()
{
  // Step 1 -> Get the Input
    int N;
    scanf("%d",&N);
    int digits[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d",&digits[i]);
    }

  // Step 2 --> Re-arrange the array in desc order

    for(int i=0; i<N; i++)
    {
        for(int j=i+1; j<N; j++)
        {
            if(digits[j] > digits[i]) {
                int temp = digits[j];
                digits[j] = digits[i];
                digits[i] = temp;
            }
        }
    }

  // Step 3 ---> Print the Result

    for(int i=0; i<N; i++)
    {
        printf("%d",digits[i]);
    } printf("\n");

    return 0;
}
*/