#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char Input[100];
        scanf("%s",Input);

        int counter = 0;
        for(int i=0; Input[i] !='\0'; i++)
        {
            if(Input[i] >= 65 && Input[i] <= 90) {
                ++counter;
            }
        }
        printf("%d\n",counter);
    }
    
	return 0;
}