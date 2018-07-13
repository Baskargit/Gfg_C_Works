#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 10000
/*
int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the Input

        char Input[MAX_LENGTH];
        scanf("%s",Input);

        int op = 0;
        int cl = 0;

    // Step 2 --> Get the count

        for(int i=0; Input[i] != '\0'; i++)
        {
            if(Input[i] == '(') {
                ++op;
            } else {
                ++cl;
            }
        }

    // Step 3 ---> Print the result
        if(op == cl) {
            printf("%d\n",(op * 2));
        } else if (op < cl) {
            printf("%d\n",(op * 2));
        } else {
            printf("%d\n",(cl * 2));
        }

        op = 0;
        cl = 0;
    }
    
	return 0;
}
*/

int main()
{
    char Input[MAX_LENGTH];
    scanf("%s",Input);

    int op = 0;
    int cl = 0;

    for(int i=0; Input[i] != '\0'; i++)
    {
        if(Input[i] == '(') {
            ++op;
        } else {
            ++cl;
        }
    }

    printf("%d %d\n",op,cl);

    if(op == cl) {
        printf("%d\n",(op * 2));
    } else if (op < cl) {
        printf("%d\n",(op * 2));
    } else {
        printf("%d\n",(cl * 2));
    }


    return 0;
}
