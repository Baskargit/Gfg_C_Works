#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 155

void eliminateZeros(char number[]);
int result(char numOne[] , char numTwo[]);

void eliminateZeros(char number[])
{
    int pos = 0;
    int zeroCount = 0;

    for(int i=0; number[i] != '\0'; i++) // Get the Zero Count
    {
        if(number[i] != '0') {
            break;
        } else {
            ++zeroCount;
        }
    }

    for(int i=0; i<zeroCount; i++) // Eliminate Zeros
    {
        for(int j=0; number[j] != '\0'; j++)
        {
            number[j] = number[j+1];
            pos++;
        } number[pos] = '\0';
        pos = 0;
    }
}

int result(char numOne[] , char numTwo[])
{
    if(strlen(numOne) == strlen(numTwo)) {
        int three = 1;
        for(int i=0; numOne[i] != '\0'; i++)
        {
            if((numOne[i] != numTwo[i])) {
                three = 0;
                if(numOne[i] < numTwo[i]) {
                    return 1;
                    break;
                } else {
                    return 2;
                    break;
                }
            } else {
                three = 1;
            }
        }
        if(three) {return 3;};
    } else if(strlen(numOne) < strlen(numTwo)) {
        return 1;
    } else {
        return 2;
    }
}

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the Input 
        char numA[MAX_LENGTH];
        scanf("%s",numA);
        char numB[MAX_LENGTH];
        scanf("%s",numB);

        int resultFinal;
    // Step 2 --> Get the results

        if(numA[0] == '0' && numB[0] == '0') {
            eliminateZeros(numA);
            eliminateZeros(numB);
            printf("%s\n",numA);
            printf("%s\n",numB);
            resultFinal = result(numA,numB);
        } else if(numA[0] == '0') {
            eliminateZeros(numA);
            printf("%s\n",numA);
            resultFinal = result(numA,numB);
        } else if(numB[0] == '0') {
            eliminateZeros(numB);
            printf("%s\n",numB);
            resultFinal = result(numA,numB);
        } else {
            resultFinal = result(numA,numB);
        }
        
    // Step 3 ---> Print the Result
        printf("%d\n",resultFinal);


    }
    
	return 0;
}

/*
int main()
{   
  // Step 1 -> Get the Input 
    char numA[] = "1231";
    char numB[] = "1230";

    int resultFinal;
  // Step 2 --> Get the results

    if(numA[0] == '0' && numB[0] == '0') {
        eliminateZeros(numA);
        eliminateZeros(numB);
        printf("%s\n",numA);
        printf("%s\n",numB);
        resultFinal = result(numA,numB);
    } else if(numA[0] == '0') {
        eliminateZeros(numA);
        printf("%s\n",numA);
        resultFinal = result(numA,numB);
    } else if(numB[0] == '0') {
        eliminateZeros(numB);
        printf("%s\n",numB);
        resultFinal = result(numA,numB);
    } else {
        resultFinal = result(numA,numB);
    }

  // Step 3 ---> Print the Result
    printf("%d\n",resultFinal);

    return 0 ;
}
*/

