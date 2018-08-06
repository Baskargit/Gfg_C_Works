#include <stdio.h>
#define MAX_LENGTH 10

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char time[MAX_LENGTH];
        scanf("%s",time);

        if(time[8] == 'P') {
            int hour = (((int) ((time[0] - '0') * 10)) + ((int) ((time[1] - '0') * 1)));
            if(hour != 12) {
                printf("%d",(12 + hour));
                for(int i=2; i<=7; i++)
                {
                    printf("%c",time[i]);
                } printf("\n");
            } else {
                time[8] = '\0';
                printf("%s\n",time);
            }
            
        } else {
            int hour = (((int) ((time[0] - '0') * 10)) + ((int) ((time[1] - '0') * 1)));

            if(hour != 12) {
                time[8] = '\0';
                printf("%s\n",time);
            } else {
                time[0] = '0';
                time[1] = '0';
                time[8] = '\0';
                printf("%s\n",time);
            }
        }
    }
	return 0;
}

/*
int main()
{
    char time[] = "12:00:00PM";

    if(time[8] == 'P') {
        printf("PM\n");
        int hour = (((int) ((time[0] - '0') * 10)) + ((int) ((time[1] - '0') * 1)));
        printf("%d\n",hour);
        if(hour != 12) {
            printf("%d",(12 + hour));
            for(int i=2; i<=7; i++)
            {
                printf("%c",time[i]);
            } printf("\n");
        } else {
            time[8] = '\0';
            printf("%s\n",time);
        }
        
    } else {
        printf("AM\n");
        int hour = (((int) ((time[0] - '0') * 10)) + ((int) ((time[1] - '0') * 1)));
        printf("%d\n",hour);

        if(hour != 12) {
            time[8] = '\0';
            printf("%s\n",time);
        } else {
            time[0] = '0';
            time[1] = '0';
            time[8] = '\0';
            printf("%s\n",time);
        }
    }

    return 0;
}
*/
