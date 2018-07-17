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
        for(int i=0; i<size; i++)
        {
            scanf("%d",&array[i]);
        }

        for(int i=0; i<size; i++)
        {
            if(array[i] != 0) {
                for(int j=i+1; j<size; j++)
                {
                    if(array[i] == array[j]) {
                        array[j] = 0;
                        array[i] = 0;
                        break;
                    }
                }
            }
        }

        int flag = 1;
        int val1 , val2;
        for(int i=0; i<size; i++)
        {
            if(array[i] > 0) {
                if(flag) {
                    val1 = array[i];
                    flag = 0;
                } else {
                    val2 = array[i];
                }
            } 
        }

        if(val1 < val2) {
            printf("%d %d\n",val1,val2);
        } else {
            printf("%d %d\n",val2,val1);
        }
        
    }
	return 0;
}

/*
int main()
{   
    int size = 6;
    int array[] = {2 ,2 ,5 ,5 ,6 ,7};

    for(int i=0; i<size; i++)
    {
        if(array[i] != 0) {
            for(int j=i+1; j<size; j++)
            {
                if(array[i] == array[j]) {
                    array[j] = 0;
                    array[i] = 0;
                    break;
                }
            }
        }
    }

    for(int i=0; i<size; i++)
    {
        if(array[i] > 0) {
            printf("%d ",array[i]);
        }
    }
    printf("\n");

    return 0;
}
*/