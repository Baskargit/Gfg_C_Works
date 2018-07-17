#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int num;
        scanf("%d",&num);

        if(num > 9) {
            int lastDigit = num%10;
            int firstdigit = num;

            while(firstdigit >= 10) {
                firstdigit = firstdigit/10;
            }   

            printf("%d %d\n",firstdigit,lastDigit);
        } else {
            printf("%d %d\n",num,num);
        }
    }
	return 0;
}

/*
int main()
{
    int num;
    scanf("%d",&num);

    if(num > 9) {
        int lastDigit = num%10;
        int firstdigit = num;

        while(firstdigit >= 10) {
            firstdigit = firstdigit/10;
        }   

        printf("%d %d\n",firstdigit,lastDigit);
    } else {
        printf("%d %d\n",num,num);
    }
}
*/