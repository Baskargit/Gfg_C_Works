#include <stdio.h>

int inc(int arr[] , int size);
int incCons(int arr[] , int size);
int dec(int arr[] , int size);
int consDec(int arr[] , int size);
int cons(int arr[] , int size);
int all(int arr[] , int size);

int inc(int arr[] , int size)
{
    int flag = 0;
    for(int i=0; i<(size -1); i++)
    {
        if(arr[i+1] > arr[i]) {
            flag = 1;
        } else {
            flag = 0;
            break;
        }
    }
    return flag;
}

int incCons(int arr[] , int size)
{
    int flag = 0;
    for(int i=0; i<(size -1); i++)
    {
        if(arr[i] >= arr[i-1]) {
            flag = 1;
        } else {
            flag = 0;
            break;
        }
    }
    return flag;
}

int dec(int arr[] , int size)
{
    int flag = 0;
    for(int i=0; i<(size -1); i++)
    {
        if(arr[i+1] < arr[i]) {
            flag = 1;
        } else {
            flag = 0;
            break;
        }
    }
    return flag;
}

int cons(int arr[] , int size)
{
    int flag = 0;
    for(int i=0; i<(size -1); i++)
    {
        if(arr[i+1] == arr[i]) {
            flag = 1;
        } else {
            flag = 0;
            break;
        }
    }
    return flag;
}

int consDec(int arr[] , int size)
{
    printf("Consdesc\n");
    int flag = 0;
    for(int i=0; i<(size-1); i++)
    {
        printf(" %d >= %d\n",arr[i],arr[i+1]);
        if(arr[i] >= arr[i+1]) {
            flag = 1;
        } else {
            flag = 0;
            break;
        }
    }
    return flag;
}
/*
int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int size;
        scanf("%d",&size);
        int array[size];
        for(int i=0; i<size; i++)
        {
            scanf("%d",&array[i]);
        }

        int flag = 0;

        if(size > 1) {
            if((array[1] > array[0]) && (inc(array , size) || incCons(array , size))) {
                flag = 1;
            } else if((array[1] < array[0]) && (dec(array , size))) {
                flag = 1;
            } else if((array[1] == array[0]) && (cons(array , size) || consDec(array , size))) {
                flag = 1;
            } else {
                if(array[1] > array[0]) {
                    for(int i=2; i<=(size-1); i++)
                    {
                        if(array[i] <= array[i+1]) {
                            flag = 1;
                        } else {
                            flag = 0;
                        }
                    }
                } else {
                    flag = 0;
                }
            }
        } else {
            flag = 1;
        }

        if(flag) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
	return 0;
}
*/


int main()
{
    int size = 6;
    int array[] = {1 ,8 ,8 ,8 ,3 ,2};
    //int array[] = {1 ,1 ,2 ,2 ,1};
    //int array[] = {4 ,4 ,3 ,2 ,1};
    //int array[] = {4 ,5 ,3 ,5 ,1,0};

    int flag = 0;

    if(size > 1) {
        if((array[1] > array[0]) && (inc(array , size) || incCons(array , size))) {
            flag = 1;
        } else if((array[1] < array[0]) && (dec(array , size))) {
            flag = 1;
        } else if((array[1] == array[0]) && (cons(array , size) || consDec(array , size))) {
            printf("cons\n");
            flag = 1;
        } else {
            if(array[1] > array[0]) {
                int previousNum = array[1];
                for(int i=1; i<=(size-1); i++)
                {
                    if((array[i]<=previousNum)) {
                        previousNum = array[i];
                        flag = 1;
                    } else {
                        printf("break at %d\n",i);
                        flag = 0;
                        break;
                    }
                }
            } else {
                flag = 0;
            }
        }
    } else {
        flag = 1;
    }

    if(flag) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
