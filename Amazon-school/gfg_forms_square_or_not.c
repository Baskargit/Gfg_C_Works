#include <stdio.h>
#include <math.h>

int slope(int x1 , int y1, int x2, int y2);
/*
int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int points[8];

        for(int i=0; i<8; i++)
        {
            scanf("%d",&points[i]);
        }

        int slope1 = slope(points[0] , points[1] , points[4] , points[5]);
        int slope2 = slope(points[2] , points[3] , points[6] , points[7]);

        if((slope1 + slope2) == 0) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }
    
	return 0;
}
*/

int slope(int x1 , int y1, int x2, int y2)
{
    return (pow((x2 - x1),2) + pow((y2 - y1),2));
}


int main()
{
    //int points[8] = {20 ,20 ,20 ,10 ,10 ,20 ,10 ,10};
    //int points[8] = {79 ,77 ,85 ,89 ,52 ,4 ,100 ,55};
    //int points[8] = {79 ,35 ,2 ,68 ,3 ,98 ,93 ,18};
    //int points[8] = {17 ,9 ,59 ,83 ,38 ,25 ,25 ,63};
    //int points[8] = {83 ,83 ,83 ,86 ,86 ,86 ,86 ,83};
    int points[8] = {78 ,88 ,89 ,99 ,45 ,55 ,56 ,66};

    int slope1 = slope(points[0] , points[1] , points[4] , points[5]);
    int slope2 = slope(points[2] , points[3] , points[6] , points[7]);

    printf("%d %d\n",slope1,slope2);

    if(slope1 == slope2) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}

