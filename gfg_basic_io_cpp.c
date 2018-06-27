#include <stdio.h>

int main()
{
    int testCaseCount;
    scanf("%d",&testCaseCount);
    int  finalOutput[testCaseCount];
    int a,b;

    for(int i=0; i<testCaseCount; i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        finalOutput[i] = (a*b);
    }

    for(int i=0; i<testCaseCount; i++)
    {
        printf("%d\n",finalOutput[i]);
    }
    return 0;
}