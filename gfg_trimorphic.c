#include <stdio.h>
#include <string.h>

int main()
{

    int testCaseCount;
    scanf("%d",&testCaseCount);
    int eachCaseInput[testCaseCount];
    int finalOutput[testCaseCount];
    
    for(int count=0; count<testCaseCount; count++)
    {
        scanf("%d",&eachCaseInput[count]);
    }

    for(int count=0; count<testCaseCount; count++)
    {
        long int num=eachCaseInput[count];
        char numberAsString[sizeof(int)];
        int lengthOfNum;

        long int oneCubed = num*num;
        unsigned long int cubed = (oneCubed*num);
        char cubedAsString[sizeof(long)*2];
        int lengthOfCubed,endNumber=0,Multiplier=1;

        sprintf(numberAsString , "%ld" ,num);
        sprintf(cubedAsString , "%lu" , cubed);

        for(lengthOfNum=0; numberAsString[lengthOfNum] != '\0'; ++lengthOfNum);
        for(lengthOfCubed=0; cubedAsString[lengthOfCubed] != '\0'; ++lengthOfCubed);

        for(int i=(lengthOfCubed-1); i>=(lengthOfCubed-lengthOfNum); i--)
        {
            endNumber = endNumber + ((cubedAsString[i]-'0')*Multiplier);
            Multiplier = Multiplier *10;
        }

        if(num == endNumber) {
            finalOutput[count] = 1;
        } else {
            finalOutput[count] = 0;
        }
    
    }

    for(int count=0; count<testCaseCount; count++)
    {
        printf("%d\n",finalOutput[count]);
    }
    
	return 0;
}