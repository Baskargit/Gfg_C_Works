
/*
int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount); 
    
    for(int testCaseNo=0; testCaseNo<testCaseCount; testCaseNo++)
    {
        char input[1000000];
        char output[1000000];
        scanf("%s",input);

        printf("%ld\n",sizeof(input));
        printf("%s\n",input);
    }
    
	return 0;
}
*/

/*
int main()
{
    int orginalLength = 0;
    char input[1000000] = "1234";// 13574(Ans) 
    for(int i=0; input[i] != '\0'; orginalLength++,i++);

    printf("%d\n",orginalLength);
    printf("%s\n",input);

    return 0;
}
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    
    scanf("%d", &t);
    
    while (t--) {
        int i, j, numerator, denominator, n;
        char s1[1000000], s2[1000000];
        
        scanf("%s", s1);
        
        n = strlen(s1);
        numerator = 0;
        s2[n] = '\0';
        
        for (i=n-1; i>=0; i--) {
            j = s1[i] - 48;
            j = j * 11 + numerator;
            numerator = j / 10;
            denominator = j % 10;
            s2[i] = denominator + 48;
            printf("j-->%d\tnumerator-->%d\tdenominator-->%d\t\n",j,numerator,denominator);
        }
        
        printf("%d%s\n", numerator, s2);
    }
    
    return 0;
}