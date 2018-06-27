#include <stdio.h>

int main()
{
    int arr[6] = {3,5,1,2,6,4};

    printf("Initial Value Of an Array : \n");
    for(int i=0; i<6; i++)
    {
        printf("%d\n",arr[i]);
    }

    printf("\n");

    for(int i=0; i<6; i++)
    {
        for(int j=i+1; j<6;)
        {
            if(arr[i]> arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                j++;
                for(int i=0; i<6; i++)
                {
                    printf("%d ",arr[i]);
                }
                printf("\n");
            }
            else {
                j++;
            }
        }
    }

    printf("\n");

    for(int i=0; i<6; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}