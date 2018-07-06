#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the Size and Input

        int InputSize,Input1Size;
        scanf("%d",&InputSize);
        scanf("%d",&Input1Size); 

        char Input[InputSize];
        char Input1[Input1Size];
        scanf("%s",Input);
        scanf("%s",Input1);

        int size1 = ((InputSize) * (InputSize+1))/2;
        char prob1[size1][MAX_LENGTH];
        int size2 = ((Input1Size) * (Input1Size+1))/2;
        char prob2[size2][MAX_LENGTH];

    // Step 2 --> Insert Possible values into different array

        int i,j,k;
        int row = 0, col = 0;

        for(i=0; i<InputSize; i++)  // Insert the possible Input values into prob1 array
        {
            for(j=i; j<InputSize;j++)
            {
                for(k = i; k<=j; k++)
                {
                    prob1[row][col] = Input[k];
                    col++;
                }
                prob1[row][col] = '\0';
                row++;
                col = 0;
            }
        }

        row = 0,col = 0;

        for(i=0; i<Input1Size; i++)  // Insert the possible Input1 values into prob2 array
        {
            for(j=i; j<Input1Size;j++)
            {
                for(k = i; k<=j; k++)
                {
                    prob2[row][col] = Input1[k];
                    col++;
                }
                prob2[row][col] = '\0';
                row++;
                col = 0;
            }
        }

    // Step 3 ---> Find the longest substring

        int length = 0;

        for(int i=0; i<size1; i++)
        {
            for(int j=0; j<size2; j++)
            {
                if(strlen(prob1[i]) == strlen(prob2[j])) {
                    if((strcmp(prob1[i],prob2[j]) == 0) && (strlen(prob1[i]) > length)) {
                        length = strlen(prob1[i]);
                    }
                }
            }
        }


    // Step 4 ----> Print the result

        printf("%d\n",length);

    // Step 5 -----> Flush old values with null chracters

        for(int i=0; i<size1; i++)
        {
            for(int j=0; prob1[i][j] != '\0'; j++)
            {
                prob1[i][j] = '\0';
            }
        }

        for(int i=0; i<size2; i++)
        {
            for(int j=0; prob2[i][j] != '\0'; j++)
            {
                prob2[i][j] = '\0';
            }
        }

    }
    
	return 0;
}


/*
int main()
{
  // Step 1 -> Get the Input

    char Input[MAX_LENGTH];
    scanf("%s",Input);
    char Input1[MAX_LENGTH];
    scanf("%s",Input1);

    int InputSize = 0;
    for(int i=0; Input[i] != '\0'; InputSize++,i++);
    int Input1Size = 0;
    for(int i=0; Input1[i] != '\0'; Input1Size++,i++);

    int size1 = ((InputSize) * (InputSize+1))/2;
    char prob1[size1][MAX_LENGTH];
    int size2 = ((Input1Size) * (Input1Size+1))/2;
    char prob2[size2][MAX_LENGTH];

  // Step 2 --> Insert Possible values into different array

    int i,j,k;
    int row = 0, col = 0;

    for(i=0; i<InputSize; i++)  // Insert the possible Input values into prob1 array
    {
        for(j=i; j<InputSize;j++)
        {
            for(k = i; k<=j; k++)
            {
                prob1[row][col] = Input[k];
                col++;
            }
            prob1[row][col] = '\0';
            row++;
            col = 0;
        }
    }

    row = 0,col = 0;

    for(i=0; i<Input1Size; i++)  // Insert the possible Input1 values into prob2 array
    {
        for(j=i; j<Input1Size;j++)
        {
            for(k = i; k<=j; k++)
            {
                prob2[row][col] = Input1[k];
                col++;
            }
            prob2[row][col] = '\0';
            row++;
            col = 0;
        }
    }

  // Step 3 ---> Find the longest substring

    int length = 0;
    char result[MAX_LENGTH];

    if(size1 >= size2) 
    {
        for(int i=0; i<size1; i++)
        {
            for(int j=0; j<size2; j++)
            {
                if((strcmp(prob1[i],prob2[j]) == 0) && (strlen(prob1[i]) > length)) {
                    strcpy(result,prob1[i]);
                    length = strlen(prob1[i]);
                }
            }
        }
    } else {
        for(int i=0; i<size2; i++)
        {
            for(int j=0; j<size2; j++)
            {
                if((strcmp(prob1[i],prob2[j]) == 0) && (strlen(prob2[i]) > length)) {
                    strcpy(result,prob2[i]);
                    length = strlen(prob2[i]);
                }
            }
        }
    }

  // Step 4 ----> Print the result

    printf("%d:\n",length);

    return 0;
}
*/

/*
int main()
{
    char Input[] = "LRBBMQBHCDARZOWKKYHIDDQSCDXRJMOWFRXSJYBLDBEFSARCBYNECDYGGXXPKLORELLNMPAPQFWKHOPKMCO";
    char Input1[] = "QHNWNKUEWHSQMGBBUQCLJJIVSWMDKQTBXIXMVTRRBLJPTNSNFWZQFJMAFADRRWSOFSBCNUVQHFFBSAQXWPQCAC";

    int InputSize = 0;
    for(int i=0; Input[i] != '\0'; InputSize++,i++);
    int Input1Size = 0;
    for(int i=0; Input1[i] != '\0'; Input1Size++,i++);

    int size1 = ((InputSize) * (InputSize+1))/2;
    char prob1[size1][100];
    int size2 = ((Input1Size) * (Input1Size+1))/2;
    char prob2[size2][100];

    printf("String Length is :%d\nsize1 :%d\n",InputSize,size1);
    printf("String Length is :%d\nsize2 :%d\n",Input1Size,size2);

    int i,j,k;
    int row = 0, col = 0;

    for(i=0; i<InputSize; i++)  // Insert the possible Input values into prob1 array
    {
        for(j=i; j<InputSize;j++)
        {
            for(k = i; k<=j; k++)
            {
                prob1[row][col] = Input[k];
                col++;
            }
            prob1[row][col] = '\0';
            row++;
            col = 0;
        }
    }

    row = 0,col = 0;

    for(i=0; i<Input1Size; i++)  // Insert the possible Input1 values into prob2 array
    {
        for(j=i; j<Input1Size;j++)
        {
            for(k = i; k<=j; k++)
            {
                prob2[row][col] = Input1[k];
                col++;
            }
            prob2[row][col] = '\0';
            row++;
            col = 0;
        }
    }

    printf("Input possible values :\n");

    for(int i=0; i<size1; i++)
    {
        printf("%s with length of %ld\n",prob1[i],strlen(prob1[i]));
    }

    printf("Input 2 possible values :\n");

    for(int i=0; i<size2; i++)
    {
        printf("%s\n",prob2[i]);
    }

    //printf("Row is %d and Position is %d\n",row,col);

  // Step ---> Logic

    int length = 0;
    char result[MAX_LENGTH];

    if(size1) 
    {
        for(int i=0; i<size1; i++)
        {
            for(int j=0; j<size2; j++)
            {
                if(strlen(prob1[i]) == strlen(prob2[j])) {
                    printf("Equal if %d-->%s == %d-->%s\n",i,prob1[i],j,prob2[j]);
                    if((strcmp(prob1[i],prob2[j]) == 0) && (strlen(prob1[i]) > length)) {
                        //strcpy(result,prob1[i]);
                        length = strlen(prob1[i]);
                        printf("Equal %s == %s with length %d\n",prob1[i],prob2[j],length);
                    }
                }
            }
        }
    } else {
        for(int i=0; i<size2; i++)
        {
            for(int j=0; j<size1; j++)
            {
                if(strlen(prob1[i]) == strlen(prob2[j])) {
                    printf("Equal if %d-->%s == %d-->%s\n",i,prob1[i],j,prob2[j]);
                    if((strcmp(prob1[i],prob2[j]) == 0) && (strlen(prob2[i]) > length)) {
                        //strcpy(result,prob2[i]);
                        length = strlen(prob2[i]);
                        printf("Equal %s == %s with length %d\n",prob1[i],prob2[j],length);
                    }
                }
            }
        }
    }

    printf("Length is %d:\n",length);
    printf("%s\n",result);

    return 0;
}
*/
