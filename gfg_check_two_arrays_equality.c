#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int arraySize = 5;
        scanf("%d",&arraySize);

        int array1[arraySize];
        int array2[arraySize];
        for(int i=0; i<arraySize; i++)
        {
            scanf("%d",&array1[i]);
        }
        for(int i=0; i<arraySize; i++)
        {
            scanf("%d",&array2[i]);
        }

        int presence = 0;

        for(int i=0; i<arraySize;)
        {
            for(int j=0; j<arraySize;)
            {
                if(array1[i] == array2[j]) {
                    presence = 1;
                    break;
                } else {
                    presence = 0;
                    j++;
                }
            }
            if(presence == 1) {
                i++;
            } else {
                i = arraySize;
                presence = 0;
            }
        }

        printf("%d\n",presence);       
    }
    
	return 0;
}

/*
int main()
{
    int arraySize = 5;

    int array1[] = {5,1,4,3,2};
    int array2[] = {4,5,3,6,2};

    int presence = 0;

    for(int i=0; i<arraySize;)
    {
        for(int j=0; j<arraySize;)
        {
            if(array1[i] == array2[j]) {
                presence = 1;
                break;
            } else {
                presence = 0;
                j++;
            }
        }
        if(presence == 1) {
            i++;
        } else {
            i = arraySize;
            presence = 0;
        }
    }

    printf("%d\n",presence);

    return 0;
}
*/