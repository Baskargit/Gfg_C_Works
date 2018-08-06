#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000

int caseSplit(char string[] ,char allUpper[] ,char allLower[] ,int length ,char type[]); 
void sortAsec(char arr[] , int length);

int caseSplit(char string[] ,char allUpper[] ,char allLower[] ,int length ,char type[])
{
    int pos = 0;
    if(type[0] == 'U') {
        for(int i=0; string[i] != '\0'; i++)
        {
            if((string[i] >= 'A' && string[i] <= 'Z')) {
                allUpper[pos++] = string[i]; 
            }
        }
        allUpper[pos] = '\0';
    } else {
        for(int i=0; string[i] != '\0'; i++)
        {
            if((string[i] >= 'a' && string[i] <= 'z')) {
                allLower[pos++] = string[i]; 
            }
        }
        allLower[pos] = '\0';
    }
    return pos;
}

void sortAsec(char arr[] , int length)
{
    for(int i=0; i<length; i++)
    {
        for(int j=i+1; j<length; j++)
        {
            if(arr[j] < arr[i] ) {
                char temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char Input[MAX_LENGTH];
        scanf("%s",Input);
        int length = strlen(Input);
        char allUpper[length];
        char allLower[length];
        char typeU[1] = {'U'};
        char typeL[1] = {'L'};

        int upperCount = caseSplit(Input ,allUpper ,allLower ,length ,typeU);
        int lowerCount = caseSplit(Input ,allUpper ,allLower ,length ,typeL);

        sortAsec(allUpper,upperCount);
        sortAsec(allLower,lowerCount);

        if(upperCount && lowerCount) {
            int upperPos = 0;
            int lowerPos = 0;
            for(int i=0; i<length; i++)
            {
                (upperPos < upperCount) ? printf("%c",allUpper[upperPos++]) : upperPos++;
                (lowerPos < lowerCount) ? printf("%c",allLower[lowerPos++]) : lowerPos++;
            } printf("\n");
        } else if(upperCount) {
            printf("%s\n",allUpper);
        } else {
            printf("%s\n",allLower);
        }
    }
	return 0;
}

/*
int main()
{
    char Input[] = "bAwutndekWEdkd";
    //char Input[] = "BASSSSADF";
    int length = strlen(Input);
    char allUpper[length];
    char allLower[length];
    char typeU[1] = {'U'};
    char typeL[1] = {'L'};

    int upperCount = caseSplit(Input ,allUpper ,allLower ,length ,typeU);
    int lowerCount = caseSplit(Input ,allUpper ,allLower ,length ,typeL);

    sortAsec(allUpper,upperCount);
    sortAsec(allLower,lowerCount);

    printf("All uppers :%s with flag :%d\n",allUpper,upperCount);
    printf("All lowers :%s with flag :%d\n",allLower,lowerCount);

    if(upperCount && lowerCount) {
        int upperPos = 0;
        int lowerPos = 0;
        for(int i=0; i<length; i++)
        {
            (upperPos < upperCount) ? printf("%c",allUpper[upperPos++]) : upperPos++;
            (lowerPos < lowerCount) ? printf("%c",allLower[lowerPos++]) : lowerPos++;
        } printf("\n");
    } else if(upperCount) {
        printf("%s\n",allUpper);
    } else {
        printf("%s\n",allLower);
    }

    return 0;
}
*/