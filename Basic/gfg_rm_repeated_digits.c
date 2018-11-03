#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 18

/*
struct stack {
    char data;
    struct stack *next;
};

void push(struct stack **head , char number[] , long int length);

void push(struct stack **head , char number[] , long int length) 
{
    struct stack *nodes[length];
    for(int i=0; i<length; i++)
    {
        nodes[i] = (struct stack *)malloc(sizeof(struct stack));
        printf("%p\n",nodes[i]);
    }
    *head = nodes[0];
    nodes[0]->data = number[0];
    nodes[0]->next = NULL;
    printf("nodes[0]->data = %c\n",nodes[0]->data);

    int pos = 1;
    int cou = 0;
    if(length >= 2) {
        nodes[0]->next = nodes[1];
        printf("Length Greater than 2\n");

        for(int i=1; number[i] != '\0'; i++) 
        {
            if((char)number[i] != (char)nodes[cou]->data ) {
                nodes[pos]->data = number[i];
                nodes[pos]->next = nodes[++pos];
                cou++;
                printf("%c != %c\n",number[i],nodes[pos-1]->data );
            }
        }
        nodes[pos]->next = NULL;
    }
}

int main()
{
    char number[] = "122";
    int length = 0;
    struct stack *head;
    head = NULL;

    // Step 1 : Find the length of the string
    for(int i=0; number[i] != '\0'; i++)
    {
        length++;
    }
    printf("Length : %d\n",length);

    // Step 2 : Eliminate the repeated digits
    
    push(&head , number ,strlen(number));
    
    // Step 3: Print the Result
    printf("Head = %p\n",head);

    while (head != NULL)
    {   
        printf("%c",head->data);
    } printf("\n");
    
    return 0;
}
*/

/*
int main()
{
    char number[] = "1212";
    long int length = strlen(number);

    for(int i=0; i<length;)
    {
        for(int j=i+1;;)
        {
            if(number[j] != number[i]) {
                i++;
                break;
            } else {
                printf("%c==%c\n",number[j],number[i]);
                number[j] = '\0';
                j++;
            }
        }
    }

    for(int i=0; i<length; i++)
    {
        if(number[i] != '\0') {
            printf("%c",number[i]);
        }
    } printf("\n");

    return 0;
}
*/

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 : Get the Input
        char number[MAX_LENGTH];
        scanf("%s",number);
        long int length = strlen(number);
    
    // Step 2 : Remove Countinuously Repeated
        for(int i=0; i<length;)
        {
            for(int j=i+1;;)
            {
                if(number[j] != number[i]) {
                    i++;
                    break;
                } else {
                    number[j] = '\0';
                    j++;
                }
            }
        }

    // Step 3 : Print the Result
        for(int i=0; i<length; i++)
        {
            if(number[i] != '\0') {
                printf("%c",number[i]);
            }
        } printf("\n");
    }
	return 0;
}

/*Status : Completed*/
