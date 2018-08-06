#include <stdio.h>

int main()
{
    int n=15;

    signed long long int pre = 0;
    signed long long int nxt = 1;
    signed long long int res;

    printf("%lld %lld",pre,nxt);

    for(int i=2; i<n; i++)
    {
        res = ((pre*pre) - (nxt));
        pre = nxt;
        nxt = res;
        printf(" %lld",nxt);
    }

    printf("\n");

    return 0;
}
