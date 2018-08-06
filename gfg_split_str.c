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
        int flag = 0;

        if(strlen(string) >= 10) {
            flag = 1;
        } else {
            for (int i =1; i < strlen(string); i++) // Brute Force
            {
                for (int j = i + 1; j < strlen(string); j++)
                {
                    for (int k = j + 1; k < strlen(string); k++)
                    {
                        int pos = 0;

                        char string1[6];
                        char string2[6];
                        char string3[6];
                        char string4[6];

                        for(int l=0; l<i; l++)
                        {
                            string1[pos++] = string[l];
                        } 
                        string1[pos] = '\0';
                        pos = 0;

                        for(int m=i; m<j; m++)
                        {
                            string2[pos++] = string[m];
                        }
                        string2[pos] = '\0';
                        pos = 0;

                        for(int n=j; n<k; n++)
                        {
                            string3[pos++] = string[n];
                        }
                        string3[pos] = '\0';
                        pos = 0;

                        for(int o=k; o<=strlen(string); o++)
                        {
                            string4[pos++] = string[o];
                        }
                        
                        string4[pos] = '\0';
                        pos = 0;

                        if((strcmp(string1,string2) != 0 && strcmp(string1,string3) != 0 && strcmp(string1,string4) != 0) && (strcmp(string2,string3) != 0 && strcmp(string2,string4) != 0) && (strcmp(string3,string4) != 0)) {
                            flag = 1;
                            return 0;
                        }
                    }
                }
            }
        }
        printf("%d\n",((flag) ? 1 : 0));
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
*/

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

/*
int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char string[MAX_LENGTH];
        scanf("%s",string);
        
        int flag = 0;
        if(strlen(string) >= 10) {
            flag = 1;
        } else {
            if(strlen(string) > 3) 
            {
                int pointer = 0;
                int length = 0;
                char tempSplitted[(strlen(string))][(strlen(string))];
                int rowPos = 0;
                int colPos = 0;
                for(int i=1; i<=(strlen(string)); )  // Row count
                {
                    while (length < strlen(string)) {
                        for(pointer = length; pointer<(length+i); pointer++)
                        {
                            tempSplitted[rowPos][colPos++] = string[pointer];
                        }                
                        tempSplitted[rowPos++][colPos] = '\0';
                        colPos = 0;
                        length = length + i;
                    }

                    if(rowPos >= 4) 
                    {
                        int cprowPos = rowPos;
                        int intFlag = 0;
                        for(int j=0; j<rowPos; j++)
                        {
                            for(int k=j+1; j<rowPos; j++)
                            {
                                if((strcmp(tempSplitted[j],tempSplitted[k])) == 0) {
                                    intFlag = 1;
                                    --cprowPos;
                                    strcpy(tempSplitted[j],"\0\0\0\0");
                                }
                            }
                            if(intFlag) {
                                intFlag = 0;
                                --cprowPos;   
                            }
                        }

                        if(cprowPos >= 4) {
                            flag = 1;
                            break;
                        } else {
                            flag = 0;
                            i++;
                        }
                    } else {
                        flag = 0;
                        break;
                    }

                    pointer = 0;
                    length = 0;
                    rowPos = 0;
                    colPos = 0;
                }
            } else {
                flag = 0;
            } 
        }
        printf("%d\n",((flag) ? 1 : 0));
    }
	return 0;
}
*/

/*
int main()
{
    //char string[] = "geeksforgeeks";
    // char string[] = "aaabb";
    // char string[] = "brnk";
    char string[] = "aabbbbab";
    
    int flag = 0;
    if(strlen(string) >= 10) {
        flag = 1;
    } else {
        if(strlen(string) > 3) 
        {
            int pointer = 0;
            int length = 0;
            char tempSplitted[(strlen(string))][(strlen(string))];
            int rowPos = 0;
            int colPos = 0;
            for(int i=1; i<=(strlen(string)); )  // Row count
            {
                while (length < strlen(string)) {
                    for(pointer = length; pointer<(length+i); pointer++)
                    {
                        printf("%c",string[pointer]);
                        tempSplitted[rowPos][colPos++] = string[pointer];
                    }                
                    tempSplitted[rowPos++][colPos] = '\0';
                    colPos = 0;
                    printf(" ");
                    length = length + i;
                }
                printf("\n");
                printf("Temp Splitted\n");

                if(rowPos >= 4) 
                {
                    int cprowPos = rowPos;
                    int intFlag = 0;
                    printf("rowPos is %d\n",rowPos);
                    for(int j=0; j<rowPos; j++)
                    {
                        for(int k=j+1; k<rowPos; k++)
                        {
                            if((strcmp(tempSplitted[j],tempSplitted[k])) == 0) {
                                intFlag = 1;
                                --cprowPos;
                                strcpy(tempSplitted[k],"\0\0\0\0");
                            }
                        }
                        if(intFlag) {
                            intFlag = 0;
                            --cprowPos;   
                        }
                    }
                    printf("cprowPos is %d\n",cprowPos);

                    if(cprowPos >= 4) {
                        flag = 1;
                        break;
                    } else {
                        flag = 0;
                        i++;
                    }
                    printf("\n");
                } else {
                    flag = 0;
                    break;
                }

                pointer = 0;
                length = 0;
                rowPos = 0;
                colPos = 0;
            }
        } else {
            flag = 0;
        } 
    }
    printf("\n");

    printf("%d\n",((flag) ? 1 : 0));

    return 0;
}
*/
