#include<stdio.h>
#define max_length 2000

int main()
{
    int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 ---> Get the String

        char inputString[max_length];
        scanf("%s",inputString);
        int stringLength = 0;
        for(int i=0; inputString[i] != '\0'; stringLength++,i++);

    // Step 2 ---> Identify number of words in the given Phrase

        int dots = 0;

        for(int i=0; inputString[i] != '\0'; i++)  // Counting Dots
        {
            if(inputString[i] == 46) {
                dots++;
            }
        }

        int numberOfWords = (dots+1);

    // Step 3 ---> Push those individual words into the array

        char individualWords[numberOfWords][max_length];

        int row = 0;
        int column = -1;

        for(int i=0; inputString[i] != '\0';i++)  // Inserting Words into separate array
        {
            if(inputString[i] != 46) {
                individualWords[row][++column] = inputString[i];
            } else {
                individualWords[row][++column] = '\0';
                row++;
                column = -1;
            }
        }

    // Step 4 -----> Eliminate those unwanted characters.

            for(int i=numberOfWords; i>=0; i--)
            {
                for(int j=0; individualWords[i][j] != '\0'; j++)
                {
                    if(!(individualWords[i][j] > 31)) {
                        individualWords[i][j] = '\0';
                    } 
                }
            }

    // Step 5 ------> Print the result

        for(int i=numberOfWords-1; i>=0; i--)
        {
            if(i != 0) {
                printf("%s.",individualWords[i]);
            } else {
                printf("%s",individualWords[i]);
            }
        }

    // Step 6 ------> Flush the input string with null characters

        for(int i=0; i<=stringLength; i++)
        {
            inputString[i] = '\0';
        }
        
        for(int i=0; i<numberOfWords; i++)
        {
            int stringLength = 0;
            for(int j=0; individualWords[i][j] != '\0'; stringLength++,j++);
            for(int j=0; j<=stringLength; j++)
            {
                individualWords[i][j] = '\0';
            }
        }
        printf("\n");
    }
    
    return 0;
}

/*
int main()
{
  // Step 1 ---> Get the String

    char inputString[] = "i.like.this.program.very.much";
    // char inputString[] = "pat";
    //char inputString[] = "pat. hell . space";
    //char inputString[] = "p";
    int stringLength = 0;
    for(int i=0; inputString[i] != '\0'; stringLength++,i++);
    printf("String Length %d\n",stringLength);

  // Step 2 ---> Identify number of words in the given Phrase

    int dots = 0;

    for(int i=0; inputString[i] != '\0'; i++)  // Counting Dots
    {
        if(inputString[i] == 46) {
            dots++;
        }
    }

    // int position = -1;
    // int dotsPositions[dots];

    // for(int i=0; inputString[i] != '\0'; i++) // Storing Dots position in a separate array
    // {
    //     if(inputString[i] == 46) {
    //         position++;
    //         dotsPositions[position] = i;
    //     }
    // }

    // for(int i=0; i<dots; i++)
    // {
    //     printf("%d----->%d\n",i,dotsPositions[i]);
    // }

    int numberOfWords = (dots+1);

  // Step 3 ---> Push those individual words into the array

    char individualWords[numberOfWords][max_length];

    int row = 0;
    int column = -1;

    for(int i=0; inputString[i] != '\0';i++)  // Inserting Words into separate array
    {
        if(inputString[i] != 46) {
            individualWords[row][++column] = inputString[i];
            //printf("%d--->%c--->col of %d\n",i,individualWords[row][column],column);
        } else {
            individualWords[row][++column] = '\0';
            //printf("%d--->%d\n",i,individualWords[row][column]);
            row++;
            column = -1;
        }
    }

    // for(int i=0; i<numberOfWords; i++)
    // {
    //     int stringLength = 0;
    //     //for(int j=0; individualWords[i][j] != '\0'; stringLength++,j++);
    //     //printf("%s--->%d\n",individualWords[i],stringLength);
    // }

  // Step 4 -----> Eliminate those unwanted characters.

        for(int i=numberOfWords; i>=0; i--)
        {
            for(int j=0; individualWords[i][j] != '\0'; j++)
            {
                if(!(individualWords[i][j] > 31)) {
                    individualWords[i][j] = '\0';
                } 
            }
        }
        

    // for(int i=0; i<numberOfWords; i++)
    // {
    //     int stringLength = 0;
    //     for(int j=0; individualWords[i][j] != '\0'; stringLength++,j++);
    //     printf("%s--->%d\n",individualWords[i],stringLength);
    // }

  // Step 5 ------> Print the result

    for(int i=numberOfWords-1; i>=0; i--)
    {
        if(i != 0) {
            printf("%s.",individualWords[i]);
        } else {
             printf("%s",individualWords[i]);
        }
    }

  // Step 6 ------> Flush the input string with null characters

    for(int i=0; i<=stringLength; i++)
    {
        inputString[i] = '\0';
    }
    printf("\n");

    return 0;
}
*/