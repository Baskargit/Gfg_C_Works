#include <stdio.h>
#include <math.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int x1,x2,y1,y2;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        long double distance = 0;

        if((x2 - x1) == 0) {
            distance = (0 + (pow((double)(y2 - y1) , 2)));
            distance = (sqrt(distance));
        } else if((y2 - y1) == 0) {
            distance = ((pow((double)(x2 - x1) , 2)) + 0);
            distance = (sqrt(distance));
        } else {
            distance = ((pow((double)(x2 - x1) , 2)) + (pow((double)(y2 - y1) , 2)));
            distance = (sqrt(distance));
        }

        printf("%g\n",round(distance));

    }
    
	return 0;
}

/*
int main()
{
    int x1,x2,y1,y2 = 0;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    printf("%d %d %d %d\n",x1,x2,y1,y2);

    long double distance = 0;

    if((x2 - x1) == 0) {
        distance = (0 + (pow((double)(y2 - y1) , 2)));
        printf("%Lf by (%lf + %lf)\n",distance,((double)pow((x2 - x1) , 2)),((double)pow((y2 - y1) , 2)));
        distance = (sqrt(distance));
    } else if((y2 - y1) == 0) {
        distance = ((pow((double)(x2 - x1) , 2)) + 0);
        printf("%Lf by (%lf + %lf)\n",distance,((double)pow((x2 - x1) , 2)),((double)pow((y2 - y1) , 2)));
        distance = (sqrt(distance));
    } else {
        distance = ((pow((double)(x2 - x1) , 2)) + (pow((double)(y2 - y1) , 2)));
        printf("%Lf by (%lf + %lf)\n",distance,(pow((x2 - x1) , 2)),(pow((y2 - y1) , 2)));
        distance = (sqrt(distance));
    }

    printf("%g\n",round(distance));

    return 0;
}
*/