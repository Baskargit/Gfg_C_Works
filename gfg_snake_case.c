#include <stdio.h>
/*
int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int length = 0;
        scanf("%d",&length);
        char string[length];
        scanf("%s",string);

        for(int i=0; string[i] != '\0'; i++)
        {
            if((string[i]>=65 && string[i]<=90)) {
                string[i] = ((string[i] - 'A') + 97);
            } else {
                if(string[i] == 32) {
                    string[i] = '_';
                }
            }
        }

        printf("%s\n",string);
    }
    
	return 0;
}
*/

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int length;
        scanf("%d",&length);
        char c = getchar();
        char string[length];
        scanf("%[^\n]s",string) ;
        
        int index;
        int endIndex;
    
        for(int i=0; i<length;)
        {
            if((string[i] > 32)) {
                index = i;
                break;
            } else {
                i++;
            }
        } 
    
        for(int i=length; i>=0;)
        {
            if((string[i] > 32)) {
                endIndex = i;
                break;
            } else {
                i--;
            }
        }
    
        for(int i=index; i<=endIndex; i++)
        {
            if((string[i]>=65 && string[i]<=90)) {
                string[i] = ((string[i] - 'A') + 97);
            } else {
                if((string[i] == 32)) {
                    string[i] = '_';
                }
            }
        }
    
        for(int i=index; i<=endIndex; i++)
        {
            printf("%c",string[i]);
        } printf("\n");
        
    }
 
	return 0;
}