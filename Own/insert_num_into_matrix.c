#include<stdio.h>

int main()
{
    int row = 84;
    int column = 87;
    int matrix[row][column];
    int size = (((row*column) * 2));

    char string[] = "";
    
    printf("%ld\n",sizeof(string));

    int rowCount = 0;
    int columnCount = 0;

    for(int i=0; string[i] != '\0'; i++)
    {
        if(string[i] != 32) {
            if(rowCount < row && columnCount < column) {
                matrix[rowCount][columnCount] = string[i] - '0';
                columnCount++;
            } else {
                rowCount++;
                columnCount = 0;
                matrix[rowCount][columnCount] = string[i] - '0';
                columnCount++;
            }
        }
    }

    printf("Matrix Format : \n");

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/*
int main()
{
    int row;
    scanf("%d",&row);
    int column;
    scanf("%d",&column);
    int matrix[row][column];
    int size = (((row*column) * 2));

    char string[size];
    char newLineFeed = getchar();
    scanf("%[^\n]s",string);
    printf("%ld\n",sizeof(string));

    int rowCount = 0;
    int columnCount = 0;

    for(int i=0; string[i] != '\0'; i++)
    {
        if(string[i] != 32) {
            if(rowCount < row && columnCount < column) {
                matrix[rowCount][columnCount] = string[i] - '0';
                columnCount++;
            } else {
                rowCount++;
                columnCount = 0;
                matrix[rowCount][columnCount] = string[i] - '0';
                columnCount++;
            }
        }
    }

    printf("Matrix Format : \n");

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/