#include <stdio.h>
#include <string.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char subString[10000];
        scanf("%s",subString);
        char string[10000];
        scanf("%s",string);
        
        int index = -1;
        
        for(int k=0; k<strlen(string); k++)
        {
            for(int i=(((strlen(string)) -1) -k); i>=0; i--)
            {
                char temp[10000];
                int pos = 0;
                for(int j=i; j<=((strlen(string)) -k); j++)
                {
                    temp[pos++] = string[j];
                } temp[pos] = '\0';
                
                if(strcmp(temp,subString) == 0) {
                    index = i+1;
                    k = strlen(string);
                    break;
                }
            }
        }
        printf("%d\n",index);
    }
    
	return 0;
}

/*
Link : https://practice.geeksforgeeks.org/problems/find-substring-from-last-of-the-given-string/0
*/