#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char Input[100000];
        scanf("%s",Input);

        int begFlag = (Input[0] != '0') ? 1 : 0;
        int zeroFlag = 0;

        for(int i=1; Input[i] != '\0'; i++)
        {
            if(Input[i] == '0') {
                zeroFlag = 1;
                break;
            }
        }

        if(begFlag && zeroFlag) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
	return 0;
}

/*
int main()
{
    char Input[] = "01230";

    int begFlag = (Input[0] != '0') ? 1 : 0;
    int zeroFlag = 0;

    for(int i=1; Input[i] != '\0'; i++)
    {
        if(Input[i] == '0') {
            zeroFlag = 1;
            break;
        }
    }

    if(begFlag && zeroFlag) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
*/