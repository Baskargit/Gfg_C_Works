#include<stdio.h>
#include<math.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int noOfHouse;
        scanf("%d",&noOfHouse);
        int money;
        scanf("%d",&money);

        printf("%d\n",(((noOfHouse + 1)/2) * money));
    }
   
	return 0;
}

/*
int main()
{
    int noOfHouse = 5;
    int money = 10;

    if(noOfHouse > 1) {
        int result = (int)(round((noOfHouse/2) + 0.5) * money);
        printf("%d\n",result);
    } else {
        printf("1\n");
    }
    return 0;
}
*/