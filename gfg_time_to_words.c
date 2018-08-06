#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char words[31][20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "quarter", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine" ,"half"};
        int hour,minutes;
        scanf("%d",&hour);
        scanf("%d",&minutes);

        if((minutes == 0)) {
            printf("%s o' clock\n",words[hour]);
        } else if(minutes == 15 || minutes == 30) {
            printf("%s past %s\n",words[minutes],words[hour]);
        } else if(minutes == 45) {
            if(hour != 12) {
                printf("%s to %s\n",words[15],words[(hour + 1)]);
            } else {
                printf("%s to %s\n",words[15],words[(1)]);
            }
        } else {
            if((minutes > 0 && minutes < 30)) {
                printf("%s minutes past %s\n",words[minutes],words[hour]);
            } else {
                if(hour != 12) {
                    if((30 -(minutes - 30)) > 1) {
                        printf("%s minutes to %s\n",words[(30 -(minutes - 30))],words[(hour + 1)]);
                    } else {
                        printf("%s minutes to %s\n",words[(30 -(minutes - 30))],words[(hour + 1)]);
                    }
                } else {
                    if((30 -(minutes - 30)) > 1) {
                        printf("%s minutes to %s\n",words[(30 -(minutes - 30))],words[(hour + 1)]);
                    } else {
                        printf("%s minutes to %s\n",words[(30 -(minutes - 30))],words[(hour + 1)]);
                    }
                }
            }
        }
    }
	return 0;
}

/*
int main()
{   
    char words[31][20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "quarter", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine" ,"half"};
    int hour,minutes;
    hour = 6;
    minutes = 47;

    if((minutes == 0)) {
        printf("%s o' clock\n",words[hour]);
    } else if(minutes == 15 || minutes == 30) {
        printf("%s past %s\n",words[minutes],words[hour]);
    } else if(minutes == 45) {
        if(hour != 12) {
            printf("%s to %s\n",words[15],words[(hour + 1)]);
        } else {
            printf("%s to %s\n",words[15],words[(1)]);
        }
    } else {
        if((minutes > 0 && minutes < 30)) {
            printf("%s minutes past %s\n",words[minutes],words[hour]);
        } else {
            if(hour != 12) {
                printf("%s minutes to %s\n",words[(30 -(minutes - 30))],words[(hour + 1)]);
            } else {
                printf("%s minutes to %s\n",words[(30 -(minutes - 30))],words[(1)]);
            }
        }
    }

    return 0;
}
*/