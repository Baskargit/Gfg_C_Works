#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int factorOfA[a];
        int factorOfB[b];

        int posA = 0;
        for(int i=1; i<=a; i++)
        {
            if(a%i == 0) {
                factorOfA[posA++] = i;
            }
        }

        int posB = 0;
        for(int i=1; i<=b; i++)
        {
            if(b%i == 0) {
                factorOfB[posB++] = i;
            }
        }

        int divisor = 1;

        for(int i=0; i<posA; i++)
        {
            for(int j=0; j<posB; j++ )
            {
                if(factorOfA[i] == factorOfB[j]) {
                    divisor = factorOfA[i];
                    break;
                }
            }
        }

        printf("Divisor :%d\n",divisor);
    }
	return 0;
}


/*
int main()
{
    int a,b;
    a=12,b=18;
    int factorOfA[a];
    int factorOfB[b];

    int posA = 0;
    for(int i=1; i<=a; i++)
    {
        if(a%i == 0) {
            factorOfA[posA++] = i;
            printf("%d ",i);
        }
    } printf("\n");

    int posB = 0;
    for(int i=1; i<=b; i++)
    {
        if(b%i == 0) {
            factorOfB[posB++] = i;
            printf("%d ",i);
        }
    } printf("\n");

    int divisor = 1;

    if(posA <= posB) {
        for(int i=0; i<posA; i++)
        {
            for(int j=0; j<posB; j++ )
            {
                if(factorOfA[i] == factorOfB[j]) {
                    divisor = factorOfA[i];
                    break;
                }
            }
        }
    } else {
        for(int i=0; i<posB; i++)
        {
            for(int j=0; j<posA; j++ )
            {
                if(factorOfB[i] == factorOfA[j]) {
                    divisor = factorOfB[i];
                    break;
                }
            }
        }
    }

    printf("Divisor :%d\n",divisor);


    return 0;
}
*/
