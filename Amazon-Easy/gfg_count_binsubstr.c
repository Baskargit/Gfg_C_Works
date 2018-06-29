#include<stdio.h>
#define max_length 100

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char input[max_length];
        scanf("%s",input);

        int stringLength = 0;

        for(int i=0; input[i] != '\0'; stringLength++,i++);

        int count = 0;

        if(stringLength > 1) {
            for(int i=0; i<stringLength; i++)
            {
                for(int j=i+1; j<stringLength; j++)
                {
                    if((input[i] == '1') && (input[j] == input[i])) {
                        count++;
                    }
                }
            }
        } else {
            if(input[0] == '1') {count=1;} else {count=0;}
        }

        printf("%d\n",count);

        for(int i=0; i<stringLength; i++)
        {
            input[i] = '\0';
        }
    }
    
	return 0;
}

/*
int main()
{
    char input[] = "01011";

    int stringLength = 0;

    for(int i=0; input[i] != '\0'; stringLength++,i++);
    printf("String Length :%d\n",stringLength);

    int count = 0;

    if(stringLength > 1) {
        for(int i=0; i<stringLength; i++)
        {
            for(int j=i+1; j<stringLength; j++)
            {
                if((input[i] == '1') && (input[j] == input[i])) {
                    count++;
                }
            }
        }
    } else {
        if(input[0] == '1') {count=1;} else {count=0;}
    }

    printf("%d\n",count);
    
    return 0;
}
*/
