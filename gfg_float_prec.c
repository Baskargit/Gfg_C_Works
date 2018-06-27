#include <stdio.h>

int main()
{
    int testCaseCount;
    scanf("%d",&testCaseCount);
    float  finalOutput[testCaseCount];
    float num;
    int precision;

    for(int i=0; i<testCaseCount; i++)
    {
        scanf("%f",&num);
        scanf("%d",&precision);
        printf("%0.if\n",precision,num);
    }

    for(int i=0; i<testCaseCount; i++)
    {
        printf("%f\n",finalOutput[i]);
    }
    return 0;
}