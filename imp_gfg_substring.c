#include<stdio.h>
#define max_length 10000

int main()
{
  // Step 1 ----> Get the Input
    char inputString[] = "apple";
    
    int stringLength = 0;
    for(int i=0; inputString[i] != '\0'; stringLength++,i++);
    printf("%d\n",stringLength);

  // Step 2 ----> Find the possibilities
    long int permutations;
    permutations = ((stringLength)*(stringLength+1));
    printf("Permutations is %ld\n",permutations);

  // Step 3 ----> Inserting possible values into an array
    
    int prefix = 1;
    int suffix = (stringLength-1);
    char possibleValues[permutations][max_length];

    int row = 0;
    int column = 0;
    long int dothis = permutations;

    while(dothis > 0)
    {
        printf("Enter loop :%ld\n",dothis);
        for(int i=0; i<suffix; i++)
        {
            possibleValues[row][column] = inputString[i];
            column++;
        }
        suffix--;

        row++;
        column = 0;
        for(int i=prefix; i<stringLength; i++)
        {
            possibleValues[row][column] = inputString[i];
            column++;
        }
        prefix++;

        row++;
        column = 0;
        dothis--;
    }

    for(int i=0; i<permutations; i++)
    {
        // for(int j=0; j<4; j++)
        // {
        //     printf("%c",possibleValues[i][j]);
        // }
        //printf("\n");
        printf("%s\n",possibleValues[i]);
    }

    return 0;
}