#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int n[3];
        scanf("%d %d %d",&n[0],&n[1],&n[2]);

        for(int i=0; i<3; i++)
        {
            for(int j=i; j<3; j++)
            {
                if(n[j] < n[i]) {
                    int temp = n[i];
                    n[i] = n[j];
                    n[j] = temp;
                }
            }
        }

        printf("%d\n",n[1]);
    }
	return 0;
}

/*
int main()
{
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1 < n3) {
        printf("%d\n",((n2<n3) ? n2 : (n2>n3) ? n2 : n3));
    } else {
        printf("%d\n",((n1<n3) ? n1 : (n2>n3) ? n2 : n3));
    }
    return 0;
}
*/