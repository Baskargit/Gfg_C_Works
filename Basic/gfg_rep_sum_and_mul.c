#include <stdio.h>

int main()
{
    unsigned long long int number = 846930887;
    int num1;
    int num2;
    int sum = 0;
    int mul;

    while(number > 0)
    {
        sum += (number%10);
        number /= 10;
        // printf("num=%lld\n",number);
    }

    // while(sum < 10)
    // {
    //     num1 = (number%10);
    //     num2 = ((number/10)%10);
    //     sum = num1 + num2;
    //     mul = num1 * num2;
    //     number /= 10;
    // }

    printf("sum=%d,num1=%d,num2=%d,mul=%d\n",sum,num1,num2,mul);
}


/*
Link : https://practice.geeksforgeeks.org/problems/repated-sum-and-then-multiply/0
*/