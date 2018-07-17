#include <stdio.h>

int main()
{
    int a = 10;
    int *p;
    printf("%p\n",p);
    p = &a;
    printf("%p\n",p);
    printf("%d\n",*p);
    printf("%d\n",(*(&a)));
    p = NULL;
    printf("%p\n",p);
    p = &a;
    *p = 20;
    printf("%d\n",a);


    return 0;
}