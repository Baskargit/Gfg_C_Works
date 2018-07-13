#include <stdio.h>
/*
int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        double a;
        scanf("%lf",&a);
        double b;
        scanf("%lf",&b);

        int quo = (int)a/(int)b;
        double least = 0.0;

        for(double i=1.0; i<=(double)quo; i++)
        {
            least = (b * i);
        }

        printf("%g\n",(a - least));
    }
    
	return 0;
}
*/

int main()
{
    double a = 0.0;
    double b = 0.0;

    if((a != 0.0) && (b >= 0.1)) {
        printf("1\n");
        int quo = (int)a/(int)b;
        double least = 0.0;
        printf("1\n");
        printf("Quotient is  %d\n",quo);

        for(double i=1.0; i<=(double)quo; i++)
        {
            least = (b * i);
        }

        printf("Least is %lf\n",least);
        printf("Remainder will %g\n",(a - least));
    } else {
        printf("%g\n",a);
    }

    return 0;
}