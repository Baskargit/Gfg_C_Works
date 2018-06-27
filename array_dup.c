#include <stdio.h>

int main()
{
    int arr[10] = {10,20,30,10,20,40,10,20,50,20};
    int arr_dups[10];
    int count=0;
    int num=0;

    for(int i=0; i<10;i++)
    {
        arr_dups[i] = arr[i];
    }

    for(int i=0; i<10; i++)
    {
        printf("%d\t" , arr_dups[i]);
    }

    for(int i=0; i<10; i++)
    {
        for(int j=i+1; j<10;)
        {
            if(arr_dups[i]> arr_dups[j])
            {
                int temp = arr_dups[i];
                arr_dups[i] = arr_dups[j];
                arr_dups[j] = temp;
                j++;
            }
            else {
                j++;
            }
        }
    }

    printf("\n");

    for(int i=0; i<10; i++)
    {
        printf("%d\t" , arr_dups[i]);
    }

    printf("\n\n");

    auto unsigned int i=0;
    while(i<10)
    {
        for(int j=i+1; j<10;)
        {
            if(arr_dups[i] == arr_dups[j])
            {
                count++;
                num++;
                printf("Num Value is %d ===> Count Value is %d\n",num,count);
                printf("Equal Numbers are arr_dups[i] %d arr_dups[j] %d\n",arr_dups[i],arr_dups[j]);
                j++;
            }
            else
            {
                j++;
            }
        }
        num = num+1;
        i= num;
    }

    // for(int i=num; i<10; i++)
    // {
    //    for(int j=i+1; j<10; j++)
    //    {
    //         if(arr_dups[i] == arr_dups[j])
    //         {
    //             ++count;
    //             ++num;
    //             printf("True Cond :%d and arr_dup[i] is %d and arr_dup[j] is %d\n",num,arr_dups[i],arr_dups[j]);
    //         }
    //         else
    //         {
    //             printf(" False Cond \n");
    //         }
    //    }
    //    printf("\ni incremented \n");
    // }

    printf("\nTotal Number Of Duplicates Is : %d\n" , count);
    printf("Num Value Is : %d\n" , num);

    return 0;   

}
