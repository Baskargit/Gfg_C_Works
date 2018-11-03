#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 : Get Input
        int wellHeight,eachClimb,eachLoose;
        scanf("%d %d %d",&wellHeight,&eachClimb,&eachLoose);

        int diff = (eachClimb - eachLoose);
        int step = 1;

    // Step 2 : Get the Number of Steps
        for(;;)
        {
            if(((step*diff)+eachClimb) > wellHeight) {
                ++step;
                break;
            } else {
                ++step;
            }
        }
    
    // Step 3 : Print the Result
        printf("%d\n",step);
    }
	return 0;
}

/*
int main()
{
    int wellHeight = 500;
    int eachClimb = 20;
    int eachLoose = 15;

    int diff = (eachClimb - eachLoose);
    int step = 1;

    for(;;)
    {
        if(((step*diff)+eachClimb) > wellHeight) {
            ++step;
            break;
        } else {
            ++step;
        }
    }

    printf("%d\n",step);
    return 0;
}
*/