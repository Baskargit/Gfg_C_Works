#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount); 
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the input
        int size;
        scanf("%d",&size);
        int Input[size];
        for(int i=0; i<size; i++)
        {
            scanf("%d",&Input[i]);
        }
        int count = 0;
        int finSize = ((size * (size -1))/2);
        int triangle[(finSize+size)];

        int gtemp[size];
        for(int i=0; i<size; i++)
        {
            gtemp[i] = Input[i];
        }
    // Step 2 --> Get the sum of triangle in unorder form

        for(int i=0; i<size; i++)
        {
            int temp[(size - i)];
            for(int j=0; j<(size - i); j++)
            {
                temp[j] = gtemp[j];
            }
        
            for(int j=0; j<((size - i)); j++)
            {
                triangle[count++] = gtemp[j];
            }

            for(int j=0; j<((size - i) -1); j++)
            {
                gtemp[j] = temp[j] + temp[j+1];
            }
        }

    // Step 3 ---> Print the Result in the triangle format

        int startIndex = (finSize+size);
        int till = startIndex;

        for(int i=1; i<=size; i++)
        {
            startIndex = (startIndex - i);
            for(int j=startIndex; j<till; j++)
            {
                printf("%d ",triangle[j]);
            }
            till = startIndex;
        }
        printf("\n");
    }
	return 0;
}

/*
int main()
{
    int size = 7;
    int Input[] = {5 ,8 ,1 ,2 ,4 ,3 ,14};
    int count = 0;
    int finSize = ((size * (size -1))/2);
    int triangle[(finSize+size)];

    int gtemp[size];
    for(int i=0; i<size; i++)
    {
        gtemp[i] = Input[i];
    }

    for(int i=0; i<size; i++)
    {
        int temp[(size - i)];
        for(int j=0; j<(size - i); j++)
        {
            temp[j] = gtemp[j];
        }
        for(int j=0; j<(size - i); j++)
        {
            printf("%2d ",temp[j]);
        } printf("\n");

        for(int j=0; j<((size - i)); j++)
        {
            triangle[count++] = gtemp[j];
        }

        for(int j=0; j<((size - i) -1); j++)
        {
            gtemp[j] = temp[j] + temp[j+1];
        }
    }

    printf("Before shifting : \n");
    for(int i=0; i<(finSize+size); i++)
    {
        printf("%d ",triangle[i]);
    }
    printf("\n");

    printf("Print final :\n");
    int startIndex = (finSize+size);
    int till = startIndex;

    for(int i=1; i<=size; i++)
    {
        startIndex = (startIndex - i);
        //printf("%d to %d\n",startIndex,till);
        for(int j=startIndex; j<till; j++)
        {
            printf("%d ",triangle[j]);
        }
        till = startIndex;
    }
    printf("\n");
    
    return 0;
}
*/

/*
int main()
{
    int size = 5;
    int Input[] = {4, 7, 3, 6, 7};
    int count = -1;
    int secCount = -1;
    int finSize = ((size * (size -1))/2);
    int triangle[(finSize + size)];

    for(int i=0; i<size; i++)
    {
        if(i == 0) {
            for(int i=0; i<size; i++)
            {
                triangle[++count] = Input[i];
            }
        } else {
            printf("secCou=%d-->count=%d\n",secCount,count);
            for(int j=secCount+i; j<=(((size-i) -1)); j++)
            {
                triangle[++count] = Input[++secCount] + Input[secCount+1];
            }
            printf("Seccount %d\n",secCount);
        }
    }

    for(int i=0; i<(finSize + size); i++)
    {
        printf("%d ",triangle[i]);
    }
    printf("\n");
    return 0;
}
*/