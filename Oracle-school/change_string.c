#include<stdio.h>
#define max_length 100000

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount); 
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 ----> Get the Input
        char string[max_length];
        scanf("%s",string);
        
    // Step 2 ----> Identify the first character case

        int stringLength = 0;
        int firstCharacter = 0;

        for(int i=0; string[i] != '\0'; stringLength++,i++);

        for(int i=0; i<stringLength;)
        {
            if((string[i] >= 65 && string[i] <=90) || (string[i] >= 97 && string[i] <=122)) {
                firstCharacter = string[i];
                i = stringLength;
                i++;
            } else {
                i++;
            }
        }

    // Step 3 ----> Change the letters according to the first character

        if(firstCharacter >= 65 && firstCharacter <=90) {
            for(int i=0; i<stringLength; i++)
            {
                if(string[i] >= 97 && string[i] <=122) {
                    string[i] = ((string[i] - 'a') + 65);
                } else {
                    string[i] = string[i];
                }
            }
        } else {
            for(int i=0; i<stringLength; i++)
            {
                if(string[i] >= 65 && string[i] <=90) {
                    string[i] = ((string[i] - 'A') + 97);
                } else {
                    string[i] = string[i];
                }
            }
        }

    // Step 4 ----> Print the output

        printf("%s\n",string);

    // Step 5 ----> Flush the input

        for(int i=0; i<stringLength; i++)
        {
            string[i] = '\0';
        }

    }
    
	return 0;
}

/*
int main()
{
  // Step 1 ----> Get the Input
    char string[max_length] = "a  A!!12geEkS";
    
  // Step 2 ----> Identify the first character case

    int stringLength = 0;
    int firstCharacter = 0;

    for(int i=0; string[i] != '\0'; stringLength++,i++);
    printf("Stringlength is :%d\n",stringLength);

    for(int i=0; i<stringLength;)
    {
        if((string[i] >= 65 && string[i] <=90) || (string[i] >= 97 && string[i] <=122)) {
            firstCharacter = string[i];
            i = stringLength;
            i++;
        } else {
            i++;
        }
    }

    printf("%d\n",firstCharacter);

  // Step 3 ----> Change the letters according to the first character

    if(firstCharacter >= 65 && firstCharacter <=90) {
        for(int i=0; i<stringLength; i++)
        {
            if(string[i] >= 97 && string[i] <=122) {
                string[i] = ((string[i] - 'a') + 65);
            } else {
                string[i] = string[i];
            }
        }
    } else {
        for(int i=0; i<stringLength; i++)
        {
            if(string[i] >= 65 && string[i] <=90) {
                string[i] = ((string[i] - 'A') + 97);
            } else {
                string[i] = string[i];
            }
        }
    }

  // Step 4 ----> Print the output

    printf("%s\n",string);
    
    return 0;
}
*/