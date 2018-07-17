#include <stdio.h>

void printNum(int num);

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int N;
        scanf("%d",&N);
        printNum(N);
        printf("\n");
    }
    
	return 0;
}

void printNum(int num)
{
    if(num == 0) {
        return;
    } else {
        printNum(num - 1);
        printf("%d ",num);
    }
}

/*
int main()
{
    int n = 10;
    printNum(n);
    printf("\n");
}

int printNum(int num)
{
    if(n == num) {
        return 1;
    } else {
        printf("%d ",++n);
        printNum(num);
    }
}
*/