#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 ----> Get the Input
        int size;
        scanf("%d",&size);
        int input[size];
        for(int i=0; i<size; i++)
        {
            scanf("%d",&input[i]);
        }
        int key;
        scanf("%d",&key);

    // Step 2 ----> check whether the key is present or not

        int keyStatus = 0;

        for(int i=0; i<size;)
        {
            if(input[i] == key) {
                keyStatus = 1;
                break;
            } else {
                i++;
            }
        }

        if(keyStatus) 
        {
        // Step 3 ----> check whether the key is repeated or not

            int repeatedCount = -1;

            for(int i=0; i<size;) // Get the repeated count
            {
                if(input[i] == key) {
                    repeatedCount++;
                    i++;
                } else {
                    i++;
                }
            }

        // Step 4 ----> Store the index of the key in a separate array

            int startIndex;
            int endIndex;

            int statusBit = 1;

            if(repeatedCount >= 1) {
                for(int i=0; i<size; i++)
                {
                    if(input[i] == key && statusBit == 1) {
                        startIndex = i;
                        statusBit = 0;
                    } else {
                        if(input[i] == key) {
                            endIndex = i;
                        }
                    }
                }
            } else {
                for(int i=0; i<size; i++)
                {
                    if(input[i] == key) {startIndex = i;endIndex = i;break;}
                }
            }
        
        // Step 5 ----> Print the output

            printf("%d %d\n",startIndex,endIndex);

        } else {
            printf("-1\n");
        }


    }
    
	return 0;
}

/*
int main()
{
  // Step 1 ----> Get the Input
    int size = 6;
    int input[] = {6 ,5 ,4 ,3 ,1 ,2};
    int key = 14;

  // Step 2 ----> check whether the key is present or not

    int keyStatus = 0;

    for(int i=0; i<size;)
    {
        if(input[i] == key) {
            keyStatus = 1;
            break;
        } else {
            i++;
        }
    }

    if(keyStatus) 
    {
      // Step 3 ----> check whether the key is repeated or not

        int repeatedCount = -1;

        for(int i=0; i<size;) // Get the repeated count
        {
            if(input[i] == key) {
                repeatedCount++;
                i++;
            } else {
                i++;
            }
        }

      // Step 4 ----> Store the index of the key in a separate array

        int startIndex;
        int endIndex;

        int statusBit = 1;

        if(repeatedCount >= 1) {
            for(int i=0; i<size; i++)
            {
                if(input[i] == key && statusBit == 1) {
                    startIndex = i;
                    statusBit = 0;
                } else {
                    if(input[i] == key) {
                        endIndex = i;
                    }
                }
            }
        } else {
            for(int i=0; i<size; i++)
            {
                if(input[i] == key) {startIndex = i;endIndex = i;break;}
            }
        }
      
      // Step 5 ----> Print the output

        printf("%d %d\n",startIndex,endIndex);

    } else {
        printf("-1\n");
    }

    return 0;
}
*/