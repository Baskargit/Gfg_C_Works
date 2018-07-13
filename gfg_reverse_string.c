#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char string[MAX_LENGTH];
        scanf("%s",string);

        for(int i=((strlen(string)) - 1); i>=0; i--)
        {
            printf("%c",string[i]);
        } 
        printf("\n");
    }
    
	return 0;
}

/*
int main()
{
    char string[] = "GeeksforGeeks";

    for(int i=((strlen(string)) - 1); i>=0; i--)
    {
        printf("%c",string[i]);
    } printf("\n");

    return 0;
}
*/