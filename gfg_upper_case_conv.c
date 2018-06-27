#include<stdio.h>
# define max_length 10000

int main()
{
	int testCaseCount;
    int orginalLength = 0;
    char tes[max_length],c;
    scanf("%d",&testCaseCount);

    for(int count=1; count<=testCaseCount; count++)
    {
        c = getchar();
        //printf("The Value is %d\n",c);
        //fgets(tes,max_length,stdin);
        scanf("%[^\n]s",tes);

        for(int i=0; tes[i] != '\0'; orginalLength++,i++);

        for(int i=0; i<orginalLength; i++)
        {
           if(tes[i] == 32) {
               if(tes[i+1] >= 97 && tes[i+1] <= 122) {
                   tes[i+1] = ((tes[i+1] - 97) + 65);
               } 
           } else {
               if(i == 0 && (tes[i] >= 97 && tes[i] <= 122)) {
                   tes[i] = ((tes[i] - 97) + 65);
               }
           }
        }
        orginalLength = 0;
        printf("%s",tes);   
    }
    return 0;
}
    
    
    
