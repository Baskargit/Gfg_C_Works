#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    int userFace;
    int finalOutput[testCaseCount]; 
    int n = 6;
    
    for(int count=0; count<testCaseCount; count++)
    {
        scanf("%d",&userFace);
        if(userFace>1) {
            finalOutput[count] = (n - (userFace-1));
        } else {
            finalOutput[count] = 6;
        }

    }

    for(int i=0; i<testCaseCount; i++)
    {
        printf("%d\n",finalOutput[i]);
    }
    
	return 0;
}