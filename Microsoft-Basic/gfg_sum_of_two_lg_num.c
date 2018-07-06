#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        char numb1[MAX_LENGTH];
        scanf("%s",numb1);
        char numb2[MAX_LENGTH];
        scanf("%s",numb2);

        if(strlen(numb1) >= strlen(numb2)) 
        {
            int copy0Till = ((strlen(numb1)) - (strlen(numb2)));

            char temp[strlen(numb1)];

            for(int i=0; i<copy0Till; i++) // Fill zeros first
            {
                temp[i] = '0';
            }

            int pos = 0;

            for(int i=copy0Till; i<((strlen(numb1))); i++) // Fill the values next
            {
                temp[i] = numb2[pos++];
            } 

            // Fun part

            int remanider = 0;
            int set = 0;
            if((strlen(numb1)) != (strlen(numb2))) {
                set = ((strlen(numb1)) + (1));
            } else {
                set = (strlen(numb1));
            }
            int sumFinal[set];
            
            //sumFinal[(strlen(numb1))] = '\0';

            for(int i=((strlen(numb1)) - (1)); i>=0; i--)
            {
                int digit1 = (numb1[i] - '0');
                int digit2 = (temp[i] - '0');
                int sum = ((digit1 + digit2));
                    // Interior Logic 
                        if(i != 0) {
                            if(sum >= 10) {
                                sumFinal[i] = (((sum % 10) + (remanider)));
                                remanider = 1;
                            } else {
                                if(((sum) + (remanider)) < 10) {
                                    sumFinal[i] = ((sum) + (remanider));
                                    remanider = 0;
                                } else {
                                    sumFinal[i] = ((sum + remanider) % 10);
                                    remanider = 1;
                                }
                            }
                        } else {
                            sumFinal[i] = (sum + remanider);
                            remanider = 0;
                        }
                    //Ends
            }

            if(sumFinal[0] < 10) {
                for(int i=0; i<strlen(numb1); i++)
                {
                    printf("%d",sumFinal[i]);
                } printf("\n");
            } else {
                printf("%s\n",numb1);
            }

        } else {
            printf("%s\n",numb1);
        }
        
    }  
	return 0;
}


/*
int main()
{
    char numb1[] = "5053975211981119197547803035";
    char numb2[] = "22850247988388";

    if(strlen(numb1) >= strlen(numb2)) {
        printf("String1 > String2 :\n\n");
        printf("String1 length is :%ld\n",strlen(numb1));
        printf("String2 length is :%ld\n",strlen(numb2));

        int copy0Till = ((strlen(numb1)) - (strlen(numb2)));
        printf("Copy 0 till :%d\n",copy0Till);

        char temp[strlen(numb1)];

        for(int i=0; i<copy0Till; i++) // Fill zeros first
        {
            temp[i] = '0';
        }

        int pos = 0;

        for(int i=copy0Till; i<((strlen(numb1))); i++) // Fill the values next
        {
            temp[i] = numb2[pos++];
        } 

        // Fun part

        int remanider = 0;
        int set = 0;
        if((strlen(numb1)) != (strlen(numb2))) {
            set = ((strlen(numb1)) + (1));
        } else {
            set = (strlen(numb1));
        }
        int sumFinal[set];
        
        //sumFinal[(strlen(numb1))] = '\0';

        for(int i=((strlen(numb1)) - (1)); i>=0; i--)
        {
            int digit1 = (numb1[i] - '0');
            int digit2 = (temp[i] - '0');
            //printf("Digit 1 = %d\tDigit 2 =%d\n",digit1,digit2);
            int sum = ((digit1 + digit2));
                // Interior Logic 
                    if(i != 0) {
                        if(sum >= 10) {
                            sumFinal[i] = (((sum % 10) + (remanider)));
                            printf("sumFinal[%d] = %d\n",i,sumFinal[i]);
                            remanider = 1;
                        } else {
                            if(((sum) + (remanider)) < 10) {
                                sumFinal[i] = ((sum) + (remanider));
                                printf("sumFinal[%d] = %d\n",i,sumFinal[i]);
                                remanider = 0;
                            } else {
                                sumFinal[i] = ((sum + remanider) % 10);
                                printf("sum + rem > 10 so sumFinal[%d] = %d\n",i,sumFinal[i]);
                                remanider = 1;
                            }
                        }
                    } else {
                        sumFinal[i] = (sum + remanider);
                        remanider = 0;
                    }
                //Ends
        }
        
        printf("After moved string :%s with a width of %ld\n",temp,strlen(temp));

        for(int i=0; i<strlen(numb1); i++)
        {
            printf("%d ",sumFinal[i]);
        } printf("\n");

        if(sumFinal[0] < 10) {
            for(int i=0; i<strlen(numb1); i++)
            {
                printf("%d",sumFinal[i]);
            } printf("\n");
        } else {
            printf("%s\n",numb1);
        }

    } else {
        printf("%s\n",numb1);
    }

    return 0;
}
*/
