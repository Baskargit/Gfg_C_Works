#include <stdio.h>
#define MAX_LENGTH 100000

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char newLineFeed = getchar();
        char string[MAX_LENGTH];
        scanf("%[^\n]s",string);

        int flag = 0;
        int overallFlag = 0;
        for(int i=0; string[i] != '\0'; i++)
        {
            if((string[i] >= '0' && string[i] <='9')) {
                printf("%c",string[i]);
                flag = (!(string[i+1] >= '0' && string[i+1] <='9')) ? 1 : 0;
                overallFlag = 1;
            } else {
                if(flag) {
                    printf(" ");
                    flag = 0;
                }
            }
        } 
        
        printf("%s",((overallFlag) ? "\n" : "No Integers\n"));
    }
	return 0;
}

/*
int main()
{
    char string[] = "geeksforgeeks 12 23 practice";

    int flag = 0;
    for(int i=0; string[i] != '\0'; i++)
    {
        if((string[i] >= '0' && string[i] <='9')) {
            printf("%c",string[i]);
            flag = (!(string[i+1] >= '0' && string[i+1] <='9')) ? 1 : 0;
        } else {
            if(flag) {
                printf(" ");
                flag = 0;
            }
        }
    } printf("\n");
    return 0;
}
*/