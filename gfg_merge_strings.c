#include<stdio.h>
#define max_length 100000

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char newLineFeed = getchar();
        char string1[max_length];
        char string2[max_length];
        scanf("%s",string1);
        scanf("%s",string2);
        int string1Length = 0;
        int string2Length = 0;

        for(int i=0; string1[i] != '\0'; string1Length++,i++);
        for(int i=0; string2[i] != '\0'; string2Length++,i++);

        char finalOutput[(string1Length+string2Length)];

        if(string1Length > string2Length) {
            int j = 0;
            for(int i=0; i<string2Length; i++)
            {
                finalOutput[j] = string1[i];
                finalOutput[j+1] = string2[i];
                j = (j+1) + 1;
            }

            for(int i=string2Length; i<string1Length; i++)
            {
                finalOutput[j] = string1[i];
                j++;
            }

            for(int i=0; i<(string1Length+string2Length); i++)
            {
                printf("%c",finalOutput[i]);
            }

            printf("\n");
            
        } else if(string2Length > string1Length) {
            int j = 0;
            for(int i=0; i<string1Length; i++)
            {
                finalOutput[j] = string1[i];
                finalOutput[j+1] = string2[i];
                j = (j+1) + 1;
            }

            for(int i=string1Length; i<string2Length; i++)
            {
                finalOutput[j] = string2[i];
                j++;
            }

            for(int i=0; i<(string1Length+string2Length); i++)
            {
                printf("%c",finalOutput[i]);
            }
            printf("\n");
            
        } else {
            int j = 0;
            for(int i=0; i<string2Length; i++)
            {
                finalOutput[j] = string1[i];
                finalOutput[j+1] = string2[i];
                j = (j+1) + 1;
            }

            for(int i=0; i<(string1Length+string2Length); i++)
            {
                printf("%c",finalOutput[i]);
            }
            printf("\n");
        }
        
    }
    
	return 0;
}

/*
int main()
{
    char string1[max_length] = "Helloqwertyuiopasdkjsd";
    char string2[max_length] = "Worldsssssdsdjn";
    int string1Length = 0;
    int string2Length = 0;

    for(int i=0; string1[i] != '\0'; string1Length++,i++);
    for(int i=0; string2[i] != '\0'; string2Length++,i++);

    char finalOutput[(string1Length+string2Length)];
    //printf("%d\n%d\n%ld\n",string1Length,string2Length,sizeof(finalOutput));

    if(string1Length > string2Length) {
        int j = 0;
        for(int i=0; i<string2Length; i++)
        {
            //printf("%c-->%d\t%c-->%d\n",string1[i],i,string2[i],i);
            finalOutput[j] = string1[i];
            finalOutput[j+1] = string2[i];
            j = (j+1) + 1;
        }
        //printf("%d\n",j);

        for(int i=string2Length; i<string1Length; i++)
        {
            finalOutput[j] = string1[i];
            //printf("%c--->%d--->%d\n",string1[i],i,j);
            j++;
        }

        for(int i=0; i<(string1Length+string2Length); i++)
        {
            printf("%c",finalOutput[i]);
        }
        printf("\n");
        
        //printf("%s\n",finalOutput);
        //printf("%ld\n",sizeof(finalOutput));
    } else if(string2Length > string1Length) {
        int j = 0;
        for(int i=0; i<string1Length; i++)
        {
            //printf("%c-->%d\t%c-->%d\n",string1[i],i,string2[i],i);
            finalOutput[j] = string1[i];
            finalOutput[j+1] = string2[i];
            j = (j+1) + 1;
        }
        //printf("%d\n",j);

        for(int i=string1Length; i<string2Length; i++)
        {
            finalOutput[j] = string2[i];
            //printf("%c--->%d--->%d\n",string2[i],i,j);
            j++;
        }

        for(int i=0; i<(string1Length+string2Length); i++)
        {
            printf("%c",finalOutput[i]);
        }
        printf("\n");
        
        //printf("%s\n",finalOutput);
        //printf("%ld\n",sizeof(finalOutput));
    } else {
         int j = 0;
        for(int i=0; i<string2Length; i++)
        {
            printf("%c-->%d\t%c-->%d\n",string1[i],i,string2[i],i);
            finalOutput[j] = string1[i];
            finalOutput[j+1] = string2[i];
            j = (j+1) + 1;
        }

        for(int i=0; i<(string1Length+string2Length); i++)
        {
            printf("%c",finalOutput[i]);
        }
        printf("\n");
        //printf("%s\n",finalOutput);
        //printf("%ld\n",sizeof(finalOutput));
    }
	return 0;
}
*/