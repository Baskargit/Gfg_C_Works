#include<stdio.h>
#define max_length 100000

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 ----> Get the String
        char string[max_length];
        scanf("%s",string);
        int stringLength = 0;

        for(int i=0; string[i] != '\0'; stringLength++,i++);

    // Step 2 ----> Check for equality

        int flag = 0;

        for(int i=0; i<stringLength; i++)
        {
            if(string[0] == string[i]) {
                flag = 1;
                i++;
            } else {
                flag = 0;
                i = stringLength + 1;
            }
        }

    // Step 3 ----> Print the output

        if(flag) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

    // Step 4 ----> Flush the old input string

        for(int i=0; i<stringLength; i++)
        {
            string[i] = '\0';
        }
    }
    
	return 0;
}

/*
int main()
{
  // Step 1 ----> Get the String
    char string[max_length];
    scanf("%s",string);
    int stringLength = 0;

    for(int i=0; string[i] != '\0'; stringLength++,i++);

  // Step 2 ----> Check for equality

    int flag = 0;

    for(int i=0; i<stringLength; i++)
    {
        if(string[0] == string[i]) {
            flag = 1;
            i++;
        } else {
            flag = 0;
            i = stringLength + 1;
        }
    }

  // Step 3 ----> Print the output

    if(flag) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

  // Step 4 ----> Flush the old input string

    for(int i=0; i<stringLength; i++)
    {
        string[i] = '\0';
    }

    return 0;
}
*/

/*
int main()
{
  // Step 1 ----> Get the String
    char string[max_length] = "g";
    int stringLength = 0;

    for(int i=0; string[i] != '\0'; stringLength++,i++);

  // Step 2 ----> Check for equality

    int flag = 0;

    for(int i=0; i<stringLength; i++)
    {
        if(string[0] == string[i]) {
            flag = 1;
            i++;
        } else {
            flag = 0;
            i = stringLength + 1;
        }
    }

  // Step 3 ----> Print the output

    if(flag) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

  // Step 4 ----> Flush the old input string

    for(int i=0; i<stringLength; i++)
    {
        string[i] = '\0';
    }

    return 0;
}
*/