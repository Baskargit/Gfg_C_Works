#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    int finalOutput[testCaseCount];

    for(int i=0; i<testCaseCount; i++)
    {
        char string[100];
        int count = 0;
        scanf("%s",string);

        for(int j=0; string[j] != '\0'; j++)
        {
            ++count;
        }

        if(count > 1) {
            for(int j=0; j<count; j++)
            {
                for(int k=j+1; k<count;)
                {
                    if(string[j] == string[k]) {
                            finalOutput[i] = 0; // Not a Isogram
                            k=count;
                            j=count;
                        } else {
                            finalOutput[i] = 1; //Isogram
                            k++;
                        }
                }
            }
        } else {
            finalOutput[i] = 1;
        }

    }

    for(int i=0; i<testCaseCount; i++)
    {
        printf("%d\n",finalOutput[i]);
    }

	return 0;
}