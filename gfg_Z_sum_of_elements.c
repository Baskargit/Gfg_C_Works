#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the Input
        int size1 = 0;
        int size2 = 0;
        scanf("%d %d",&size1,&size2);
        int arr1[((size1) * (size2))];
        for(int i=0; i<((size1) * (size2)); i++)
        {
            scanf("%d",&arr1[i]);
        }
    
    // Step 2 --> Get the sum

        int sum = 0;

        for(int i=0; i<(size1 * size2); i++)
        {
            sum = sum + arr1[i];
        }

    // Step 3 ---> Print the Result

        printf("%d\n",sum);
    }
    
	return 0;
}

/*
int main()
{
    int size1 = 3;
    int arr1[] = {1,0,0};
    int size2 = 3;
    int arr2[] = {8,-9,-1};

    int sum = 0;

    for(int i=0; i<size1; i++)
    {
        sum = sum + arr1[i];
    }

    for(int i=0; i<size2; i++)
    {
        sum = sum + arr2[i];
    }

    printf("%d\n",sum);

    return 0;
}
*/