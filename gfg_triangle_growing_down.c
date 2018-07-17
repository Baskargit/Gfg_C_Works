#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char string[5];
        scanf("%s",string);

        for(int i=4; i>=0; i--)
        {
            for(int j=0; j<5; j++)
            {
                if(j>=i) {
                    printf("%c",string[j-i]);
                } else {
                    printf(".");
                }
            } printf("\n");
        }
    }
	return 0;
}