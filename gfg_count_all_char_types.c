#include <stdio.h>
#define MAX_LENGTH 100000

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char string[MAX_LENGTH];
        scanf("%s",string);

        int lowercase = 0;
        int uppercase = 0;
        int numbers = 0;
        int specialchars = 0;

        for(int i=0; string[i] != '\0'; i++)
        {
            if(string[i] >= 'A' && string[i] <= 'Z') {
                ++uppercase;
            } else if(string[i] >= 'a' && string[i] <= 'z' ) {
                ++lowercase;
            } else if(string[i] >= '0' && string[i] <= '9') {
                ++numbers;
            } else {
                ++specialchars;
            }
        }

        printf("%d %d %d %d\n",uppercase,lowercase,numbers,specialchars);
    }
	return 0;
}

/*
int main()
{
    char string[] = "*GeEkS4GeEkS*";

    int lowercase = 0;
    int uppercase = 0;
    int numbers = 0;
    int specialchars = 0;

    for(int i=0; string[i] != '\0'; i++)
    {
        if(string[i] >= 'A' && string[i] <= 'Z') {
            ++uppercase;
        } else if(string[i] >= 'a' && string[i] <= 'z' ) {
            ++lowercase;
        } else if(string[i] >= '0' && string[i] <= '9') {
            ++numbers;
        } else {
            ++specialchars;
        }
    }

    printf("%d %d %d %d\n",uppercase,lowercase,numbers,specialchars);

    return 0;
}
*/