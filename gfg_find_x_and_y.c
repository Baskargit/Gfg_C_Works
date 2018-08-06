#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int a,b,n;
        scanf("%d %d %d",&a,&b,&n);

        int flag = 0;
        int x1,y1;

        for(int x=1; ((a*x)<=n); x++)
        {
            for(int y=1; ((b*y)<=n); y++)
            {
                if(((a*x) + (b*y)) == n) {
                    flag = 1;
                    x1 = x;
                    y1 = y;
                    x = n+1;
                    break;
                }
            }
        }

        (flag) ? printf("%d %d\n",x1,y1) : printf("No solution\n");

    }
    
	return 0;
}

/*
int main()
{
    int a,b,n;
    a = 4; b = 2; n=7;

    int flag = 0;
    int x1,y1;

    for(int x=1; ((a*x)<=n); x++)
    {
        for(int y=1; ((b*y)<=n); y++)
        {
            if(((a*x) + (b*y)) == n) {
                flag = 1;
                x1 = x;
                y1 = y;
                x = n+1;
                break;
            }
        }
    }

    (flag) ? printf("%d %d\n",x1,y1) : printf("No solution\n");
    return 0;
}
*/