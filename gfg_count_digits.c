#include<stdio.h>
#define max_length 1000000

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 ----> Get the number as a string

		char string[max_length];
		scanf("%s",string);
		long int stringLength = 0;
		unsigned long long int number = 0;

		for(int i=0; string[i] != '\0'; stringLength++,i++);

	// Step 2 ----> Convert the string into number and store it in a separate variable

		unsigned long long int multiplier = 1;

		for(int i=(stringLength-1); i>=0; i--)
		{
			number = number + ((string[i] - '0') * multiplier);
			multiplier = multiplier * 10;
		}

	// Step 3 ----> Check for even division

		int totalCount = 0;

		for(int i=0; i<stringLength;)
		{
			int digit = (string[i] - '0');
			if((digit != 0) && (number % digit == 0)) {
				totalCount++;
				i++;
			} else {
				i++;
			}
		}

	// Step 4 ----> Print the Result

		printf("%d\n",totalCount);

	// Step 5 ----> Flush the input string with null characters

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
  // Step 1 ----> Get the number as a string

    char string[max_length] = "24";
    long int stringLength = 0;
    unsigned long long int number = 0;

    for(int i=0; string[i] != '\0'; stringLength++,i++);
    printf("%ld\n",stringLength);

  // Step 2 ----> Convert the string into number and store it in a separate variable

    unsigned long long int multiplier = 1;

    for(int i=(stringLength-1); i>=0; i--)
    {
      number = number + ((string[i] - '0') * multiplier);
      multiplier = multiplier * 10;
      printf("number = %lld ----> multiplier = %lld for number=%c\n",number,multiplier,string[i]);
    }

    printf("Number is :%lld\n",number);

  // Step 3 ----> Check for even division

    int totalCount = 0;

    for(int i=0; i<stringLength;)
    {
        int digit = (string[i] - '0');
        if(number % digit == 0) {
          totalCount++;
          i++;
        } else {
          i++;
        }
    }

  // Step 4 ----> Print the Result

    printf("The Count is :%d\n",totalCount);

  // Step 5 ----> Flush the input string with null characters

    for(int i=0; i<stringLength; i++)
    {
		string[i] = '\0';
    }

    return 0;
}
*/