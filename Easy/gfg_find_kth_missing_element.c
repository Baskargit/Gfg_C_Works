#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        int seqOneSize,seqTwoSize,k;
        scanf("%d %d %d",&seqOneSize,&seqTwoSize,&k);
        int seqOne[seqOneSize],seqTwo[seqTwoSize];
        for(int i=0; i<seqOneSize; i++)
        {
            scanf("%d",&seqOne[i]);
        } printf("\n");
        for(int i=0; i<seqTwoSize; i++)
        {
            scanf("%d",&seqTwo[i]);
        }

        int counter = 0;
        int flag = 0;
        int noMatches = 0;
        int index;

        for(int i=0; i<seqTwoSize; i++)
        {
            for(int j=0; j<seqOneSize; j++)
            {
                if(seqTwo[i] == seqOne[j]) {
                    seqOne[j] = -1;
                }
            }
        }
        
        for(int i=0; i<seqOneSize;)
        {
            if(seqOne[i] >= 0) {
                ++counter;
                if(counter == k) {
                    flag = 1;
                    index = i;
                    break;
                } else {
                    i++;
                }
            } else {
                i++;
                flag = 0;
            }
            //(seqOne[i] != -1) ? (++counter,((counter == k) ? flag=1,index=i,i=seqOneSize : i++)) : i++;
        }

        printf("Print final seqone array:\n");
        for(int i=0; i<seqOneSize; i++)
        {
            printf("%d ",seqOne[i]);
        }  printf("\n");

         (flag) ? printf("%d\n",seqOne[index]) : printf("-1\n");   
    }
    
	return 0;
}

/*

Input:
1
42 68 11
6500 6505 6510 6515 6520 6525 6530 6535 6540 6545 6550 6555 6560 6565 6570 6575 6580 6585 6590 6595 6600 6605 6610 6615 6620 6625 6630 6635 6640 6645 6650 6655 6660 6665 6670 6675 6680 6685 6690 6695 6700 6705
9170 5725 1479 9359 6963 4465 5706 8146 3282 6828 9962 492 2996 1943 4828 5437 2392 4605 3903 154 293 2383 7422 8717 9719 9896 5448 1727 4772 1539 1870 9913 5668 6300 7036 9895 8704 3812 1323 334 7674 4665 5142 7712 8254 6869 5548 7645 2663 2758 38 2860 8724 9742 7530 779 2317 3036 2191 1843 289 107 9041 8943 9265 2649 7447 3806

Its Correct output is:
6550

And Your Code's output is:
-1

*/