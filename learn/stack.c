#include <stdio.h>

int isEmpty();
int isFull();
void push(int data);
int pop();

int stackSize  = 5;
int stack[5];
int position = -1;

int isEmpty()
{
    return (position == -1) ? 1 : 0;
}

int isFull()
{
    return (position == stackSize) ? 1 : 0;
}

void push(int data)
{
    if(!(isFull())) {
        stack[++position] = data;
        printf("Data Inserted data is %d at position :%d\n",data,position);
    } else {
        printf("Stack is Full\n");
    }
}

int pop()
{
    if(!(isEmpty())) {
        return (stack[position--]);
    } else {
        printf("No more Items to popout\n");
        return 0;
    }
}

int main()
{
    push(10);
    push(12122);
    printf("%d\n",pop());
    push(1234);
    printf("%d\n",pop());
    printf("%d\n",pop());
    printf("%d\n",pop());
    return 0;
}