#include<stdio.h>
#define max_length 1000000

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 ----> Get the Input
        int num;
        scanf("%d",&num);
        unsigned long long int factorial = 0;
        char fac_Char[max_length];
        char final_char[max_length];
        unsigned long long int finalFactorial = 0;

    // Step 2 ----> Find the Factorial(sum)

        for(int i=num; i>0; i--)
        {
            factorial = factorial + i;
        }

    // Step 3 ----> Insert the factorial into an array but as chars not as integers

        sprintf(fac_Char,"%lld",factorial);
        int stringLength = 0;

        for(int i=0; fac_Char[i] != '\0'; i++)
        {
            stringLength++;
        }

    // Step 4 ----> Check whether the number is krishnamurthy number or not

        int flag = 0;
        long long int sum = 0;

        if(stringLength > 1) {
            for(int i=0; i<(stringLength-1); i++)
            {
                sum = sum + (fac_Char[i] - '0');
            }

            int finalDigit = (fac_Char[stringLength-1] - '0');

            sprintf(final_char,"%lld",sum);

            unsigned long long int multiplier = 10;
            unsigned long long int number = 0;
            int stringLength1 = 0;

            for(int i=0; final_char[i] != '\0'; i++)
            {
                stringLength1++;
            }

            for(int i=(stringLength1-1); i>=0; i--)
            {
                number = number + ((final_char[i] - '0') * multiplier);
                multiplier = multiplier * 10;
            }

            finalFactorial = number + finalDigit;

            if(finalFactorial == num) {
                flag = 1;
            } else {
                flag = 0;
            }

        } else {
            
            if(num == 2) {
                flag = 1;
            } else {
                flag = 0;
            }
        }
        
    // Step 5 ----> Print the Result

        if(flag) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

    // Step 6 ----> Flush the old values with null character

        for(int i=0; i<stringLength; i++)
        {
            fac_Char[i] = '\0';
            final_char[i] = '\0';
        }
    }
    
	return 0;
}

/*
int main()
{
  // Step 1 ----> Get the Input
    int num = 100;
    unsigned long long int factorial = 0;
    char fac_Char[max_length];
    char final_char[max_length];
    unsigned long long int finalFactorial = 0;

  // Step 2 ----> Find the Factorial(sum)

    for(int i=num; i>0; i--)
    {
        factorial = factorial + i;
    }
    printf("Factorial of %d is %llu\n",num,factorial);

  // Step 3 ----> Insert the factorial into an array but as chars not as integers

    sprintf(fac_Char,"%lld",factorial);
    int stringLength = 0;

    for(int i=0; fac_Char[i] != '\0'; i++)
    {
        printf("%c",fac_Char[i]);
        stringLength++;
    }

    printf("\nStringLength is : %d\n",stringLength);

  // Step 4 ----> Check whether the number is krishnamurthy number or not

    int flag = 0;
    long long int sum = 0;

    if(stringLength >= 1) {
        for(int i=0; i<(stringLength-1); i++)
        {
            sum = sum + (fac_Char[i] - '0');
        }
        printf("The sum is : %lld\n",sum);

        int finalDigit = (fac_Char[stringLength-1] - '0');

        sprintf(final_char,"%lld",sum);

        unsigned long long int multiplier = 10;
        unsigned long long int number = 0;
        int stringLength1 = 0;

        for(int i=0; final_char[i] != '\0'; i++)
        {
            stringLength1++;
        }

		for(int i=(stringLength1-1); i>=0; i--)
		{
			number = number + ((final_char[i] - '0') * multiplier);
			multiplier = multiplier * 10;
		}

        finalFactorial = number + finalDigit;

        printf("The finalFactorial is : %llu\n",finalFactorial);

        if(finalFactorial == num) {
            flag = 1;
        } else {
            flag = 0;
        }

    } else {
        flag = 0;
    }
    
  // Step 5 ----> Print the Result

    if(flag) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }


  // Step 6 ----> Flush the old values with null character

    for(int i=0; i<stringLength; i++)
    {
        fac_Char[i] = '\0';
        final_char[i] = '\0';
    }
       
    return 0;
}
*/

	