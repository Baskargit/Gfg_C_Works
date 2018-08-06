#include <stdio.h>
#include <string.h>

void substrings(char Input[] , char subStrings[][100] ,int revORnot ,char subStringsReversed[][100]);

void substrings(char Input[] , char subStrings[][100] ,int revORnot ,char subStringsReversed[][100])
{
    int row = 0;
    int column = 0;
    for(int i=0; i<strlen(Input); i++)
    {
        for(int j=i+1; j<=strlen(Input); j++)
        {
            if(revORnot) {
                int temp[100];
                int pos = 0;
            
                for(int k=i; k<j; k++)
                { 
                    temp[pos++] = Input[k];
                } temp[pos] = '\0';
                
                for(int l=pos; l>0; l--)
                {
                    subStringsReversed[row][column++] = temp[--pos];
                }
                subStringsReversed[row++][column] = '\0';
                column = 0;

            } else {
                for(int k=i; k<j; k++)
                { 
                    subStrings[row][column++] = Input[k];
                }
                subStrings[row++][column] = '\0';
                column = 0;
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
    // Step 1 -> Get the Input 
        int flag = 0;
        int inpSize;
        scanf("%d",&inpSize);
        char Input[inpSize];
        scanf("%s",Input);
        int size = (((strlen(Input)) *(strlen(Input)+1))/2);
        char subStrings[size][100];
        char subStringsReversed[size][100];

    // Step 2 --> Find the all possible substrings
        substrings(Input,subStrings,0,subStringsReversed);
        substrings(Input,subStrings,1,subStringsReversed);

        for(int i=0; i<size;)
        {
            for(int j=0; j<size; j++)
            {
                if(strcmp(subStringsReversed[i],subStrings[j]) == 0) {
                    flag = 1;
                    break;
                } else {
                    flag = 0;
                }
            }
            if(flag) {
                i++;
            } else {
                break;
            }
        }
    
    // Step 3 ---> Print the Result
        printf("%d\n",((flag) ? 1 : 0));

    }
	return 0;
}

/*
int main()
{
    int flag = 0;
    char Input[] = "abcde";
    int size = (((strlen(Input)) *(strlen(Input)+1))/2);
    printf("Size is %d\n",size);
    char subStrings[size][100];
    char subStringsReversed[size][100];

    substrings(Input,subStrings,0,subStringsReversed);
    substrings(Input,subStrings,1,subStringsReversed);

    printf("Substrings of String :\n");
    for(int i=0; i<size; i++)
    {
        printf("%s ",subStrings[i]);
    }

    printf("\nSubstrings Reversed of String :\n");
    for(int i=0; i<size; i++)
    {
        printf("%s ",subStringsReversed[i]);
    }
    printf("\n");

    for(int i=0; i<size;)
    {
        for(int j=0; j<size; j++)
        {
            if(strcmp(subStringsReversed[i],subStrings[j]) == 0) {
                flag = 1;
                break;
            } else {
                flag = 0;
            }
        }
        if(flag) {
            i++;
        } else {
            break;
        }
    }

    printf("%d\n",((flag) ? 1 : 0));

    return 0;
}
*/