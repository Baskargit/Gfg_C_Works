#include <stdio.h>

/*
int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int num;
        scanf("%d",&num);
        char numChar[6];

        int numFlag = 1;
        for(int i=2; i<num; i++)
        {
            if(num%i == 0) {
                numFlag = 0;
                break;
            }
        }

        if(numFlag) {
            sprintf(numChar,"%d",num);

            int flag = 1;
            for(int i=0; numChar[i] != '\0'; i++)
            {
                if(flag) {
                    int num = (numChar[i] - '0');
                    flag = (num == 1 || num == 3 || num == 5 || num == 7 || num == 9) ? 1 : 0;
                } else {
                    break;
                }
            }

            printf("%s\n",((flag) ? "Yes" : "No"));
        } else {
            printf("No\n");
        }
    }
	return 0;
}
*/


int main()
{
    int num = 31;
    char numChar[6];

    int numFlag = 1;
    for(int i=2; i<num; i++)
    {
        if(num%i == 0) {
            numFlag = 0;
            break;
        }
    }

    if(numFlag) {
        sprintf(numChar,"%d",num);
        printf("%s\n",numChar);

        int flag = 0;
        for(int i=0; numChar[i] != '\0'; i++)
        {
            int numC = (numChar[i] - '0');
            if( (numC == 1 || numC == 3 || numC == 5 || numC == 7 || numC == 9) ) {
                flag = 1;
                printf("Setting flag 1 : %d\n",numC);
            } else {
                flag = 0;
                printf("Setting flag 0\n");
                break;
            }
        }

        printf("%s\n",((flag) ? "Yes" : "No"));
    } else {
        printf("No\n");
    }

    return 0;
}
