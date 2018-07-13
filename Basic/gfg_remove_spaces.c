#include <stdio.h>
#define MAX_LENGTH 1000

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char Input[MAX_LENGTH];
        char c = getchar();
        scanf("%[^\n]",Input);
        
        for(int i=0; Input[i] != '\0'; i++)
        {
            if(Input[i] != 32) {
                printf("%c",Input[i]);
            }
        }
        printf("\n");
    }
	return 0;
}

/*
int main()
{
    char Input[MAX_LENGTH];
    scanf("%[^\n]",Input);
    
    for(int i=0; Input[i] != '\0'; i++)
    {
        if(Input[i] != 32) {
            printf("%c",Input[i]);
        }
    }
    printf("\n");
}
*/