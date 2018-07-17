#include <stdio.h>
#define MAX_LENGTH 1000000

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount); 
    
    for(int count=0; count<testCaseCount; count++)
    {
        char Input[MAX_LENGTH];
        scanf("%s",Input);
        unsigned long long int counter = 0;

        for(unsigned long long int i=0; Input[i] != '\0';)
        {
            if(Input[i] != Input[i+1]) {
                i++;
            } else {
                counter = i+1;
                for(unsigned long long int j=(i+1); Input[j] != '\0'; j++)
                {
                    Input[j] = Input[j+1];
                    counter++;
                }
                Input[counter] = '\0';
                counter = 0;
            }
        }
        printf("%s\n",Input);
    }
	return 0;
}

/*
int main()
{
    char Input[] = "012222489999662";
    unsigned long long int counter = 0;

    for(unsigned long long int i=0; Input[i] != '\0';)
    {
        if(Input[i] != Input[i+1]) {
            i++;
        } else {
            counter = i+1;
            for(unsigned long long int j=(i+1); Input[j] != '\0'; j++)
            {
                Input[j] = Input[j+1];
                counter++;
            }
            Input[counter] = '\0';
            counter = 0;
        }
    }

    printf("%s\n",Input);

    return 0;
}
*/