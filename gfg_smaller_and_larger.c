#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int size;
        scanf("%d",&size);
        int array[size];
        int key;
        scanf("%d",&key);
        for(int i=0; i<size; i++)
        {
            scanf("%d",&array[i]);
        }

        int smaller = 0;
        int larger = 0;

        for(int i=0; i<size; i++)
        {
            if(array[i] == key) {
                ++smaller;
                ++larger;
            } else if(array[i] < key) {
                ++smaller;
            } else {
                ++larger;
            }
        }
        printf("%d %d\n",smaller,larger);
    }
	return 0;
}

/*
int main()
{
    int size;
    scanf("%d",&size);
    int array[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d",array[i]);
    }
    int key;
    scanf("%d",&key);

    int smaller = 0;
    int larger = 0;

    for(int i=0; i<size; i++)
    {
        if(array[i] == key) {
            ++smaller;
            ++larger
        } else if(array[i] < key) {
            ++smaller;
        } else {
            ++larger;
        }
    }

    printf("%d %d\n",smaller,larger);

    return 0;
}
*/