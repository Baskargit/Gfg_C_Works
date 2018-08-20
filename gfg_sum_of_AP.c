#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        double a,d,n;
        scanf("%lf %lf %lf",&a,&d,&n);
        double sum = 0;

        for(int i=1; i<=n; i++)
        {
            sum = sum + a;
            a = a + d;
        }

        printf("%.2F\n",sum);
    }
    
	return 0;
}

/*
int main()
{
    double a=2.5,d=1.5,n=20;
    double sum = 0;

    for(int i=1; i<=n; i++)
    {
        sum = sum + a;
        a = a + d;
    }

    printf("%.2F\n",sum);

    return 0;
}
*/