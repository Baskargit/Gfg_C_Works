#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int date = 28,month = 2,year = 2018;
        scanf("%d %d %d",&date,&month,&year);

        int flag = 0;
        int monthDays[12] = {31 , 28 , 31 ,30 ,31 ,30 ,31 ,31 ,30 ,31 ,30 ,31};
        
        if((year >= 1800 && year <= 9999) && (date <= 31) && (month <= 12)) {
            if(month != 2) {
                flag = ( date <= (monthDays[(month - 1)])) ? 1 : 0;
            } else {
                int leapflag = ( ((year%4 == 0) && ((year%100 != 0) || (year%400 == 0))) ) ? 1 : 0;
                
                flag = (leapflag) ? ((date<=29) ? 1 : 0) : ((date<=28) ? 1 : 0);
            }
        } else {
            flag = 0;
        }

        printf("%d\n",flag);
    }
	return 0;
}

/*
int main()
{
    int date = 28,month = 2,year = 2018;
    //scanf("%d %d %d",&date,&month,&year);

    int flag = 0;
    int monthDays[12] = {31 , 28 , 31 ,30 ,31 ,30 ,31 ,31 ,30 ,31 ,30 ,31};
    
    if((year >= 1800 && year <= 9999) && (date <= 31) && (month <= 12)) {
        if(month != 2) {
            flag = ( date <= (monthDays[(month - 1)])) ? 1 : 0;
        } else {
            int leapflag = ( ((year%4 == 0) && ((year%100 != 0) || (year%400 == 0))) ) ? 1 : 0;
            
            flag = (leapflag) ? ((date<=29) ? 1 : 0) : ((date<=28) ? 1 : 0);
        }
    } else {
        flag = 0;
    }

    printf("%d\n",flag);
    return 0;
}
*/