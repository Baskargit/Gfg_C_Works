#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int size;
        scanf("%d",&size);
        int Input[size];
        for(int i=0; i<size; i++)
        {
            scanf("%d",&Input[i]);
        }

        int flag = 0;
        for(int i=0; i<size; i++)
        {
            if(Input[i] != 0) {
                for(int j=i+1; j<size; j++)
                {
                    if((Input[i] == Input[j]) && (Input[j] !=0)) {
                        Input[j] = 0;
                        Input[i] = 0;
                        break;
                    }
                }
            }
        }

        int alone = 0;

        for(int i=0; i<size; i++)
        {
            if(Input[i] > alone) {
                alone = Input[i];
                break;
            }
        }

        printf("%d\n",alone);

    }
    
	return 0;
}

/*
int main()
{
    int size;
    scanf("%d",&size);
    int Input[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d",&Input[i]);
    }

    int flag = 0;
    for(int i=0; i<size; i++)
    {
        if(Input[i] != 0) {
            for(int j=i+1; j<size; j++)
            {
                if((Input[i] == Input[j]) && (Input[j] !=0)) {
                    Input[j] = 0;
                    Input[i] = 0;
                    break;
                }
            }
        }
    }

    int alone = 0;

    for(int i=0; i<size; i++)
    {
        if(Input[i] > alone) {
            alone = Input[i];
            break;
        }
    }

    printf("ALone is %d\n",alone);

    return 0;
}
*/