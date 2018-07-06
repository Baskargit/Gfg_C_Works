#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get input

        long int position;
        scanf("%ld",&position);
        
        int divideCounter = 0;
        long int numerator = position;
        int moduloHolder[20];
    
    // Step 2 --> Based on the position program flow changes
        if(position > 26) {
            for(int i=0; numerator >= 1; i++)
            {
                if((numerator % 26) == 0) {
                    moduloHolder[divideCounter++] = numerator % 26;
                    numerator = ((numerator/26) - 1);
                } else {
                    moduloHolder[divideCounter++] = numerator % 26;
                    numerator = numerator/26;
                }
            }

            char column[(divideCounter + 1)];
            int colPos = 0;

            for(int i=(divideCounter-1); i >= 0; i--)
            {
                if(moduloHolder[i] == 0) {
                    column[colPos++] = 'Z';
                } else {
                    column[colPos++] = ('A' + (moduloHolder[i] - 1));
                }
            }

            column[colPos++] = '\0';

            printf("%s\n",column);
        } else {
            printf("%c\n",(int)('A' + (position - 1)) );
        }
    }
    
	return 0;
}

/*
int main()
{
    //long int position = 1804289384;
    //long int position = 4294967295;
    long int position = 27;
    

    int divideCounter = 0;
    long int numerator = position;
    int divideHolder[20];
    int moduloHolder[20];

    if(position > 26) {
        for(int i=0; numerator >= 1; i++)
        {
            if((numerator % 26) == 0) {
                moduloHolder[divideCounter] = numerator % 26;
                numerator = ((numerator/26) - 1);
                divideHolder[divideCounter] = numerator;
                divideCounter++;
            } else {
                moduloHolder[divideCounter] = numerator % 26;
                numerator = numerator/26;
                divideHolder[divideCounter] = numerator;
                divideCounter++;
            }
        }

        char column[(divideCounter + 1)];
        int colPos = 0;

        for(int i=(divideCounter-1); i >= 0; i--)
        {
            if(moduloHolder[i] == 0) {
                column[colPos++] = 'Z';
                printf("Inserting %c\n",'Z');
            } else {
                column[colPos++] = ('A' + (moduloHolder[i] - 1));
                printf("Inserting %c\n",('A' + (moduloHolder[i] - 1)));
            }
        }

        column[colPos++] = '\0';

        for(int i=0; i<divideCounter; i++)
        {
            printf("/=%d ---> %%=%d\n",divideHolder[i],moduloHolder[i]);
        }

        printf("%s\n",column);
    } else {
        printf("%c\n",(int)('A' + (position - 1)) );
    }

}
*/