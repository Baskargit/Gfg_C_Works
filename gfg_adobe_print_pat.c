#include <stdio.h>

/*int main()
{
    int num;
    scanf("%d",&num);
    int col = ((num+num)-1);
    int midValue = col/2;
    int arr[col][col];
    int arrFinal[col][col];

    for(int i=0; i<num; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(j>=i) {
                //printf("%d",num-i);
                arr[i][j] = num-i;
            } else {
                //printf("%d",num-j);
                arr[i][j] = num-j;
            }
        }
        //printf("\n");
    }

   // printf("\n");
// ----> Printing the array <--------- //
    // for(int i=0; i<num; i++)
    // {
    //     for(int j=0; j<col; j++)
    //     {
    //         printf("%d",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
// ----> Changing the Value of the array <--------- //
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<col; j++)
        {
             if(j<midValue) {
                //printf("%d" , arr[i][j]);
                arr[i][(col-1)-j] = arr[i][j];
             } else {
                 //printf("br");
                 break;
             }
        }
    }

        //printf("\n");
// ----> Printing the array <--------- //
    // for(int i=0; i<num; i++)
    // {
    //     for(int j=0; j<col; j++)
    //     {
    //         printf("%d",arr[i][j]);
    //     }
    //     printf("\n");
    // }

// --> Creating the Final array  ----------- Copy Logic

    int startFrom = midValue+1;
    int copyFrom = midValue-1;

    for(int i=0; i<=(num-1); i++)
    {
        for(int j=0; j<col; j++)
        {
            arr[startFrom+i][j] = arr[copyFrom-i][j]; 
        }
    }

    //printf("\nFinal Array : \n");

// ----> Printing the array <--------- //
    for(int i=0; i<col; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
} */

/*
int main()
{
    int count;
    scanf("%d",&count);

    for(int k=0; k<count; k++)
    {
        int num;
        scanf("%d",&num);
        int col = ((num+num)-1);
        int midValue = col/2;
        int arr[col][col];

        for(int i=0; i<num; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(j>=i) {
                    arr[i][j] = num-i;
                } else {
                    arr[i][j] = num-j;
                }
            }
        }

        for(int i=0; i<num; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(j<midValue) {
                    arr[i][(col-1)-j] = arr[i][j];
                } else {
                    break;
                }
            }
        }

        int startFrom = midValue+1;
        int copyFrom = midValue-1;

        for(int i=0; i<=(num-1); i++)
        {
            for(int j=0; j<col; j++)
            {
                arr[startFrom+i][j] = arr[copyFrom-i][j]; 
            }
        }

        for(int i=0; i<col; i++)
        {
            for(int j=0; j<col; j++)
            {
                printf("%d",arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
} */

// Correct version 

int main()
{
    int testCaseCount;
    scanf("%d",&testCaseCount);
    int num;
    int col;
    int midValue;
    
    for(int count=0; count<testCaseCount; count++)
    {
        scanf("%d" , &num);
        col = ((num+num)-1);
        midValue = col/2;
        int arr[col][col];

        for(int i=0; i<num; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(j>=i) {
                    arr[i][j] = num-i;
                } else {
                    arr[i][j] = num-j;
                }
            }
        }

        for(int i=0; i<num; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(j<midValue) {
                    arr[i][(col-1)-j] = arr[i][j];
                } else {
                    break;
                }
            }
        }

        int startFrom = midValue+1;
        int copyFrom = midValue-1;

        for(int i=0; i<=(num-1); i++)
        {
            for(int j=0; j<col; j++)
            {
                arr[startFrom+i][j] = arr[copyFrom-i][j]; 
            }
        }

        for(int i=0; i<col; i++)
        {
            for(int j=0; j<col; j++)
            {
                printf("%d",arr[i][j]);
            }
            printf("\n");
        }
        
        col = 0;
        midValue = 0;
        arr[0][0];

    }
    return 0;
}

