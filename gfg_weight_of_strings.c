#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount); 
    
    for(int count=0; count<testCaseCount; count++)
    {
        char string1[1000];
        char string2[1000];
        int string1Length = 0;
        int string2Length = 0;
        int string1Weight = 0;
        int string2Weight = 0;

        scanf("%s",string1);
        scanf("%s",string2);

        for(int i=0; string1[i] != '\0'; string1Length++,i++);
        for(int i=0; string2[i] != '\0'; string2Length++,i++);

        // printf("%s\n",string1);
        // printf("%s\n",string2);
        // printf("%d\n",string1Length);
        // printf("%d\n",string2Length);

        for(int i=0; i<string1Length; i++)
        {
            if(string1[i] >= 65 && string1[i] <= 90) {
                string1Weight = string1Weight + ((string1[i] - 65) + 1);
            } else {
                string1Weight = string1Weight + ((string1[i] - 97) + 1);
            }
        }

        for(int i=0; i<string2Length; i++)
        {
            if(string2[i] >= 65 && string2[i] <= 90) {
                string2Weight = string2Weight + ((string2[i] - 65) + 1);
            } else {
                string2Weight = string2Weight + ((string2[i] - 97) + 1);
            }
        }

        // printf("%d\n",string1Weight);
        // printf("%d\n",string2Weight);

        if(string1Weight == string2Weight) {
            printf("%s\n","equal");
        } else if(string1Weight > string2Weight) {
            printf("1\n");
        } else {
            printf("2\n");
        }
    }
    
	return 0;
}


/*
int main()
{
	int testCaseCount=1;
    
    for(int count=0; count<testCaseCount; count++)
    {
        char string1[1000] = "yagami";
        char string2[1000] = "light";
        int string1Length = 0;
        int string2Length = 0;
        int string1Weight = 0;
        int string2Weight = 0;

        for(int i=0; string1[i] != '\0'; string1Length++,i++);
        for(int i=0; string2[i] != '\0'; string2Length++,i++);

        printf("%s\n",string1);
        printf("%s\n",string2);
        printf("%d\n",string1Length);
        printf("%d\n",string2Length);

        for(int i=0; i<string1Length; i++)
        {
            if(string1[i] >= 65 && string1[i] <= 90) {
                string1Weight = string1Weight + ((string1[i] - 65) + 1);
            } else {
                string1Weight = string1Weight + ((string1[i] - 97) + 1);
            }
        }

        for(int i=0; i<string2Length; i++)
        {
            if(string2[i] >= 65 && string2[i] <= 90) {
                string2Weight = string2Weight + ((string2[i] - 65) + 1);
            } else {
                string2Weight = string2Weight + ((string2[i] - 97) + 1);
            }
        }

        printf("%d\n",string1Weight);
        printf("%d\n",string2Weight);

        if(string1Weight == string2Weight) {
            printf("%s\n","equal");
        } else if(string1Weight > string2Weight) {
            printf("1\n");
        } else {
            printf("2\n");
        }
    }
    
	return 0;
}
*/