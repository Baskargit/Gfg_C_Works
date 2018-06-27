#include<stdio.h>
# define max_length 1000

int main()
{
	int testCaseCount;
    int orginalLength = 0;
    char inputString[max_length],c;
    scanf("%d",&testCaseCount);

    int j = 0;

    for(int count=1; count<=testCaseCount; count++)
    {
        char finalOutput[max_length] = "";
        c = getchar();
        scanf("%[^\n]s",inputString);

        for(int i=0; inputString[i] != '\0'; orginalLength++,i++);

        for(int i=0; i<orginalLength;)
        {
           if(!(inputString[i] == 'a' || inputString[i] == 'e' || inputString[i] == 'i' || inputString[i] == 'o' || inputString[i] == 'u' || inputString[i] == 'A' || inputString[i] == 'E' || inputString[i] == 'I' || inputString[i] == 'O' || inputString[i] == 'U')) {
               finalOutput[j] = inputString[i];
               j++;
               i++;
           } else {
               i++;
           }
        }
        orginalLength = 0;
        j = 0;
        printf("%s\n",finalOutput);  
    }
    return 0;
}