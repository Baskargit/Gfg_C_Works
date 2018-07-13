#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100000

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the Input
        char string[MAX_LENGTH];
        scanf("%s",string);
        char vowels[(strlen(string))];

    // Step 2 --> Get the vowels in the string
        int pos = 0;
        for(int i=((strlen(string)) -1); i>=0; i--)
        {
            if((string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u') || (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')) {
                vowels[pos++] = string[i];
            }
        }

    // Step 3 ---> Replace them in revere order
        pos = 0;
        for(int i=0; i<(strlen(string)); i++)
        {
            if((string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u') || (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')) {
                string[i] = vowels[pos++];
            }
        }

    // Step 4 ----> Print the Result

        printf("%s\n",string);

    }
    
	return 0;
}

/*
int main()
{
  // Step 1 -> Get the Input
    char string[] = "ransomware";
    char vowels[(strlen(string))];

  // Step 2 --> Get the vowels in the string
    int pos = 0;
    for(int i=((strlen(string)) -1); i>=0; i--)
    {
        if((string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u') || (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')) {
            vowels[pos++] = string[i];
        }
    }

  // Step 3 ---> Replace them in revere order
    pos = 0;
    for(int i=0; i<(strlen(string)); i++)
    {
        if((string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u') || (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')) {
            string[i] = vowels[pos++];
        }
    }

  // Step 4 ----> Print the Result

    printf("%s\n",string);

    return 0;
}
*/