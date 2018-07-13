#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 2000

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char Input[MAX_LENGTH];
        scanf("%s",Input);
        int strlength = strlen(Input);
        Input[strlength] = '.';
        Input[strlength+1] = '\0';

        int pos = 0;
        int length = -1;
        char temp[MAX_LENGTH];
        int flag = 0;

        for(int i=0; Input[i] != '\0'; i++)
        {
            if(Input[i] != '.') {
                temp[pos++] = Input[i];
                length++;
            } else {
                if(i != strlength) 
                {
                    for(int j=length; j>=0; j--)
                    {
                        printf("%c",temp[j]);
                        temp[j] = 0;
                    } printf(".");
                    pos = 0;
                    length = -1;
                } else {
                    for(int j=length; j>=0; j--)
                    {
                        printf("%c",temp[j]);
                        temp[j] = 0;
                    }
                    printf("\n");
                    break;
                }
            }
        } 

    }
    
	return 0;
}

/*
int main()
{
    char Input[] = "pqr.mno  #";
    int strlength = strlen(Input);
    Input[strlength] = '.';
    Input[strlength+1] = '\0';
    printf("%s\n",Input);
    printf("%d\n",strlength);

    int pos = 0;
    int length = 0;
    char temp[MAX_LENGTH];
    int flag = 0;

    for(int i=0; Input[i] != '\0'; i++)
    {
        if(Input[i] != '.') {
            temp[pos++] = Input[i];
            length++;
        } else {
            if(i != strlength) 
            {
                for(int j=length; j>=0; j--)
                {
                    printf("%c",temp[j]);
                    temp[j] = 0;
                } printf(".");
                pos = 0;
                length = 0;
            } else {
                for(int j=length; j>=0; j--)
                {
                    printf("%c",temp[j]);
                    temp[j] = 0;
                }
                printf("\n");
                break;
            }
        }
    } 

    return 0;
}
*/