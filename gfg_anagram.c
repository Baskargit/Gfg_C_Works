#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the Input

        char string1[MAX_LENGTH];
        scanf("%s",string1);
        char string2[MAX_LENGTH];
        scanf("%s",string2);

    // Step 2 --> Sort both the string in asec order;

        for(int i=0; string1[i] != '\0'; i++)
        {
            for(int j=i+1; string1[j] != '\0'; j++)
            {
                if(string1[j] < string1[i] ) {
                    char temp = string1[j];
                    string1[j] = string1[i];
                    string1[i] = temp;
                }
            }
        }

        for(int i=0; string2[i] != '\0'; i++)
        {
            for(int j=i+1; string2[j] != '\0'; j++)
            {
                if(string2[j] < string2[i] ) {
                    char temp = string2[j];
                    string2[j] = string2[i];
                    string2[i] = temp;
                }
            }
        }

    // Step 3 ---> Check for equality

        if((strcmp(string1,string2) == 0)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

    }
    
	return 0;
}

int main()
{
  // Step 1 -> get the Input

    char string1[] = "allergy";
    char string2[] = "allergic";

  // Step 2 --> Sort both the string in asec order;

    for(int i=0; string1[i] != '\0'; i++)
    {
        for(int j=i+1; string1[j] != '\0'; j++)
        {
            if(string1[j] < string1[i] ) {
                char temp = string1[j];
                string1[j] = string1[i];
                string1[i] = temp;
            }
        }
    }

    for(int i=0; string2[i] != '\0'; i++)
    {
        for(int j=i+1; string2[j] != '\0'; j++)
        {
            if(string2[j] < string2[i] ) {
                char temp = string2[j];
                string2[j] = string2[i];
                string2[i] = temp;
            }
        }
    }

  // Step 3 ---> Check for equality

    if((strcmp(string1,string2) == 0)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}