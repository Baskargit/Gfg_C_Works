#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    long int secondLargest;
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 ---> Get the Input
        int size;
        scanf("%d",&size);
        long int input[size];
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

        secondLargest = input[1];

        for(int i=1; i<size; i++)
        {
            if(input[0] != input[i]) {
                secondLargest = input[i];
                break;
            }  else {
                secondLargest = -1;
            }
        }

    // Step 3 ---> Print the result

        printf("%ld\n",secondLargest);
    }
	return 0;
}

/*
int main()
{
  // Step 1 ---> Get the Input
    int size = 5;
    long int input[] = {2 ,4 ,5 ,6 ,7};
    
  // Step 2 ---> Sort in Desc order
  
    for(int i=0; i<size; i++)
    {
        printf("Initial Value :\n");
        for(int i=0; i<size; i++){printf("%ld ",input[i]);};
        printf("\n");
        printf("Manipulation Region :\n");
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
            for(int i=0; i<size; i++){printf("%ld ",input[i]);};printf("\n");
        }
        printf("\n");
    }

  // Step 3 ---> Print the result

    printf("%ld\n",input[1]);
    return 0;
}
*/