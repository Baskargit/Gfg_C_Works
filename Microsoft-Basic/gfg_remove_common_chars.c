#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char string1[MAX_LENGTH];
        scanf("%s",string1);
        char string2[MAX_LENGTH];
        scanf("%s",string2);

        int str1len = strlen(string1);
        int str2len = strlen(string2);

        int found = 0;
        int flag = 0;

        for(int i=0; i < str2len;)
        {
            for(int j=0; j < str1len; j++)
            {
                if((string2[i] == string1[j]) && (string2[i] != '\0')) {
                    found = 1;
                    flag = 1;
                    string1[j] = '\0';
                }
            }
            
            if(found) {
                for(int k=i+1; k<str2len; k++)
                {
                    if(string2[i] == string2[k]) {
                        string2[k] = '\0';
                    }
                }
                string2[i] = '\0';
                found = 0;
            } else {
                found = 0;
            }
            i++;
        }

        int finalstr1len = 0;
        for(int j=0; j < str1len; j++) { finalstr1len =(string1[j] != '\0') ? ++finalstr1len : finalstr1len;};
        int finalstr2len = 0;
        for(int j=0; j < str2len; j++) { finalstr2len =(string2[j] != '\0') ? ++finalstr2len : finalstr2len;};

        if(flag && (finalstr1len > 0)) {
            for(int i=0; i < str1len; i++)
            {
                //printf("%c",((string1[i] > 0) ? string1[i] : '\0'));
                if ((string1[i] > 0)) {
                    printf("%c",string1[i]);
                }
            }

            for(int i=0; i < str2len; i++)
            {
                //printf("%c",((string2[i] > 0) ? string2[i] : '\0'));
                if ((string2[i] > 0)) {
                    printf("%c",string2[i]);
                }
            }

            printf("\n");
        } else {
            printf("-1\n");
        }

    }
    
	return 0;
}


int main()
{
    char string1[] = "c"; //c , aabcdpttbc
    char string2[] = "oribvelpyt"; // oribvelpyt , tbcpabd

    int str1len = strlen(string1);
    int str2len = strlen(string2);

    int found = 0;
    int flag = 0;

    for(int i=0; i < str2len;)
    {
        for(int j=0; j < str1len; j++)
        {
            if((string2[i] == string1[j]) && (string2[i] != '\0')) {
                found = 1;
                flag = 1;
                string1[j] = '\0';
            }
        }
        //printf("Found is %d\n",found);
        if(found) {
            for(int k=i+1; k<str2len; k++)
            {
                if(string2[i] == string2[k]) {
                    string2[k] = '\0';
                }
            }
            string2[i] = '\0';
            found = 0;
        } else {
            found = 0;
        }
        i++;
    }

    int finalstr1len = 0;
    for(int j=0; j < str1len; j++) { finalstr1len =(string1[j] != '\0') ? ++finalstr1len : finalstr1len;};
    int finalstr2len = 0;
    for(int j=0; j < str2len; j++) { finalstr2len =(string2[j] != '\0') ? ++finalstr2len : finalstr2len;};

    printf("%d %d\n",finalstr1len,finalstr2len);

    if(flag && (finalstr1len > 0 || finalstr2len > 0)) {
        for(int i=0; i < str1len; i++)
        {
            if ((string1[i] > 0)) {
                printf("%c",string1[i]);
            }
        }

        for(int i=0; i < str2len; i++)
        {
            if ((string2[i] > 0)) {
                printf("%c",string2[i]);
            }
        }

        printf("\n");
    } else if((!(flag) && (finalstr1len > 0 || finalstr2len > 0))) {
        for(int i=0; i < str1len; i++)
        {
            if ((string1[i] > 0)) {
                printf("%c",string1[i]);
            }
        }

        for(int i=0; i < str2len; i++)
        {
            if ((string2[i] > 0)) {
                printf("%c",string2[i]);
            }
        }

        printf("\n");
    } else {
        printf("-1\n");
    }

    return 0;
}
