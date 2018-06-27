#include <stdio.h>

int main()
{
    int testCaseCount;
    scanf("%d",&testCaseCount);
    int finalOutput[testCaseCount];

    for(int count=0; count<testCaseCount; count++)
    {
        int arr_one_size,max_value;
        scanf("%d",&arr_one_size);
        int arrayOne[arr_one_size];
        for(int i=0; i<arr_one_size; i++)
        {
            scanf("%d",&arrayOne[i]);
        }
        if(arr_one_size>1) {
            for(int k=0; k<arr_one_size; k++)
            {
                for(int l=k+1; l<arr_one_size;)
                {
                    if(arrayOne[k] < arrayOne[l]) {
                        int temp = arrayOne[l];
                        arrayOne[l] = arrayOne[k];
                        arrayOne[k] = temp;
                        l++;
                    } else {
                        l++;
                    }
                }
            }
        } else {
            max_value = arrayOne[0];
        }

        int arr_two_size,min_value;
        scanf("%d",&arr_two_size);
        int arrayTwo[arr_two_size];
        for(int j=0; j<arr_two_size; j++)
        {
            scanf("%d",&arrayTwo[j]);
        }
        if(arr_two_size>1) {
            for(int k=0; k<arr_two_size; k++)
            {
                for(int l=k+1; l<arr_two_size;)
                {
                    if(arrayTwo[k] > arrayTwo[l]) {
                        int temp = arrayTwo[l];
                        arrayTwo[l] = arrayTwo[k];
                        arrayTwo[k] = temp;
                        l++;
                    } else {
                        l++;
                    }
                }
            }
        } else {
            min_value = arrayTwo[0];
        }

        max_value = arrayOne[0];
        min_value = arrayTwo[0];

        finalOutput[count] = (max_value*min_value);
    }

    for(int i=0; i<testCaseCount; i++)
    {
        printf("%d\n" , finalOutput[i]);
    }
    return 0;
} 



/*
int main()
{
    int arr_one_size = 5;
    int arr_two_size = 6;
    int max_value,min_value;
    int arr1[arr_one_size];
    arr1[0] = -1;  arr1[1] = -2; arr1[2] = -3;  arr1[3] = -4; arr1[4] = -5; // get max_number from first array  
    //arr1[arr_one_size] = {1,5,3,8,0};  
    int arr2[arr_two_size];
    //arr2[arr_two_size] = {2,1,4,0,-2,-8}; 
    arr2[0] = 1; arr2[1] = 2; arr2[2] = 3; arr2[3] = 4; arr2[4] = 5; arr2[5] = 6; // get min_number from second array

    if(arr_one_size>1) {
        for(int k=0; k<arr_one_size; k++)
        {
            for(int l=k+1; l<arr_one_size;)
            {
                if(arr1[k] < arr1[l]) {
                    int temp = arr1[l];
                    arr1[l] = arr1[k];
                    arr1[k] = temp;
                    l++;
                } else {
                    l++;
                }
            }
        }
    } else {
        max_value = arr1[0];
    }

    for(int i=0 ; i<arr_one_size; i++)
    {
        printf("%d" , arr1[i]);
    } max_value = arr1[0];
    printf("\nMax_value : %d \n" , max_value);

    if(arr_two_size>1) {
        for(int k=0; k<arr_two_size; k++)
        {
            for(int l=k+1; l<arr_two_size;)
            {
                if(arr2[k] > arr2[l]) {
                    int temp = arr2[l];
                    arr2[l] = arr2[k];
                    arr2[k] = temp;
                    l++;
                } else {
                    l++;
                }
            }
        }
    } else {
        min_value = arr2[0];
    }

    for(int i=0 ; i<arr_two_size; i++)
    {
        printf("%d" , arr2[i]);
    } min_value = arr2[0];
    printf("\nMin_value : %d \n" , min_value);

    printf("%d",(max_value*min_value));
}
*/
