#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000000

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char Input[MAX_LENGTH];
        scanf("%s",Input);

        int pos = 0;
        char reversed[strlen(Input)];
        for(int i=((strlen(Input)) - 1); i>=0; i-- )
        {
            reversed[pos++] = Input[i];
        } reversed[pos] = '\0';

        if(strcmp(Input,reversed)) {
            int evencount = 0;
            int oddcount = 0;
            for(int i=0; Input[i] != '\0'; i++)
            {
                if(Input[i] == reversed[i]) {
                    if(((i+1)%2)==0) {
                        ++evencount;
                    } else {
                        ++oddcount;
                    }
                }
            }

            if(oddcount == evencount) {
                printf("TWIN\n");
            } else if((oddcount > evencount) && ((oddcount > 1) && (evencount > 1))) {
                printf("ODD\n");
            } else if((evencount > oddcount) && ((oddcount > 1) && (evencount > 1))) {
                printf("EVEN\n");
            } else {
                printf("ALIEN\n");
            }
        } else {
            printf("PARENT\n");
        }


    }
    
	return 0;
}

/*
int main()
{
    char Input[] = "aibohobia";
    //scanf("%s",Input);

    int pos = 0;
    char reversed[strlen(Input)];
    for(int i=((strlen(Input)) - 1); i>=0; i-- )
    {
        reversed[pos++] = Input[i];
    } reversed[pos] = '\0';
    printf("Original str :%s\n",Input);
    printf("Reversed str :%s\n",reversed);
    printf("Pos is %d\n",pos);

    if(strcmp(Input,reversed)) {
        int evencount = 0;
        int oddcount = 0;
        for(int i=0; Input[i] != '\0'; i++)
        {
            if(Input[i] == reversed[i]) {
                if(((i+1)%2)==0) {
                    ++evencount;
                } else {
                    ++oddcount;
                }
            }
        }
        printf("Odd count = %d and even count =%d\n",oddcount,evencount);
        if(oddcount == evencount) {
            printf("TWIN\n");
        } else if((oddcount > evencount) && ((oddcount > 1) && (evencount > 1))) {
            printf("ODD\n");
        } else if((evencount > oddcount) && ((oddcount > 1) && (evencount > 1))) {
            printf("EVEN\n");
        } else {
            printf("ALIEN\n");
        }
    } else {
        printf("PARENT\n");
    }

    return 0;
}
*/