#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 10000

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char Input[MAX_LENGTH];
        scanf("%s",Input);

        int pos = 0;
        char reversed[(strlen(Input))];
        for(int i=((strlen(Input)) - 1); i>=0; i--)
        {
            reversed[pos++] = Input[i];
        } 
        reversed[pos] = '\0';
        pos = 0;

        if((strcmp(Input,reversed) == 0)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }

    }
    
	return 0;
}

int main()
{   
    char Input[MAX_LENGTH];
    scanf("%s",Input);

    int pos = 0;
    char reversed[(strlen(Input))];
    for(int i=((strlen(Input)) - 1); i>=0; i--)
    {
        reversed[pos++] = Input[i];
    } reversed[pos] = '\0';

    if((strcmp(Input,reversed) == 0)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
