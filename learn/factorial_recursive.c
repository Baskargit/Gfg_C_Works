#include <stdio.h>

int fact(int n);

int main()
{
    int n = 5;
    unsigned long long int factorial;

    factorial = fact(n);
    printf("%llu\n",factorial);
    return 0;
}

int fact(int n)
{
    if((n != 1)) {
        return (n * fact (n - 1));
    } else {
        return 1;
    }
}