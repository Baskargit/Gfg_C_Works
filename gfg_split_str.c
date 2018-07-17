#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int size;
        scanf("%d",&size);
        char Input[MAX_LENGTH];
        scanf("%s",Input);

        int strLength = strlen(Input);
        char splitted[4][250];
        int flag = 1;

        if(strLength >= 4) {
            int different = 0;
            int multipleFactor = 1 * (strLength/4);
            int pointer = 0;
            int pos = 0;

            for(int i=0; i<4; i++)
            {
                char temp[250];
                pos = 0;
                if(i == 3) {
                    for(int j=pointer; j<strLength; j++)
                    {   
                        temp[pos++] = Input[j];
                        pointer++;
                    } temp[pos] = '\0';
                    strcpy(splitted[i],temp);
                } else {
                    int till = (multipleFactor + pointer);
                    for(int j=pointer; j<till; j++)
                    {   
                        temp[pos++] = Input[j];
                        pointer++;
                    } temp[pos] = '\0';
                    strcpy(splitted[i],temp);
                }
            }

            for(int i=0; i<3; i++)
            {
                if((strcmp(splitted[i],splitted[i+1])) == 0) {
                    flag = 0;
                }
            }
        } else {
            flag = 0;
        }

        if(flag) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }
	return 0;
}


/*
int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int size;
        scanf("%d",&size);
        char Input[MAX_LENGTH];
        scanf("%s",Input);

        int strLength = strlen(Input);
        char splitted[4][250];
        int flag = 1;

        if(strLength >= 4) {
            int different = 0;
            int multipleFactor = 1 * (strLength/4);
            int pointer = 0;
            int pos = 0;
            printf("Multiplefactor %d and pointer %d\n",multipleFactor,pointer);

            for(int i=0; i<4; i++)
            {
                char temp[250];
                pos = 0;
                if(i == 3) {
                    for(int j=pointer; j<strLength; j++)
                    {   
                        temp[pos++] = Input[j];
                        pointer++;
                    } temp[pos] = '\0';
                    strcpy(splitted[i],temp);
                } else {
                    int till = (multipleFactor + pointer);
                    for(int j=pointer; j<till; j++)
                    {   
                        printf("Entered else loop pointer %d\n",pointer);
                        temp[pos++] = Input[j];
                        pointer++;
                    } temp[pos] = '\0';
                    strcpy(splitted[i],temp);
                }
            }

            for(int i=0; i<4; i++)
            {
                printf("%s\n",splitted[i]);
            }

            for(int i=0; i<3; i++)
            {
                if((strcmp(splitted[i],splitted[i+1])) == 0) {
                    flag = 0;
                }
            }
        } else {
            flag = 0;
        }

        if(flag) {
            printf("1\n");
        } else {
            printf("0\n");
        }

        return 0;
    }
    
	return 0;
}
*/