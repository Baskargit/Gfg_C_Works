#include <stdio.h>
#include <string.h>

int main()
{
  // Step 1 -> Get the input
    int number = 776;
    char numStr[4];
    sprintf(numStr,"%d",number);
    printf("Int to str :%s\n",numStr);

  // Step 2 --> Reverse the given integer
    char numReversedStr[4];
    int pos = 0;
    for(int i=((strlen(numStr)) -1); i>=0; i--)
    {
        numReversedStr[pos++] = numStr[i];
    } numReversedStr[pos] = '\0';
    printf("Reversed Number is :%s\n",numReversedStr);

    int numReversed = 0;
    int multiplier = 1;
    for(int i=(pos - 1); i>=0; i--)
    {
        numReversed = numReversed + ((numReversedStr[i] - '0') * multiplier);
        multiplier *= 10;
    }
    printf("Reversed Number in integer : %d\n",numReversed);

  // Step 3 ---> Check whether it is palindrome or not
    int numReversedProduct = numReversed *5;
    int numAdded = numReversed + number;

    char numReversedProductStr[4];
    char numAddedStr[4];
    char numReversedProductStrRev[4];
    char numAddedStrRev[4];
    sprintf(numReversedProductStr,"%d",numReversedProduct);
    sprintf(numAddedStr,"%d",numAdded);
    printf("%d\n",numReversedProduct);
    printf("%d\n",numAdded);

    int posRev1 = 0;
    for(int i=((strlen(numReversedProductStr)) -1); i>=0; i--)
    {
        numReversedProductStrRev[posRev1++] = numReversedProductStr[i];
    } numReversedProductStrRev[posRev1] = '\0';
    printf("Reversed Str is :%s\n",numReversedProductStrRev);

    int posRev2 = 0;
    for(int i=((strlen(numAddedStr)) -1); i>=0; i--)
    {
        numAddedStrRev[posRev2++] = numAddedStr[i];
    } numAddedStrRev[posRev2] = '\0';
    printf("Reversed Str is :%s\n",numAddedStrRev);

    int numReversedProductStrRevInt = 0;
    int numAddedStrRevInt = 0;

    multiplier = 1;
    for(int i=(posRev1 - 1); i>=0; i--)
    {
        numReversedProductStrRevInt = numReversedProductStrRevInt + ((numReversedProductStrRev[i] - '0') * multiplier);
        multiplier *= 10;
    }
    printf("Reversed integer : %d\n",numReversedProductStrRevInt);
    multiplier = 1;
    for(int i=(posRev2 - 1); i>=0; i--)
    {
        numAddedStrRevInt = numAddedStrRevInt + ((numAddedStrRev[i] - '0') * multiplier);
        multiplier *= 10;
    }
    printf("Reversed integer : %d\n",numAddedStrRevInt);

  // Step 4 ----> Print the Result

    if( (numAddedStrRevInt == numAdded) ) {
        printf("%d\n",numAdded);
    } else if((numReversedProductStrRevInt == numReversedProduct)) {
        printf("%d\n",numReversedProduct);
    } else {
        printf("-1\n");
    }

    return 0;
}