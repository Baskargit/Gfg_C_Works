#include <stdio.h>

int main()
{
    int size = 5;
    //int array[] = {1 ,8 ,8 ,8 ,3 ,2};
    int array[] = {1 ,1 ,2 ,2 ,1};

    int p1=0,p2=0,p3=0;
    
    if(size >= 3) {
        int middle = size/2;
        for(int i=0; i<size; i++)
        {   
            // if(array[i+1] > array[i]) {
            //     p1 = 1;
            // } else if(array[(size - 1)] < array[((size - 2))]) {
            //     p3 = 1;
            // } else {
            //     printf("%d\n",i);
            //     if((i==middle) && (array[i] > array[0] && array[i] > array[(size - 1)])) {
            //         p2 = 1;
            //     }
            // }
        }
        printf("Middle %d\n",middle);
            if(array[1] > array[0]) {
                p1 = 1;
            } if(array[(size - 1)] < array[((size - 2))]) {
                p3 = 1;
            } if((array[middle] > array[0] && array[middle] > array[(size - 1)])) {
                p2 = 1;
            }

            if(p1 && p2 && p3) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }


    } else {
        printf("No\n");
    }

    

    printf("p1=%d p2=%d p3=%d\n",p1,p2,p3);

    return 0;
}