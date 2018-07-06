#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char string1[MAX_LENGTH];
        scanf("%s",string1);
        char string2[MAX_LENGTH];
        scanf("%s",string2);
        char string2Copy[MAX_LENGTH];
        strcpy(string2Copy,string2);

        int stringLenghth = 0;
        for(int i=0; string2[i] != '\0'; stringLenghth++,i++);
        
        for(int i=0; i<2; i++)
        {
            for(int j=(stringLenghth - 1); j>0; j--)
            {
                char temp = string2[j-1];
                string2[j-1] = string2[j];
                string2[j] = temp;
            }
        }

        if(!(strcmp(string1,string2) == 0)) {
            for(int i=0; i<2; i++)
            {
                for(int j=0; j<(stringLenghth - 1); j++)
                {
                    char temp = string2Copy[j+1];
                    string2Copy[j+1] = string2Copy[j];
                    string2Copy[j] = temp;
                    printf("%s\n",string2Copy);
                }
            }
            if(strcmp(string1,string2Copy) == 0) {
                printf("1\n");
            } else {
                printf("0\n");
            }
        } else {
            if((strcmp(string1,string2) == 0)) {
                printf("1\n");
            } else {
                printf("0\n");
            }
        }
    }
	return 0;
}

/*
int main()
{
    char string1[] = "fsbcnuvqhffbsaqxwp";
    char string2[] = "wpfsbcnuvqhffbsaqx";
    char string2Copy[MAX_LENGTH];
    strcpy(string2Copy,string2);
    printf("String 2 cpy :%s\n",string2Copy);

    int stringLenghth = 0;
    for(int i=0; string2[i] != '\0'; stringLenghth++,i++);
    printf("%d\n",stringLenghth);
    
    for(int i=0; i<2; i++)
    {
        for(int j=(stringLenghth - 1); j>0; j--)
        {
            char temp = string2[j-1];
            string2[j-1] = string2[j];
            string2[j] = temp;
        }
    }

    if(!(strcmp(string1,string2) == 0)) {
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<(stringLenghth - 1); j++)
            {
                char temp = string2Copy[j+1];
                string2Copy[j+1] = string2Copy[j];
                string2Copy[j] = temp;
                printf("%s\n",string2Copy);
            }
        }
        if(strcmp(string1,string2Copy) == 0) {
            printf("1\n");
        } else {
            printf("0\n");
        }
        printf("String 2 cpy Manipulated:%s\n",string2Copy);
    } else {
        if((strcmp(string1,string2) == 0)) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }

    printf("%s\n",string2);
    return 0;
}
*/