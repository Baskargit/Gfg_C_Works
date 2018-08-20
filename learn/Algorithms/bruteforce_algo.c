#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "abcdef";
    int flag = 0;

    for (int i =1; i < strlen(string); i++) // Brute Force
    {
        for (int j = i + 1; j < strlen(string); j++)
        {
            for (int k = j + 1; k < strlen(string); k++)
            {
                int pos = 0;

                char string1[6];
                char string2[6];
                char string3[6];
                char string4[6];

                for(int l=0; l<i; l++)          // String 1
                {
                    string1[pos++] = string[l];
                } 
                string1[pos] = '\0';
                pos = 0;

                for(int m=i; m<j; m++)          // String 2
                {
                    string2[pos++] = string[m];
                }
                string2[pos] = '\0';
                pos = 0;

                for(int n=j; n<k; n++)          // String 3
                {
                    string3[pos++] = string[n];
                }
                string3[pos] = '\0';
                pos = 0;

                for(int o=k; o<=strlen(string); o++)  // String 4  
                {
                    string4[pos++] = string[o];
                }
                
                string4[pos] = '\0';
                pos = 0;

                printf("%s ",string1);
                printf("%s ",string2);
                printf("%s ",string3);
                printf("%s ",string4);

                if((strcmp(string1,string2) != 0 && strcmp(string1,string3) != 0 && strcmp(string1,string4) != 0) 
                    && (strcmp(string2,string3) != 0 && strcmp(string2,string4) != 0) 
                    && (strcmp(string3,string4) != 0) ) 
                    {
                     flag = 1;
                }

                printf("  ----->K=%d with j=%d , i=%d Incre\n",k,j,i);
            }
            printf("\t\t J inc \n");
        }
        printf("\t\t I inc \n");
    }

    printf("%d\n",((flag) ? 1 : 0));

    return 0;
}
