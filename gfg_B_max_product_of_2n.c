#include<stdio.h>
/*
int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 ---> Get the Input

        int size;
        scanf("%d",&size);
        int Input[size];
        for(int i=1; i<=size; i++)
        {
            scanf("%d",&Input[i]);
        }

    // Step 2 ---> Store the Product of two number and sort the number in desc

        int Product[(size*2)];
        int position = 0;

        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                Product[position] = (Input[i] * Input[j]);
                position++;
            }
        }

        for(int i=0; i<position; i++) // Sort in desc order
        {
            for(int j=i+1; j<position; j++)
            {
                if(Product[i] < Product[j]) {
                    int temp = Product[j];
                    Product[j] = Product[i];
                    Product[i] = temp;
                }
            }
        }

        
    // Step 3 ---> Print the Result

        printf("%d\n",Product[0]);
    }
    
	return 0;
}
*/

int main()
{
	// Step 1 ---> Get the Input

        int size = 41;
        int Input[] = {467,334,500,169,724,478,358,962,464,705,145,281,827,961,491,995,942,827,436,391,604,902,153,292,382,421,716,718,895,447,726,771,538,869,912,667,299,35,894,703,811};

    // Step 2 ---> Store the Product of two number and sort the number in desc

        int Product[(size*(size - 1))/2];
        int position = 0;

        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                Product[position] = (Input[i] * Input[j]);
                position++;
            }
        }

        for(int i=0; i<position; i++) // Sort in desc order
        {
            for(int j=i+1; j<position; j++)
            {
                if(Product[i] < Product[j]) {
                    int temp = Product[j];
                    Product[j] = Product[i];
                    Product[i] = temp;
                }
            }
        }

        printf("After sorting :\n");

        for(int i=0; i<position; i++) // Sort in desc order
        {
            printf("%d\n",Product[i]);
        }

    // Step 3 ---> Print the Result

        printf("%d\n",Product[0]);

    // Step 4 ---> Flush the Input
    
        for(int i=0; i<position; i++)
        {
            Product[i] = 0;
        }
    
	return 0;
}