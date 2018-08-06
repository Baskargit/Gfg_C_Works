#include <stdio.h>
#include <string.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char num[5];
        scanf("%s",num);
        int sum = 0;
        int flag = 0;
    
        while(strlen(num) > 1) {
            sum = 0;
            for(int i=0; i<strlen(num); i++)
            {
                sum = sum + (num[i] - '0');
            }
            char sumConv[5];
            sprintf(sumConv,"%d",sum);
            strcpy(num,sumConv);
        }

        flag = (sum == 2 || sum == 3 || sum == 5 || sum == 7) ? 1 : (((num == 2 || num == 3 || num == 5 || num == 7) ? 1 : 0));

        printf("%d\n",((flag) ? 1 : 0));
    }
	return 0;
}

/*
int main()
{
    int num = 89;
    char numConv[6];
    sprintf(numConv,"%d",num);
    int sum = 0;
    int flag = 0;

    while(strlen(numConv) > 1) {
        sum = 0;
        for(int i=0; i<strlen(numConv); i++)
        {
            sum = sum + (numConv[i] - '0');
        }
        char sumConv[6];
        sprintf(sumConv,"%d",sum);
        strcpy(numConv,sumConv);
    }

    printf("%d\n",sum);

    if(sum == 2 || sum == 3 || sum == 5 || sum == 7) {
        flag = 1;
    } else {
        flag = 0;
    }

    printf("%d\n",((flag) ? 1 : 0));

    return 0;
}
*/