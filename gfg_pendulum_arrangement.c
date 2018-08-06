#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the Input
        int n;
        scanf("%d",&n);
        int array[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&array[i]);
        }

    // Step 2 --> Sort in Desc order
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(array[j] > array[i]) {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }

    // Step 3 ---> Print the Result
        if(n > 2) {
            int midPos = (n%2 == 0) ? ((n-1)/2) : n/2;
            int pos = 0;

            if(n%2 == 0) {
                pos = 1;
                for(int i=pos; i<=midPos; i++) // First half
                {
                    printf("%d ",array[pos]);
                    pos = pos+2;
                }

                for(int i=0; i<n; i++) // Sort in asec order
                {
                    for(int j=i+1; j<n; j++)
                    {
                        if(array[j] < array[i]) {
                            int temp = array[i];
                            array[i] = array[j];
                            array[j] = temp;
                        }
                    }
                }

                pos = 0;
                printf("%d ",array[pos++]); // Mid element

                for(int i=pos; i<=midPos; i++) // Second half
                {
                    printf("%d ",array[pos]);
                    pos = pos+2;
                } 
                printf("%d",array[n-1]);
            } else {
                for(int i=0; i<midPos; i++)
                {
                    printf("%d ",array[pos]);
                    pos = pos+2;
                }

                for(int i=0; i<n; i++)
                {
                    for(int j=i+1; j<n; j++)
                    {
                        if(array[j] < array[i]) {
                            int temp = array[i];
                            array[i] = array[j];
                            array[j] = temp;
                        }
                    }
                }

                pos = 0;
                printf("%d ",array[pos++]);

                for(int i=pos; i<=midPos; i++)
                {
                    printf("%d ",array[pos]);
                    pos = pos+2;
                }
            }

        } else if(n > 1) {
            (array[0] < array[1]) ? printf("%d %d",array[0],array[1])
                                : printf("%d %d",array[1],array[0]);
        } else {
            printf("%d",array[0]);
        }

        printf("\n");
    }
	return 0;
}

/*
int main()
{
  // Step 1 -> Get the Input
    int n = 3;
    // int array[] = {1 ,3 ,2 ,5 ,4};
    int array[] = {1,2,3};

  // Step 2 --> Sort in Desc order
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(array[j] > array[i]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",array[i]);
    } printf("\n");

  // Step 3 ---> Print the Result
    if(n > 2) {
        int midPos = (n%2 == 0) ? ((n-1)/2) : n/2;
        int pos = 0;

        if(n%2 == 0) {
            pos = 1;
            for(int i=pos; i<=midPos; i++) // First half
            {
                printf("%d ",array[pos]);
                pos = pos+2;
            }

            for(int i=0; i<n; i++) // Sort in asec order
            {
                for(int j=i+1; j<n; j++)
                {
                    if(array[j] < array[i]) {
                        int temp = array[i];
                        array[i] = array[j];
                        array[j] = temp;
                    }
                }
            }

            pos = 0;
            printf("%d ",array[pos++]); // Mid element

            for(int i=pos; i<=midPos; i++) // Second half
            {
                printf("%d ",array[pos]);
                pos = pos+2;
            } 
            printf("%d",array[n-1]);
        } else {
            for(int i=0; i<midPos; i++)
            {
                printf("%d ",array[pos]);
                pos = pos+2;
            }

            for(int i=0; i<n; i++)
            {
                for(int j=i+1; j<n; j++)
                {
                    if(array[j] < array[i]) {
                        int temp = array[i];
                        array[i] = array[j];
                        array[j] = temp;
                    }
                }
            }

            pos = 0;
            printf("%d ",array[pos++]);

            for(int i=pos; i<=midPos; i++)
            {
                printf("%d ",array[pos]);
                pos = pos+2;
            }
        }

    } else if(n > 1) {
        (array[0] < array[1]) ? printf("%d %d",array[0],array[1])
                              : printf("%d %d",array[1],array[0]);
    } else {
        printf("%d",array[0]);
    }

    printf("\n");
    return 0;
}
*/