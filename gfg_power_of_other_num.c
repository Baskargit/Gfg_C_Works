#include <stdio.h>
#include <math.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        unsigned int x,y;
        scanf("%d %d",&x,&y);

        unsigned int val = 0;
        int flag = 0;
        
        if(x>1) {
            for(int i=0; val<=y;)
            {
                val = pow(x,i);
                if(val == y) {
                    flag = 1;
                    break;
                } else {
                    i++;
                }
            }
        } else {
            flag = 0;
        }

        if(flag) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }
	return 0;
}

/*
int main()
{
    unsigned int x,y;
    scanf("%d %d",&x,&y);

    unsigned int val = 0;
    int flag = 0;
    
    if(x>1) {
        for(int i=0; val<=y;)
        {
            val = pow(x,i);
            if(val == y) {
                flag = 1;
                break;
            } else {
                i++;
            }

            printf("Val = %d ---> flag = %d\n",val,flag);
        }
    } else {
        flag = 0;
    }

    if(flag) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
*/