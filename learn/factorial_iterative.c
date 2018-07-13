#include <stdio.h>

int main()
{
    int n = 65;

    unsigned long long int factorial = 1;
    for(int i=n; i>0; i--)
    {
        factorial = factorial * i;
    }

    printf("Factorial is %llu\n",factorial);
}