#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int size;
        scanf("%d",&size);
        int countryOne[size];
        int countryTwo[size];

        for(int i=0; i<size; i++)
        {
            scanf("%d",&countryOne[i]);
        }
        for(int i=0; i<size; i++)
        {
            scanf("%d",&countryTwo[i]);
        }

        int sumOne = 0;
        int sumTwo = 0;

        for(int i=0; i<size; i++)
        {
            if((countryOne[i] - countryTwo[i]) > 0) {
                ++sumOne;
            } else if((countryTwo[i] - countryOne[i]) > 0) {
                ++sumTwo;
            }
        }

        if(sumOne == sumTwo) {
            printf("%d %d DRAW\n",sumOne,sumTwo);
        } else if(sumOne > sumTwo) {
            printf("%d %d A\n",sumOne,sumTwo);
        } else {
            printf("%d %d B\n",sumOne,sumTwo);
        }


    }
    
	return 0;
}

/*
int main()
{   
    int size;
    scanf("%d",&size);
    int countryOne[size];
    int countryTwo[size];

    for(int i=0; i<size; i++)
    {
        scanf("%d",&countryOne[i]);
    }
    for(int i=0; i<size; i++)
    {
        scanf("%d",&countryTwo[i]);
    }

    int sumOne = 0;
    int sumTwo = 0;

    for(int i=0; i<size; i++)
    {
        if((countryOne[i] - countryTwo[i]) > 0) {
            ++sumOne;
        } else if((countryTwo[i] - countryOne[i]) > 0) {
            ++sumTwo;
        }
    }

    if(sumOne == sumTwo) {
        printf("%d %d DRAW\n",sumOne,sumTwo);
    } else if(sumOne > sumTwo) {
        printf("%d %d A\n",sumOne,sumTwo);
    } else {
         printf("%d %d B\n",sumOne,sumTwo);
    }

    return 0;
}
*/