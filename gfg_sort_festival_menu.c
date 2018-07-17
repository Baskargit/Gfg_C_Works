#include <stdio.h>
#include <string.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char menuOne[5][16];
        scanf("%s %s %s %s %s",menuOne[0],menuOne[1],menuOne[2],menuOne[3],menuOne[4]);
        char newLineFeed = getchar();
        char menuTwo[5][16];
        scanf("%s %s %s %s %s",menuTwo[0],menuTwo[1],menuTwo[2],menuTwo[3],menuTwo[4]);

        int flag = 1;
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                if(strcmp(menuOne[i],menuTwo[j]) == 0) {
                    flag = 0;
                    i = 5;
                    break;
                }
            }
        }

        if(flag) {
            printf("BEHAPPY\n");
        } else {
            printf("CHANGE\n");
        }
    }
    
	return 0;
}