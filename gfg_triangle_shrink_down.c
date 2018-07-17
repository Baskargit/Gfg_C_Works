#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char string[5];
        scanf("%s",string);

        for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                if(j<i) {
                    printf(".");
                } else {
                    printf("%c",string[j]);
                }
            } printf("\n");
        }
    }
	return 0;
}

/*
int main()
{
    char string[] = "Geeks";

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(j<i) {
                printf(".");
            } else {
                printf("%c",string[j]);
            }
        } printf("\n");
    }
    return 0;
}
*/