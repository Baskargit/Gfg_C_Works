#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000

int main()
{
	int testCaseCount;
    printf("Total number of testcases :");
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the Input
        char flames[] = "FLAMES";
        char strOne[MAX_LENGTH];
        char strTwo[MAX_LENGTH];
        scanf("%s",strOne);
        scanf("%s",strTwo);

        int l1 = strlen(strOne);
        int l2 = strlen(strTwo);
        int strLength = (l1 + l2);

    // Step 2 --> Remove Common letters
        for(int i=0; i<l1; i++)
        {
            for(int j=0; j<l2; j++)
            {
                if(strOne[i] == strTwo[j]) {
                    strLength = strLength - 2;
                    strTwo[j] = '\0';
                    strOne[i] = '\0';
                    break;
                }
            }
        }

    // Step 3 ---> Iterate through string FLAMES to get the final result
        int pos = 0;
        int posCount = 0;
        for(int i=1; i<=5; i++)
        {
            for(int j=1; j<=strLength;j++)
            {
                if(pos < (6 - posCount)) {
                    if(j == (strLength)) {
                        flames[pos] = '\0';
                        posCount++;
                        break;
                    }
                    ++pos;
                } else {
                    pos = 0;
                    if(j == (strLength)) {
                        flames[pos] = '\0';
                        posCount++;
                        break;
                    }
                    ++pos;
                }
            }

            char tempChar[6];
            int tempPos = 0;
            for(int k=0; k<6; k++)
            {
                if(flames[k] != '\0') {
                    tempChar[tempPos++] = flames[k];
                }
            } tempChar[tempPos] = '\0';
            strcpy(flames,tempChar);
        }

        // Step 4 ----> Print the Result
        switch (flames[0])
        {
            case 'F':
                printf("Friends\n");
                break;
            
            case 'L':
                printf("Love\n");
                break;

            case 'A':
                printf("Affection\n");
                break;

            case 'M':
                printf("Marriage\n");
                break;

            case 'E':
                printf("Enemies\n");
                break;

            case 'S':
                printf("Siblings\n");
                break;
        
            default:
                printf("Noting to print\n");
                break;
        }
    }
	return 0;
}


/*
int main()
{
  // Step 1 -> Get the Input
    char flames[] = "FLAMES";
    char strOne[] = "baskaran";
    char strTwo[] = "computerscience";

    int l1 = strlen(strOne);
    int l2 = strlen(strTwo);
    int strLength = (l1 + l2);

  // Step 2 --> Remove Common letters

    for(int i=0; i<l1; i++)
    {
        for(int j=0; j<l2; j++)
        {
            if(strOne[i] == strTwo[j]) {
                strLength = strLength - 2;
                strTwo[j] = '\0';
                strOne[i] = '\0';
                break;
            }
        }
    }
    printf("Strone after cancellation is :\n");
    for(int i=0; i<l1; i++)
    {
        printf("%c",strOne[i]);
    } printf("\n");
    printf("Strtwo after cancellation is :\n");
    for(int i=0; i<l2; i++)
    {
        printf("%c",strTwo[i]);
    } printf("\n");

    printf("Lenght after common removel :%d\n",strLength);

    int pos = 0;
    int posCount = 0;
    for(int i=1; i<=5; i++)
    {
        printf("Initial pos is :%d\n",pos);
        for(int j=1; j<=strLength;j++)
        {
            if(pos < (6 - posCount)) {
                if(j == (strLength)) {
                    printf("%c --> pos=%d --> j=%d\n",flames[pos],pos,j);
                    flames[pos] = '\0';
                    posCount++;
                    break;
                }
                ++pos;
            } else {
                pos = 0;
                //printf("else part j=%d pos=%d\n",j,pos);
                if(j == (strLength)) {
                    printf("%c --> pos=%d --> j=%d\n",flames[pos],pos,j);
                    flames[pos] = '\0';
                    posCount++;
                    break;
                }
                ++pos;
            }
        }

        char tempChar[6];
        int tempPos = 0;
        for(int k=0; k<6; k++)
        {
            if(flames[k] != '\0') {
                tempChar[tempPos++] = flames[k];
            }
        } tempChar[tempPos] = '\0';
        strcpy(flames,tempChar);
        printf("New flames is :%s\n\n",flames);
    }

    printf("\nFLAMES remaining is :\n");

    for(int i=0; i<6; i++)
    {
        printf("%c",flames[i]);
    }
    printf("\n");

    
    switch (flames[0])
    {
        case 'F':
            printf("Friends\n");
            break;
        
        case 'L':
            printf("Love\n");
            break;

        case 'A':
            printf("Affection\n");
            break;

        case 'M':
            printf("Marriage\n");
            break;

        case 'E':
            printf("Enemies\n");
            break;

        case 'S':
            printf("Siblings\n");
            break;
    
        default:
            break;
    }

    return 0;
}
*/