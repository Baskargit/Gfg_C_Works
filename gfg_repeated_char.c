#include<stdio.h>
#define max_length 100000

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

        char converted[stringLength];
        int position;

        if(stringLength > 1) 
        {
            for(int i=0; i<stringLength; i++)
            {
                if(input[i] >= 65 && input[i] <= 90) {
                    converted[i] = ((input[i] - 65) + 97);
                } else {
                    converted[i] = input[i];
                }
            }

            for(int i=0; i<stringLength; i++)
            {
                for(int j=i+1; j<stringLength;)
                {
                    if(converted[i] == converted[j]) {
                        position = i;
                        i = stringLength;
                        j = stringLength;
                    } else {
                        position = -1;
                        j++;
                    }
                }
            }
        } else {
            position = -1;
        }

        if (position != -1) {
            printf("%c\n",input[position]);
        } else {
            printf("%d\n",position);
        }   
    }
	return 0;
}

/*
int main()
{
	char input[max_length] = "Geeksforgeeks";
    int stringLength = 0;
    
    for(int i=0; input[i] != '\0'; stringLength++,i++);

    char converted[stringLength];
    char output;
    int position;

    for(int i=0; i<stringLength; i++)
    {
        if(input[i] >= 65 && input[i] <= 90) {
            converted[i] = ((input[i] - 65) + 97);
        } else {
            converted[i] = input[i];
        }
    }

    for(int i=0; i<stringLength; i++)
    {
        for(int j=i+1; j<stringLength;)
        {
            if(converted[i] == converted[j]) {
                output = converted[i];
                position = i;
                i = stringLength;
                j = stringLength;
            } else {
                position = -1;
                j++;
            }
        }
    }

    if (position != -1) {
        printf("%c\n",input[position]);
    } else {
        printf("%d\n",position);
    }
    
	return 0;
}
*/
