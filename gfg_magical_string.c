#include <stdio.h>
#define MAX_LENGTH 100

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char string[MAX_LENGTH];
        scanf("%s",string);

        for(int i=0; string[i] != '\0'; i++)
        {
            printf("%c",(('z' - string[i])+'a'));
        } 
        printf("\n");
    }
	return 0;
}

/*
int main()
{
    char string[] = "az";

    for(int i=0; string[i] != '\0'; i++)
    {
        printf("%c",(('z' - string[i])+'a'));
    } printf("\n");

    return 0;
}
*/