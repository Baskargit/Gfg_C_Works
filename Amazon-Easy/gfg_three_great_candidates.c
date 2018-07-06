#include<stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1 ---> Get the Input
        int size;
        scanf("%d",&size);
        int Input[size];
        for(int i=0; i<size; i++)
        {
            scanf("%d",&Input[i]);
        }

    // Step 2 ---> Sort the Input in desc order

        int positiveCount = 0;
        int negativeCount = 0;

        for(int i=0; i<size; i++) // Count the +ve and -ve
        {
            if(Input[i] >= 0) {
                positiveCount++;
            } else {
                negativeCount++;
            }
        }

        for(int i=0 ;i<size; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                if(Input[j] > Input[i] ) {
                    int temp = Input[j];
                    Input[j] = Input[i];
                    Input[i] = temp;
                }
            }
        }

    // Step 3 ---> Print the result

        if(positiveCount > 0 && negativeCount <= 1) {
            printf("%d\n",(Input[0] * Input[1] * Input[2]));
        } else if(positiveCount > 0 && negativeCount >= 2) {
            if(((Input[size-1] * Input[size-2])*Input[0]) > (Input[0] * Input[1] * Input[2])) {
                printf("%d\n", ((Input[size-1] * Input[size-2])*Input[0]));
            } else {
                printf("%d\n", ((Input[0] * Input[1] * Input[2])));
            }
        } else {
             printf("%d\n",(Input[0] * Input[1] * Input[2]));
        }

    }
    
	return 0;
}
/*
int main()
{
  // Step 1 ---> Get the Input
    int size = 86;
    int Input[] = {0 ,-1 ,3 ,100 ,70 ,50};
    //int Input[] = {386,277,415,293,-165,-114,-8,149,-79,-138,-473,190,-441,263,426,40,-74,-328,236,-289,-132,67,-71,282,30,362,-377,-433,-365,429,302,-478,-442,-431,-333,-107,-44,-489,-458,-271,-127,-79,419,284,37,-302,-176,-185,-130,-87,26,-409,480,456,373,362,-330,496,-219,-195,425,-416,-173,-164,5,346,229,-187,357,-376,395,82,45,314,-133,-66,-136,-457,250,-413,308,-224,-322,288,84,-97};

  // Step 2 ---> Sort the Input in desc order

    for(int i=0 ;i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(Input[j] > Input[i] ) {
                int temp = Input[j];
                Input[j] = Input[i];
                Input[i] = temp;
            }
        }
    }

    for(int i=0; i<size; i++)
    {
        printf("%d\n",Input[i]);
    }

  // Step 3 ---> Print the result

    printf("%d\n",(Input[0] * Input[1] * Input[2]));

    return 0;
}
*/

/*
int main()
{
  // Step 1 ---> Get the Input
    int size = 53;
    //int Input[] = {0 ,-1 ,3 ,100 ,70 ,50};
    //int Input[] = {386,277,415,293,-165,-114,-8,149,-79,-138,-473,190,-441,263,426,40,-74,-328,236,-289,-132,67,-71,282,30,362,-377,-433,-365,429,302,-478,-442,-431,-333,-107,-44,-489,-458,-271,-127,-79,419,284,37,-302,-176,-185,-130,-87,26,-409,480,456,373,362,-330,496,-219,-195,425,-416,-173,-164,5,346,229,-187,357,-376,395,82,45,314,-133,-66,-136,-457,250,-413,308,-224,-322,288,84,-97};
    // 86 --> 115936032
    int Input[] = {-245,360,-358,79,384,493,-295,121,67,4,113,461,254,-174,-241,444,-298,-298,6,284,-479,342,368,28,-311,372,408,458,-2,-464,308,253,-252,-197,-167,-367,148,390,254,67,246,-132,29,0,-454,288,297,-251,490,-197,-467,-137,-3};
    // 53 --> 111363770

  // Step 2 ---> Store the Multiplied result

    int positiveCount = 0;
    int negativeCount = 0;

    for(int i=0; i<size; i++) // Count the +ve and -ve
    {
        if(Input[i] >= 0) {
            positiveCount++;
        } else {
            negativeCount++;
        }
    }

    printf("Positive Count %d:\n",positiveCount);
    printf("Negative Count %d:\n",negativeCount);

    for(int i=0 ;i<size; i++) // Sort the Input in desc order
    {
        for(int j=i+1; j<size; j++)
        {
            if(Input[j] > Input[i] ) {
                int temp = Input[j];
                Input[j] = Input[i];
                Input[i] = temp;
            }
        }
    }

    if(positiveCount > 0 && negativeCount <= 1) {
        printf("%d\n",(Input[0] * Input[1] * Input[2]));
    } else if(positiveCount > 0 && negativeCount >= 2) {
        if(((Input[size-1] * Input[size-2])*Input[0]) > (Input[0] * Input[1] * Input[2])) {
            printf("%d\n", ((Input[size-1] * Input[size-2])*Input[0]));
        } else {
            printf("%d\n", ((Input[0] * Input[1] * Input[2]));
        }
    } else {

    }

    printf("\n");

    for(int i=0; i<size; i++)
    {
        printf("%d ",Input[i]);
    }

    printf("\n");

    printf("%d %d\n",(Input[size-1]),(Input[size-2]));

    
  // Step 3 ---> Print the result

    //printf("%d\n",(Input[0] * Input[1] * Input[2]));

    return 0;
}
*/


