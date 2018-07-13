#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000000

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 -> Get the Input
        char Input[MAX_LENGTH];
        scanf("%s",Input);

        int odd = 0;
        int even = 0;
        int twin = 0;
        int parent = 0;
        int alien = 0;

    // Step 2 --> Create a common holder for all family
        int pos = 0;
        int revPos = 0;
        char holder[strlen(Input)];
        char reverseHolder[strlen(Input)];

    // Step 3 ---> Check the string against all family cases
        // odd ST    
            for(int i=0; i<(strlen(Input));)
            {
                holder[pos++] = Input[i];
                i = i+2;
            } holder[pos] = '\0';
            for(int i=(pos - 1); i>=0; i--)
            {
                reverseHolder[revPos++] = holder[i];
            } reverseHolder[revPos] = '\0';

            odd = (strcmp(holder,reverseHolder) == 0) ? 1 : 0;
            for(int i=0; i<pos; i++)
            {
                holder[i] = '\0';
                reverseHolder[i] = '\0';
            }
            pos = 0;
            revPos = 0;
        // odd ED

        // Even ST
            if(((strlen(Input)) > 1)) {
                for(int i=1; i<(strlen(Input));)
                {
                    holder[pos++] = Input[i];
                    i = i+2;
                } holder[pos] = '\0';
                for(int i=(pos - 1); i>=0; i--)
                {
                    reverseHolder[revPos++] = holder[i];
                } reverseHolder[revPos] = '\0';

                even = (strcmp(holder,reverseHolder) == 0) ? 1 : 0;
                for(int i=0; i<pos; i++)
                {
                    holder[i] = '\0';
                    reverseHolder[i] = '\0';
                }
                pos = 0;
                revPos = 0;
            } else {
                even = 0;
            }
        // Even ED
        // Twin St
            twin = (odd && even) ? 1 : 0;
        // Twin ED
        // Parent ST
            for(int i=((strlen(Input)) - 1); i>=0; i--)
            {
                reverseHolder[revPos++] = Input[i];
            } reverseHolder[revPos] = '\0';

            parent = (strcmp(Input,reverseHolder) == 0) ? 1 : 0;
            revPos = 0;
        // Parent ED

    // Step 4 ----> Get the Family of string

        if(odd || even || twin || parent) {
            if(parent) {
                printf("PARENT\n");
            } else if(twin) {
                printf("TWIN\n");
            } else {
                printf("%s\n",((odd) ? "ODD" : "EVEN"));
            }
        } else {
            printf("ALIEN\n");
        }

    }
    
	return 0;
}

/*
int main()
{
  // Step 1 -> Get the Input
    char Input[] = "aibohobia";

    int odd = 0;
    int even = 0;
    int twin = 0;
    int parent = 0;
    int alien = 0;

  // Step 2 --> Create a common holder for all family
    int pos = 0;
    int revPos = 0;
    char holder[strlen(Input)];
    char reverseHolder[strlen(Input)];
    printf("Length is %ld\n",strlen(Input));

  // Step 3 ---> Check the string against all family cases
    // odd ST    
        for(int i=0; i<(strlen(Input));)
        {
            holder[pos++] = Input[i];
            i = i+2;
        } holder[pos] = '\0';
        printf("Odd String :%s\n",holder);
        for(int i=(pos - 1); i>=0; i--)
        {
            reverseHolder[revPos++] = holder[i];
        } reverseHolder[revPos] = '\0';
        printf("Odd String reversed :%s\n",reverseHolder);

        odd = (strcmp(holder,reverseHolder) == 0) ? 1 : 0;
        for(int i=0; i<pos; i++)
        {
            holder[i] = '\0';
            reverseHolder[i] = '\0';
        }
        pos = 0;
        revPos = 0;
        printf("Odd Flag is :%d\n",odd);
    // odd ED

    // Even ST
        if(((strlen(Input)) > 1)) {
            for(int i=1; i<(strlen(Input));)
            {
                holder[pos++] = Input[i];
                i = i+2;
            } holder[pos] = '\0';
            printf("Even String :%s\n",holder);
            for(int i=(pos - 1); i>=0; i--)
            {
                reverseHolder[revPos++] = holder[i];
            } reverseHolder[revPos] = '\0';
            printf("Even String reversed :%s\n",reverseHolder);

            even = (strcmp(holder,reverseHolder) == 0) ? 1 : 0;
            for(int i=0; i<pos; i++)
            {
                holder[i] = '\0';
                reverseHolder[i] = '\0';
            }
            pos = 0;
            revPos = 0;
            printf("Even Flag is :%d\n",even);
        } else {
            even = 0;
        }
    // Even ED
    // Twin St
        twin = (odd && even) ? 1 : 0;
        printf("Twin Flag is :%d\n",twin);
    // Twin ED
    // Parent ST
        for(int i=((strlen(Input)) - 1); i>=0; i--)
        {
            reverseHolder[revPos++] = Input[i];
        } reverseHolder[revPos] = '\0';
        printf("Parent String reversed :%s\n",reverseHolder);

        parent = (strcmp(Input,reverseHolder) == 0) ? 1 : 0;
        revPos = 0;
        printf("Parent Flag is :%d\n",parent);
    // Parent ED

  // Step 4 ----> Get the Family of string

    if(odd || even || twin || parent) {
        if(parent) {
            printf("PARENT\n");
        } else if(twin) {
            printf("TWIN\n");
        } else {
            printf("%s\n",((odd) ? "ODD" : "EVEN"));
        }
    } else {
        printf("ALIEN\n");
    }


    return 0;
}
*/