#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 6
/*
int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the Input

        int number;
        scanf("%d",&number);

        int flag = 0;
        int max = 0;
        char strEqualent[MAX_LENGTH];
        int stringLength;
        sprintf(strEqualent , "%d" , number);  // itoa()
        stringLength = strlen(strEqualent);

        if(stringLength > 1) 
        {
    // Step 2 --> Get the individual digits out of the whole number

            int individualDigits[stringLength];

            for(int i=0; i<stringLength; i++)
            {
                individualDigits[i] = ((int)((strEqualent[i] - '0')));
            }

            for(int i=0; i<stringLength; i++) // Sorted Individual Digits in (Desc) order 
            {
                for(int j=i+1; j<stringLength; j++)
                {
                    if(individualDigits[j] > individualDigits[i]) {
                        int temp = individualDigits[i];
                        individualDigits[i] = individualDigits[j];
                        individualDigits[j] = temp;
                    }
                }
            }

            int wholeNumber = 0;
            int multiplier = 1;

            for(int i=(stringLength - 1); i>=0; i--)  // Convert Individual digits into whole number
            {
                wholeNumber = (int)(wholeNumber + (individualDigits[i] * multiplier));
                multiplier = multiplier * 10;
            }

            int pos = 0;
            int possiblilities = ((stringLength * (stringLength - 1))/2);
            //char combinations[(possiblilities * 2)][stringLength];
            int combinations[(possiblilities * 5)];

            char descHolder[stringLength];
            sprintf(descHolder,"%d",wholeNumber);  // Convert the desc whole number into string

            for(int i=0; i<stringLength; i++)
            {
                for(int j=i+1; j<stringLength; j++)
                {
                    char temp[stringLength];
                    strcpy(temp,descHolder);
                    char jtemp = temp[j];
                    temp[j] = temp[i];
                    temp[i] =jtemp;

                    // This section deals with converting shifted digits into values (st)
                        int individualDigits1[stringLength];

                        for(int i=0; i<stringLength; i++)
                        {
                            individualDigits1[i] = ((int)((temp[i] - '0')));
                        }
                        int wholeNumber1 = 0;
                        int multiplier1 = 1;

                        for(int i=(stringLength - 1); i>=0; i--)  // Convert Individual digits into whole number
                        {
                            wholeNumber1 = (int)(wholeNumber1 + (individualDigits1[i] * multiplier1));
                            multiplier1 = multiplier1 * 10;
                        }
                    // (END)
                    combinations[pos++] = wholeNumber1;
                    for(int k=0; k<stringLength; k++) {temp[k] = '\0';};
                }
            }

            for(int i=0; i<stringLength; i++) // clear desc holder with null values
            {
                descHolder[i] = '\0';
            }

        // Asecending Part

            multiplier = 1;
            wholeNumber = 0;

            for(int i=0; i<stringLength; i++) // Sorted Individual Digits in (Desc) order 
            {
                for(int j=i+1; j<stringLength; j++)
                {
                    if(individualDigits[j] < individualDigits[i]) {
                        int temp = individualDigits[i];
                        individualDigits[i] = individualDigits[j];
                        individualDigits[j] = temp;
                    }
                }
            }

            for(int i=(stringLength - 1); i>=0; i--)  // Convert Individual digits into whole number
            {
                wholeNumber = (int)(wholeNumber + (individualDigits[i] * multiplier));
                multiplier = multiplier * 10;
            }

            if(individualDigits[0] == 0) {
                sprintf(descHolder,"0%d",wholeNumber);  // Convert the desc whole number into string
            } else {
                sprintf(descHolder,"%d",wholeNumber);  // Convert the desc whole number into string
            }

            for(int i=0; i<stringLength; i++)
            {
                for(int j=i+1; j<stringLength; j++)
                {
                    char temp[stringLength];
                    strcpy(temp,descHolder);
                    char jtemp = temp[j];
                    temp[j] = temp[i];
                    temp[i] =jtemp;
                    // This section deals with converting shifted digits into values (st)
                        int individualDigits1[stringLength];

                        for(int i=0; i<stringLength; i++)
                        {
                            //printf("temp[i] = %d,",temp[i]);
                            individualDigits1[i] = ((int)((temp[i] - '0')));
                            //printf("%d\n",individualDigits1[i]);
                        }
                        int wholeNumber1 = 0;
                        int multiplier1 = 1;

                        for(int i=(stringLength - 1); i>=0; i--)  // Convert Individual digits into whole number
                        {
                            wholeNumber1 = (int)(wholeNumber1 + (individualDigits1[i] * multiplier1));
                            multiplier1 = multiplier1 * 10;
                        }
                    // (END)
                    combinations[pos++] = wholeNumber1;
                    for(int k=0; k<stringLength; k++) {temp[k] = '\0';};
                }
            }

            for(int i=0; i<stringLength; i++) // clear desc holder with null values
            {
                descHolder[i] = '\0';
            }

        // Asec Ends

        // Shift the Input number Starts

            multiplier = 1;
            wholeNumber = 0;

            for(int i=0; i<stringLength; i++)
            {
                individualDigits[i] = ((int)((strEqualent[i] - '0')));
            }

            for(int i=(stringLength - 1); i>=0; i--)  // Convert Individual digits into whole number
            {
                wholeNumber = (int)(wholeNumber + (individualDigits[i] * multiplier));
                multiplier = multiplier * 10;
            }

            sprintf(descHolder,"%d",wholeNumber);  // Convert the desc whole number into string

            for(int i=0; i<stringLength; i++)
            {
                for(int j=i+1; j<stringLength; j++)
                {
                    char temp[stringLength];
                    strcpy(temp,descHolder);
                    char jtemp = temp[j];
                    temp[j] = temp[i];
                    temp[i] =jtemp;
                    // This section deals with converting shifted digits into values (st)
                        int individualDigits1[stringLength];

                        for(int i=0; i<stringLength; i++)
                        {
                            individualDigits1[i] = ((int)((temp[i] - '0')));
                        }
                        int wholeNumber1 = 0;
                        int multiplier1 = 1;

                        for(int i=(stringLength - 1); i>=0; i--)  // Convert Individual digits into whole number
                        {
                            wholeNumber1 = (int)(wholeNumber1 + (individualDigits1[i] * multiplier1));
                            multiplier1 = multiplier1 * 10;
                        }
                    // (END)
                    combinations[pos++] = wholeNumber1;
                    for(int k=0; k<stringLength; k++) {temp[k] = '\0';};
                }
            }

            for(int i=0; i<stringLength; i++) // clear desc holder with null values
            {
                descHolder[i] = '\0';
            }

        // Ends

        // Reverse the original Input

            int revpos = 0;
            char reversed[stringLength];

            for(int i=(stringLength - 1); i>=0; i--)
            {
                reversed[revpos++] = strEqualent[i];
            }
            reversed[revpos] = '\0';

            strcpy(descHolder,reversed);

            for(int i=0; i<stringLength; i++)
                {
                    for(int j=i+1; j<stringLength; j++)
                    {
                        char temp[stringLength];
                        strcpy(temp,descHolder);
                        char jtemp = temp[j];
                        temp[j] = temp[i];
                        temp[i] =jtemp;
                        // This section deals with converting shifted digits into values (st)
                            int individualDigits1[stringLength];

                            for(int i=0; i<stringLength; i++)
                            {
                                individualDigits1[i] = ((int)((temp[i] - '0')));
                            }
                            int wholeNumber1 = 0;
                            int multiplier1 = 1;

                            for(int i=(stringLength - 1); i>=0; i--)  // Convert Individual digits into whole number
                            {
                                wholeNumber1 = (int)(wholeNumber1 + (individualDigits1[i] * multiplier1));
                                multiplier1 = multiplier1 * 10;
                            }
                        // (END)
                        combinations[pos++] = wholeNumber1;
                        for(int k=0; k<stringLength; k++) {temp[k] = '\0';};
                    }
                }

                for(int i=0; i<stringLength; i++) // clear desc holder with null values
                {
                    descHolder[i] = '\0';
                }

        // Ends (reverse org inp)

    // Step 3 ---> Sort the combination array in asec order

            for(int i=0; i<pos; i++)  // Sorted Combination (Asc) order
            {
                for(int j=i+1; j<pos; j++)
                {
                    if(combinations[j] < combinations[i]) {
                        int temp = combinations[i];
                        combinations[i] = combinations[j];
                        combinations[j] = temp;
                    }
                }
            }

    // Step 4 ----> Get the smallest num but greater the number

            for(int i=0; i<pos; i++)
            {
                if(combinations[i] > number) {
                    max = combinations[i];
                    i = pos;
                    break;
                }
            }

            if((max > number)) 
            {
            // Step 5 -----> Get final smallest

                sprintf(strEqualent , "%d" , max);

                for(int i=0; i<stringLength; i++)
                {
                    individualDigits[i] = ((int)((strEqualent[i] - '0')));
                }

                wholeNumber = 0;
                multiplier = 1;

                for(int i=(stringLength - 1); i>=0; i--)  // Convert Individual digits into whole number
                {
                    wholeNumber = (int)(wholeNumber + (individualDigits[i] * multiplier));
                    multiplier = multiplier * 10;
                }

                sprintf(descHolder,"%d",wholeNumber);  // Convert the desc whole number into string

                for(int i=0; i<stringLength; i++)
                {
                    for(int j=i+1; j<stringLength; j++)
                    {
                        char temp[stringLength];
                        strcpy(temp,descHolder);
                        char jtemp = temp[j];
                        temp[j] = temp[i];
                        temp[i] =jtemp;
                        // This section deals with converting shifted digits into values (st)
                            int individualDigits1[stringLength];

                            for(int i=0; i<stringLength; i++)
                            {
                                individualDigits1[i] = ((int)((temp[i] - '0')));
                            }
                            int wholeNumber1 = 0;
                            int multiplier1 = 1;

                            for(int i=(stringLength - 1); i>=0; i--)  // Convert Individual digits into whole number
                            {
                                wholeNumber1 = (int)(wholeNumber1 + (individualDigits1[i] * multiplier1));
                                multiplier1 = multiplier1 * 10;
                            }
                        // (END)
                        combinations[pos++] = wholeNumber1;
                        for(int k=0; k<stringLength; k++) {temp[k] = '\0';};
                    }
                }

                for(int i=0; i<stringLength; i++) // clear desc holder with null values
                {
                    descHolder[i] = '\0';
                }

            // Ends (Final TC)

            // Step 6 ------> Sort the combination array in asec order

                for(int i=0; i<pos; i++) // Sorted Combination (Asc) order 
                {
                    for(int j=i+1; j<pos; j++)
                    {
                        if(combinations[j] < combinations[i]) {
                            int temp = combinations[i];
                            combinations[i] = combinations[j];
                            combinations[j] = temp;
                        }
                    }
                }

            // Step 7 -------> Get the smallest num but greater the number

                for(int i=0; i<pos; i++)
                {
                    if(combinations[i] > number) {
                        flag = 1;
                        max = combinations[i];
                        i = pos;
                        break;
                    } else {
                        flag = 0;
                    }
                }
            }  else {
            flag = 0;
            }
    
    // Step 8 --------> Print the Result

            if(flag) {
                printf("%d\n",max);
            } else {
                printf("not possible\n");
            }
        } else {
            printf("not possible\n");
        }

    }
	return 0;
}
*/


int main()
{
  // Step 1 -> Get the Input

    //int number = 18468;
    //int number = 6335; // 6353
    //int number = 143;
    //int number = 431;
    //int number = 311;
    //int number = 14772;
    //int number = 14771;
    //int number = 19170; // 19701
    //int number = 07191;
    int number = 12860; // 16028

    int flag = 0;
    int max = 0;
    char strEqualent[MAX_LENGTH];
    int stringLength;
    sprintf(strEqualent , "%d" , number);  // itoa()
    stringLength = strlen(strEqualent);
    printf("Int as string :%s with size of :%d\n",strEqualent,stringLength);

    if(stringLength > 1) 
    {
    // Step 2 --> Get the individual digits out of the whole number

        int individualDigits[stringLength];

        for(int i=0; i<stringLength; i++)
        {
            individualDigits[i] = ((int)((strEqualent[i] - '0')));
        }

        for(int i=0; i<stringLength; i++) // Print the Ind Digits
        {
            printf("%d ",individualDigits[i]);
        } printf("\n");

        for(int i=0; i<stringLength; i++) // Sorted Individual Digits in (Desc) order 
        {
            for(int j=i+1; j<stringLength; j++)
            {
                if(individualDigits[j] > individualDigits[i]) {
                    int temp = individualDigits[i];
                    individualDigits[i] = individualDigits[j];
                    individualDigits[j] = temp;
                }
            }
        }

        for(int i=0; i<stringLength; i++) // Print the Sorted (Desc)Individual Digits 
        {
            printf("%d ",individualDigits[i]);
        } printf("\n");

        int wholeNumber = 0;
        int multiplier = 1;

        for(int i=(stringLength - 1); i>=0; i--)  // Convert Individual digits into whole number
        {
            wholeNumber = (int)(wholeNumber + (individualDigits[i] * multiplier));
            multiplier = multiplier * 10;
        }

        int pos = 0;
        int possiblilities = ((stringLength * (stringLength - 1))/2);
        //char combinations[(possiblilities * 2)][stringLength];
        int combinations[(possiblilities * 5)];

        char descHolder[stringLength];
        sprintf(descHolder,"%d",wholeNumber);  // Convert the desc whole number into string
        printf("Desc number as string :%s\n",descHolder);

        for(int i=0; i<stringLength; i++)
        {
            for(int j=i+1; j<stringLength; j++)
            {
                char temp[stringLength];
                strcpy(temp,descHolder);
                char jtemp = temp[j];
                temp[j] = temp[i];
                temp[i] =jtemp;

                printf("Temp before :%s\n",temp);
                // This section deals with converting shifted digits into values (st)
                    int individualDigits1[stringLength];

                    for(int i=0; i<stringLength; i++)
                    {
                        individualDigits1[i] = ((int)((temp[i] - '0')));
                    }
                    int wholeNumber1 = 0;
                    int multiplier1 = 1;

                    for(int i=(stringLength - 1); i>=0; i--)  // Convert Individual digits into whole number
                    {
                        wholeNumber1 = (int)(wholeNumber1 + (individualDigits1[i] * multiplier1));
                        multiplier1 = multiplier1 * 10;
                    }
                    printf("Whole number :%d\n",wholeNumber1);
                // (END)
                combinations[pos++] = wholeNumber1;
                for(int k=0; k<stringLength; k++) {temp[k] = '\0';};
            }
        }

        for(int i=0; i<stringLength; i++) // clear desc holder with null values
        {
            descHolder[i] = '\0';
        }

        for(int i=0; i<pos; i++)
        {
            printf("Desc Shifted: %d\n",combinations[i]);
        } printf("\n");

    // Asecending Part
        printf("Asec Part\n");

        multiplier = 1;
        wholeNumber = 0;

        for(int i=0; i<stringLength; i++) // Sorted Individual Digits in (Desc) order 
        {
            for(int j=i+1; j<stringLength; j++)
            {
                if(individualDigits[j] < individualDigits[i]) {
                    int temp = individualDigits[i];
                    individualDigits[i] = individualDigits[j];
                    individualDigits[j] = temp;
                }
            }
        }

        for(int i=0; i<stringLength; i++) // Print the Sorted (Asec)Individual Digits 
        {
            printf("%d ",individualDigits[i]);
        } printf("\n");

        for(int i=(stringLength - 1); i>=0; i--)  // Convert Individual digits into whole number
        {
            wholeNumber = (int)(wholeNumber + (individualDigits[i] * multiplier));
            multiplier = multiplier * 10;
        }
        printf("Whole number Asec is :%d\n",wholeNumber);

        if(individualDigits[0] == 0) {
            sprintf(descHolder,"0%d",wholeNumber);  // Convert the desc whole number into string
        } else {
             sprintf(descHolder,"%d",wholeNumber);  // Convert the desc whole number into string
        }
        printf("Asec number as string :%s\n",descHolder);

        for(int i=0; i<stringLength; i++)
        {
            for(int j=i+1; j<stringLength; j++)
            {
                char temp[stringLength];
                strcpy(temp,descHolder);
                char jtemp = temp[j];
                temp[j] = temp[i];
                temp[i] =jtemp;
                // This section deals with converting shifted digits into values (st)
                    int individualDigits1[stringLength];

                    for(int i=0; i<stringLength; i++)
                    {
                        //printf("temp[i] = %d,",temp[i]);
                        individualDigits1[i] = ((int)((temp[i] - '0')));
                        //printf("%d\n",individualDigits1[i]);
                    }
                    int wholeNumber1 = 0;
                    int multiplier1 = 1;

                    for(int i=(stringLength - 1); i>=0; i--)  // Convert Individual digits into whole number
                    {
                        wholeNumber1 = (int)(wholeNumber1 + (individualDigits1[i] * multiplier1));
                        multiplier1 = multiplier1 * 10;
                    }
                // (END)
                combinations[pos++] = wholeNumber1;
                for(int k=0; k<stringLength; k++) {temp[k] = '\0';};
            }
        }

        for(int i=0; i<stringLength; i++) // clear desc holder with null values
        {
            descHolder[i] = '\0';
        }

        for(int i=0; i<pos; i++)
        {
            printf("Desc + Asec Shifted: %d\n",combinations[i]);
        } printf("\n");

    // Asec Ends

    // Shift the Input number Starts

        printf("Input shifting Part\n");

        multiplier = 1;
        wholeNumber = 0;
        printf("Int as string :%s with size of :%d\n",strEqualent,stringLength);

        for(int i=0; i<stringLength; i++)
        {
            individualDigits[i] = ((int)((strEqualent[i] - '0')));
        }

        for(int i=0; i<stringLength; i++) // Print the Sorted (Asec)Individual Digits 
        {
            printf("%d ",individualDigits[i]);
        } printf("\n");

        for(int i=(stringLength - 1); i>=0; i--)  // Convert Individual digits into whole number
        {
            wholeNumber = (int)(wholeNumber + (individualDigits[i] * multiplier));
            multiplier = multiplier * 10;
        }
        printf("Whole number Inp is :%d\n",wholeNumber);

        sprintf(descHolder,"%d",wholeNumber);  // Convert the desc whole number into string
        printf("Input number as string :%s\n",descHolder);

        for(int i=0; i<stringLength; i++)
        {
            for(int j=i+1; j<stringLength; j++)
            {
                char temp[stringLength];
                strcpy(temp,descHolder);
                char jtemp = temp[j];
                temp[j] = temp[i];
                temp[i] =jtemp;
                printf("Temp before :%s\n",temp);
                // This section deals with converting shifted digits into values (st)
                    int individualDigits1[stringLength];

                    for(int i=0; i<stringLength; i++)
                    {
                        individualDigits1[i] = ((int)((temp[i] - '0')));
                    }
                    int wholeNumber1 = 0;
                    int multiplier1 = 1;

                    for(int i=(stringLength - 1); i>=0; i--)  // Convert Individual digits into whole number
                    {
                        wholeNumber1 = (int)(wholeNumber1 + (individualDigits1[i] * multiplier1));
                        multiplier1 = multiplier1 * 10;
                    }
                    printf("Whole number :%d\n",wholeNumber1);
                // (END)
                combinations[pos++] = wholeNumber1;
                for(int k=0; k<stringLength; k++) {temp[k] = '\0';};
            }
        }

        for(int i=0; i<stringLength; i++) // clear desc holder with null values
        {
            descHolder[i] = '\0';
        }

        for(int i=0; i<pos; i++)
        {
            printf("Input Shifted: %d\n",combinations[i]);
        } printf("\n");


    // Ends

    // Reverse the original Input

        printf("Reversed Input :\n");

        printf("String Equ :%s\n",strEqualent);

        int revpos = 0;
        char reversed[stringLength];

        for(int i=(stringLength - 1); i>=0; i--)
        {
            reversed[revpos++] = strEqualent[i];
        }
        reversed[revpos] = '\0';

        printf("Reversed Input is :%s\n",reversed);
        strcpy(descHolder,reversed);

        for(int i=0; i<stringLength; i++)
            {
                for(int j=i+1; j<stringLength; j++)
                {
                    char temp[stringLength];
                    strcpy(temp,descHolder);
                    char jtemp = temp[j];
                    temp[j] = temp[i];
                    temp[i] =jtemp;
                    printf("Temp before :%s\n",temp);
                    // This section deals with converting shifted digits into values (st)
                        int individualDigits1[stringLength];

                        for(int i=0; i<stringLength; i++)
                        {
                            individualDigits1[i] = ((int)((temp[i] - '0')));
                        }
                        int wholeNumber1 = 0;
                        int multiplier1 = 1;

                        for(int i=(stringLength - 1); i>=0; i--)  // Convert Individual digits into whole number
                        {
                            wholeNumber1 = (int)(wholeNumber1 + (individualDigits1[i] * multiplier1));
                            multiplier1 = multiplier1 * 10;
                        }
                        printf("Whole number :%d\n",wholeNumber1);
                    // (END)
                    combinations[pos++] = wholeNumber1;
                    for(int k=0; k<stringLength; k++) {temp[k] = '\0';};
                }
            }

            for(int i=0; i<stringLength; i++) // clear desc holder with null values
            {
                descHolder[i] = '\0';
            }

            for(int i=0; i<pos; i++)
            {
                printf("Desc + Asec Shifted: %d\n",combinations[i]);
            } printf("\n");

    // Ends (reverse org inp)

    // Step 3 ---> Sort the combination array in asec order

        for(int i=0; i<pos; i++)  // Sorted Combination (Asc) order
        {
            for(int j=i+1; j<pos; j++)
            {
                if(combinations[j] < combinations[i]) {
                    int temp = combinations[i];
                    combinations[i] = combinations[j];
                    combinations[j] = temp;
                }
            }
        }
        printf("Combinations sorted in asec order :\n");

        for(int i=0; i<pos; i++)
        {
            printf("%d ",combinations[i]);
        } printf("\n\n");


    // Step 4 ----> Get the smallest num but greater the number

        printf("Max Before if condition is :%d and position is :%d\n",max,pos);

        for(int i=0; i<pos; i++)
        {
            if(combinations[i] > number) {
                max = combinations[i];
                i = pos;
                break;
            }
        }

         printf("Max Before if condition is :%d and position is :%d\n",max,pos);

        if((max > number)) 
        {
        // Step 5 -----> Get final smallest

            printf("Final Smallest :\n");

            printf("Before max is :%d\n",max);

            sprintf(strEqualent , "%d" , max);
            printf("String Equalent is :%s\n",strEqualent);

            for(int i=0; i<stringLength; i++)
            {
                individualDigits[i] = ((int)((strEqualent[i] - '0')));
            }

            for(int i=0; i<stringLength; i++) // Print the Ind Digits
            {
                printf("%d ",individualDigits[i]);
            } printf("\n");

            wholeNumber = 0;
            multiplier = 1;

            for(int i=(stringLength - 1); i>=0; i--)  // Convert Individual digits into whole number
            {
                wholeNumber = (int)(wholeNumber + (individualDigits[i] * multiplier));
                multiplier = multiplier * 10;
            }

            sprintf(descHolder,"%d",wholeNumber);  // Convert the desc whole number into string
            printf("Final Smallest as string :%s\n",descHolder);

            for(int i=0; i<stringLength; i++)
            {
                for(int j=i+1; j<stringLength; j++)
                {
                    char temp[stringLength];
                    strcpy(temp,descHolder);
                    char jtemp = temp[j];
                    temp[j] = temp[i];
                    temp[i] =jtemp;

                    printf("Temp before :%s\n",temp);
                    // This section deals with converting shifted digits into values (st)
                        int individualDigits1[stringLength];

                        for(int i=0; i<stringLength; i++)
                        {
                            individualDigits1[i] = ((int)((temp[i] - '0')));
                        }
                        int wholeNumber1 = 0;
                        int multiplier1 = 1;

                        for(int i=(stringLength - 1); i>=0; i--)  // Convert Individual digits into whole number
                        {
                            wholeNumber1 = (int)(wholeNumber1 + (individualDigits1[i] * multiplier1));
                            multiplier1 = multiplier1 * 10;
                        }
                        printf("Whole number :%d\n",wholeNumber1);
                    // (END)
                    combinations[pos++] = wholeNumber1;
                    for(int k=0; k<stringLength; k++) {temp[k] = '\0';};
                }
            }

            for(int i=0; i<stringLength; i++) // clear desc holder with null values
            {
                descHolder[i] = '\0';
            }

            for(int i=0; i<pos; i++)
            {
                printf("Final Smallest: %d\n",combinations[i]);
            } printf("\n");

            printf("\n");

        // Ends (Final TC)

        // Step 6 ------> Sort the combination array in asec order

            for(int i=0; i<pos; i++) // Sorted Combination (Asc) order 
            {
                for(int j=i+1; j<pos; j++)
                {
                    if(combinations[j] < combinations[i]) {
                        int temp = combinations[i];
                        combinations[i] = combinations[j];
                        combinations[j] = temp;
                    }
                }
            }
            printf("Combinations sorted in asec order :\n");

            for(int i=0; i<pos; i++)
            {
                printf("%d ",combinations[i]);
            } printf("\n\n");


        // Step 7 -------> Get the smallest num but greater the number

            for(int i=0; i<pos; i++)
            {
                if(combinations[i] > number) {
                    flag = 1;
                    max = combinations[i];
                    i = pos;
                    break;
                } else {
                    flag = 0;
                }
            }
        }  else {
           flag = 0;
        }
 
    // Step 8 --------> Print the Result

        if(flag) {
            printf("%d\n",max);
        } else {
            printf("not possible\n");
        }

        
    } else {
        printf("not possible\n");
    }

    return 0;
}


/*
int main()
{
  // Step 1 -> Get the Input

    // int number = 18468;
    int number = 6335;
    //int number = 42;

    char strEqualent[MAX_LENGTH];
    int stringLength;
    sprintf(strEqualent , "%d" , number);
    stringLength = strlen(strEqualent);
    printf("Int in string :%s with size of :%d\n",strEqualent,stringLength);

    if(stringLength > 1) 
    {
    // Step 2 --> Get the max digit in the given number

        int num = number;
        int remainder;

        int pos = 0;
        int maxDigit = 0;
        int remainingDigits[(stringLength - 1)];

        for(int i=0; num != 0; i++)
        {
            if((num % 10) > maxDigit) {
                maxDigit = (num % 10);
                remainingDigits[pos++] = (num % 10);
                num = num/10;
            } else {
                remainingDigits[pos++] = (num % 10);
                num = num/10;
            }
        }

        if((maxDigit > 0) && ((maxDigit - remainingDigits[0] != 0))) {
            printf("Maxdigit is : %d\nPos is : %d\n",maxDigit,pos);

            for(int i=0; i<pos; i++) // Print the array before sorting
            {
                printf("%d ",remainingDigits[i]);
            } printf("\n");

            for(int i=0; i<pos; i++)
            {
                for(int j=i+1; j<pos; j++)
                {
                    if(remainingDigits[j] > remainingDigits[i]) {
                        int temp = remainingDigits[i];
                        remainingDigits[i] = remainingDigits[j];
                        remainingDigits[j] = temp;
                    }
                }
            }

            for(int i=0; i<pos; i++) // Print the array After sorting
            {
                printf("%d ",remainingDigits[i]);
            } printf("\n");
            
        } else {
            printf("not possible\n");
        }

    } else {
        printf("not possible\n");
    }

    return 0;
}
*/
