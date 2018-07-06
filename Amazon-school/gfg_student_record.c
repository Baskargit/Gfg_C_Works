#include <stdio.h>
#include <string.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int size,sub1,sub2,sub3,pos = 0,minavg = 0;
        scanf("%d",&size);
        int avg[size];
        char name[10000],nameInd[size][100];

    // Step 1 -> Get the Input

        for(int i=0; i<size; i++)
        {
            scanf("%s %d %d %d",name,&sub1,&sub2,&sub3);
            printf("%s %d %d %d\n",name,sub1,sub2,sub3);
            int avgtemp = ((sub1 + sub2 + sub3)/3);

            if(avgtemp > minavg) {
                printf("i = %d ---> if part --> %d > %d with pos = %d\n",i,avgtemp,minavg,pos);
                if(pos > 0 && (avgtemp > avg[pos])) {
                    pos = 0;
                    minavg = avgtemp;
                    avg[pos] = avgtemp;
                    strcpy(nameInd[pos],name);
                } else {
                    minavg = avgtemp;
                    avg[pos] = avgtemp;
                    strcpy(nameInd[pos],name);
                }
            } else if(avgtemp == minavg) {
                pos++;
                printf("i = %d ---> else if part --> %d ===== %d with pos = %d\n",i,avgtemp,minavg,pos);
                minavg = avgtemp;
                avg[pos] = avgtemp;
                strcpy(nameInd[pos],name);
            }
            
        }

        printf("Position value is :%d\n",pos);

    // Step 2 --> Based on Position print the result 

        if(pos != 0) {
            for(int i=0; i<=pos; i++)
            {
                printf("%s ",nameInd[i]);
            }
            printf("%d\n",avg[0]);
        } else {
            for(int i=0; i<=pos; i++)
            {
                printf("%s %d\n",nameInd[i],avg[i]);
            }
        }

    }
    
	return 0;
}

/*
int main()
{
    int size,sub1,sub2,sub3,pos = 0,minavg = 0,avg[size];
    scanf("%d",&size);
    char name[1000],nameInd[size][16];

  // Step 1 -> Get the Input

    for(int i=0; i<size; i++)
    {
        scanf("%s %d %d %d",name,&sub1,&sub2,&sub3);
        if(i==0) {
            minavg = ((sub1 + sub2 + sub3)/3);
            avg[i] = ((sub1 + sub2 + sub3)/3);
            strcpy(nameInd[i],name);
        } else {
            if(((sub1 + sub2 + sub3)/3) >= minavg) {
                minavg = ((sub1 + sub2 + sub3)/3);
                avg[pos] = ((sub1 + sub2 + sub3)/3);
                strcpy(nameInd[pos],name);
                pos++;
            }
        }
    }

  // Step 2 --> Based on Position print the result 

    if(pos != 0) {
        for(int i=0; i<pos; i++)
        {
            printf("%s %d ",nameInd[i],avg[i]);
        }
        printf("\n");
    } else {
        for(int i=0; i<=pos; i++)
        {
            printf("%s %d\n",nameInd[i],avg[i]);
        }
    }

    return 0;
}
*/