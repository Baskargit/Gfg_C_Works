#include <stdio.h>
#include <string.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount); 
    
    for(int count=0; count<testCaseCount; count++)
    {
        char Input[500];
        scanf("%s",Input);
        int count = 0;

        for(int i=0; i<((strlen(Input)) -1); i++)
        {
            if(Input[i] == 50 && Input[i+1] == 49)  {
                count++;
            }
        }
        printf("%d\n",count);
        count = 0;

    }
    
	return 0;
}

/*
int main()
{
    char Input[] = "02010211012021112102120001101112112100111121210120020002020202101210000020211010120100102120202021210210020120102001020200201210111021210212010110210200";
    int count = 0;

    for(int i=0; i<((strlen(Input)) -1); i++)
    {
        if(Input[i] == 50 && Input[i+1] == 49)  {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
*/