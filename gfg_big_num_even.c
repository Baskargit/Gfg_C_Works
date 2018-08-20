#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char s1[MAX_LENGTH];
        char s2[MAX_LENGTH];
        scanf("%s",s1);
        scanf("%s",s2);

        int flag = (( (s1[strlen(s1) - 1] - '0') * (s2[strlen(s2) - 1] - '0') )%2==0) ? 1 : 0 ;
        printf("%d\n",flag);
    }
	return 0;
}

/*
int main()
{
    char s1[] = "120";
    char s2[] = "12";

    int flag = (( (s1[strlen(s1) - 1] - '0') * (s2[strlen(s2) - 1] - '0') )%2==0) ? 1 : 0 ;
    printf("%d\n",flag);

    return 0;
}
*/