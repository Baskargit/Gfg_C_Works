#include<stdio.h>
/*
int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount); 
    
    for(int count=0; count<testCaseCount; count++)
    {
        int length;
        scanf("%d",&length);
        char ind[length+2];
        char string[(length+2)];

        for(int i=0; i<length+2; i++)
        {
            scanf("%c",&ind[i]);
        }

        // int j=0;
        // while(ind[j] != '\0') {
        //     scanf("%c",&ind[j]);
        //     ++j;
        // }

        for(int i=0; i<length+2; i++)
        {
            printf("%c--->%d\n",ind[i],i);
        }

        printf("\n");

        for(int i=0; i<(length+2); i++)
        {
            if(i == (length+1)) {
                string[i] = '\0';
                printf("Inserting null\n");
            } else {
                string[i] = ind[i];
                printf("Inserting char--> %c -->Pos -->%d\n",string[i],i);
            }
        }

        printf("%s",string); 
        printf("\nChar Length is %ld",sizeof(ind));
        printf("\nString Length is %ld",sizeof(string));
    }
    
	return 0;
} */

/*
int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount); 
    
    for(int count=0; count<testCaseCount; count++)
    {
        int length;
        scanf("%d",&length);
        char ind[length];
        char string[(length)];

        for(int i=0; i<length; i++)
        {
            scanf("%c",&ind[i]);
            string[i] = ind[i];
        }

        // for(int i=0; i<(length+2); i++)
        // {
        //     if(i == (length+1)) {
        //         string[i] = '\0';
        //     } else {
        //         string[i] = ind[i];
        //     }
        // }

        string[length] = '\0';

        printf("%s",string); 
    }
    
	return 0;
}
*/


#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount); 
    
    for(int count=0; count<testCaseCount; count++)
    {
        int length;
        scanf("%d",&length);
        char ind;
        char string[length];

        for(int i=0; i<length; i++)
        {
            scanf(" %c",&ind);
            string[i] = ind;
        }

        string[length] = '\0';

        printf("%s\n",string); 
    }
    
	return 0;
}