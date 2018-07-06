#include <stdio.h>

int main()
{
    // char c = 'a';

    // while(c != '\n') {
    //     c = getchar();
    //     putchar(c);
    // }

    char a[20];
    scanf("%s",a);
    while(getchar() !='\n');
    char q = getchar();
    while(getchar() !='\n');
    char w = getchar();

    printf("%s\n",a);
    printf("%c\n",q);
    printf("%d\n",w);

    return 0;
}