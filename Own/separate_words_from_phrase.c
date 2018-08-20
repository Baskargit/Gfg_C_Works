#include<stdio.h>
#include<string.h>
#define max_length 100

int main()
{
    int numberOfStrings = 0;
    scanf("%d",&numberOfStrings);
    int totalLength = (1000000)+(numberOfStrings);

    char fullString[totalLength];
    char newlinefeed = getchar();
    scanf("%[^\n]s",fullString);

    char input[numberOfStrings][max_length];
    int spacIndex = 0;
    int spaceCount[numberOfStrings-1];

    for(int i=0; fullString[i] != '\0'; i++) // Counting Spaces
    {
        if(fullString[i] == 32) {
                spaceCount[spacIndex] = i;
                spacIndex++;
            }
    }

    int row = 0;
    int column = 0;

    for(int i=0; fullString[i] != '\0';i++)  // Inserting Words into separate array
    {
        if(fullString[i] != 32) {
            input[row][column] = fullString[i];
            column++;
        } else {
            input[row][column] = '\0';
            row++;
            column = 0;
        }
    }

    for(int i=0; i<numberOfStrings; i++) // Printing the String with its length
    {
        int stringLength = 0;
        for(int j=0; input[i][j] != '\0'; stringLength++,j++);
        printf("%s--->%d\n",input[i],stringLength);
    }

    return 0;
}


/*
int main()
{
    int numberOfStrings = 6;
    //scanf("%d",&numberOfStrings);
    int totalLength = (1000000)+(numberOfStrings);

    //char fullString[totalLength];
    char fullString[] = "abc ab a c q as";
    //printf("%ld\n",sizeof(fullString));
    //fullString[] = "abc ab abc a";
    //char newlinefeed = getchar();
    //fgets (fullString, totalLength, stdin);
    //scanf("%[^\n]s",fullString);

    for(long int i=0; fullString[i] != '\0'; i++)  // Print the Input String
    {
        printf("%d ---> %c\n",fullString[i],fullString[i]);
    }

    char input[numberOfStrings][max_length];
    //printf("%s",fullString);
    int spacIndex = 0;
    int spaceCount[numberOfStrings-1];

    for(int i=0; fullString[i] != '\0'; i++) // Counting Spaces
    {
        if(fullString[i] == 32) {
                spaceCount[spacIndex] = i;
                spacIndex++;
            }
    }

    for(int i=0; i<(numberOfStrings-1); i++) // Printing Space Values
    {
        printf("%d --> %d\n",i,spaceCount[i]);
    }

    printf("Logical Part printing :\n");
    int row = 0;
    int column = 0;

    for(int i=0; fullString[i] != '\0';i++)  // Logical Part
    {
        if(fullString[i] != 32) {
            input[row][column] = fullString[i];
            printf("%c-->%d--->%d\n",input[row][column],row,column);
            column++;
        } else {
            input[row][column] = '\0';
            printf("Inserting Null %c-->%d--->%d\n",input[row][column],row,column);
            row++;
            column = 0;
        }
    }

    printf("Input Values : \n");

    for(int i=0; i<numberOfStrings; i++) // Printing the String with its length
    {
        int stringLength = 0;
        for(int j=0; input[i][j] != '\0'; stringLength++,j++);
        printf("%s--->%d\n",input[i],stringLength);
    }

    // for(int i=0; i<numberOfStrings; i++) // Print the ASCII value for the character
    // {
    //     for(int j=0; input[i][j] != '\0'; j++)
    //     {
    //         printf("%d ",input[i][j]);
    //     }
    //     printf("\n");
    // }

    // for(int i=0; i<numberOfStrings; i++) // Print Using Sizeof() function
    // {
    //     printf("%s with a size of %ld",input[i],sizeof(input[i]));
    //     printf("\n");
    // }
    
    return 0;
}
*/
