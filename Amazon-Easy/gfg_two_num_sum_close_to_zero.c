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

    // Step 2 ----> Insert the sum value into array

        int holdingSize = ((size*(size - 1))/2);
        int variablePosition = 0;

        int variableOneHolder[holdingSize];
        int variableTwoHolder[holdingSize];
        int sumHolder[holdingSize];

        for(int i=0; i<size; i++)  // Put values into respective array
        {
            for(int j=(i+1); j<size; j++)
            {
                variableOneHolder[variablePosition] = input[i];
                variableTwoHolder[variablePosition] = input[j];
                sumHolder[variablePosition] = (input[i] + input[j]);
                variablePosition++;
            }
        }

    //Step 3 ----> Find the negative greatest and positive least

        int negativeFlag = 0;
        int negativeGreatest = -100007;
        int negativeGreatestPosition;

        int positiveFlag = 0;
        int positiveLeast = 100007;
        int positiveLeastPosition;

        for(int i=0; i<holdingSize; i++) 
        {
            if(sumHolder[i] < 0 && sumHolder[i] >= negativeGreatest)
            {
                negativeFlag = 1;
                negativeGreatest = sumHolder[i];
                negativeGreatestPosition = i;
            } else if(sumHolder[i] >=0 && sumHolder[i] <= positiveLeast)
            {
                positiveFlag = 1;
                positiveLeast = sumHolder[i];
                positiveLeastPosition = i;
            }
        }

    // Step 4 ----> Find the first occurrence of two elements and their sum is closest to zero.

        int finalPosition;
        int value1,value2;
        int least = -100007;
        int greatest = 100007;

        if(positiveFlag && negativeFlag) 
        {
            int posCou = 0;
            int negCou = 0;

            for(int i=0; i<positiveLeast; posCou++,i++);
            for(int i=0; i>negativeGreatest; negCou++,i--);

            if(posCou < negCou) {
                int repeatedCount = 0;
                for(int i=0; i<holdingSize; i++) // Get repeated the positive value count
                {
                    if(positiveLeast == sumHolder[i]) {
                        repeatedCount++;
                    }
                }

                int pos = 0;
                int repeatedValues[repeatedCount];
                int repeatedValuesPosition[repeatedCount];
                for(int i=0; i<holdingSize; i++)
                {
                    if(positiveLeast == sumHolder[i]) {
                        if(variableOneHolder[i] < 0) {
                            repeatedValues[pos] = variableOneHolder[i];
                            repeatedValuesPosition[pos] = i;
                        } else {
                            repeatedValues[pos] = variableTwoHolder[i];
                            repeatedValuesPosition[pos] = i;
                        }
                        pos++;
                    }
                }

                for(int i=0; i<repeatedCount; i++)
                {
                    for(int j=i+1; j<repeatedCount; j++)
                    {
                        if(repeatedValues[j] < repeatedValues[i]) {
                            int temp = repeatedValues[j];
                            repeatedValues[j] = repeatedValues[i];
                            repeatedValues[i] = temp;

                            int tempPos = repeatedValuesPosition[j];
                            repeatedValuesPosition[j] = repeatedValuesPosition[i];
                            repeatedValuesPosition[i] = tempPos;
                        }
                    }
                }

                value1 = variableOneHolder[(repeatedValuesPosition[0])];
                value2 = variableTwoHolder[(repeatedValuesPosition[0])];

            } else if(posCou == negCou) {

            int repeatedCount = 0;
            for(int i=0; i<holdingSize; i++) // Get repeated the positive value count
            {
                if(positiveLeast == sumHolder[i] || negativeGreatest == sumHolder[i]) {
                    repeatedCount++;
                }
            }
            
            int pos = 0;
            int repeatedValues[repeatedCount];
            int repeatedValuesPosition[repeatedCount];
            for(int i=0; i<holdingSize; i++)
            {
                if(positiveLeast == sumHolder[i] || negativeGreatest == sumHolder[i]) {
                    if(variableOneHolder[i] < 0) {
                        repeatedValues[pos] = variableOneHolder[i];
                        repeatedValuesPosition[pos] = i;
                    } else {
                        repeatedValues[pos] = variableTwoHolder[i];
                        repeatedValuesPosition[pos] = i;
                    }
                    pos++;
                }
            }

            for(int i=0; i<repeatedCount; i++)
            {
                for(int j=i+1; j<repeatedCount; j++)
                {
                    if(repeatedValues[j] < repeatedValues[i]) {
                        int temp = repeatedValues[j];
                        repeatedValues[j] = repeatedValues[i];
                        repeatedValues[i] = temp;

                        int tempPos = repeatedValuesPosition[j];
                        repeatedValuesPosition[j] = repeatedValuesPosition[i];
                        repeatedValuesPosition[i] = tempPos;
                    }
                }
            }

            value1 = variableOneHolder[(repeatedValuesPosition[0])];
            value2 = variableTwoHolder[(repeatedValuesPosition[0])];

        } else {
            int repeatedCount = 0;
            for(int i=0; i<holdingSize; i++) // Get repeated the negative value count when (neg > pos)
            {
                if(negativeGreatest == sumHolder[i]) {
                    negativeGreatest = sumHolder[i];
                    value1 = variableOneHolder[i];
                    value2 = variableTwoHolder[i];
                    finalPosition = i;
                    repeatedCount++;
                }
            }

            int pos = 0;
            int repeatedValues[repeatedCount];
            int repeatedValuesPosition[repeatedCount];

            for(int i=0; i<holdingSize; i++)
            {
                if(negativeGreatest == sumHolder[i]) {
                    if(variableOneHolder[i] < 0) {
                        repeatedValues[pos] = variableOneHolder[i];
                        repeatedValuesPosition[pos] = i;
                    } else {
                        repeatedValues[pos] = variableTwoHolder[i];
                        repeatedValuesPosition[pos] = i;
                    }
                    pos++;
                }
            }

            for(int i=0; i<repeatedCount; i++) // neg > pos sorting
            {
                for(int j=i+1; j<repeatedCount; j++)
                {
                    if(repeatedValues[j] < repeatedValues[i]) {
                        int temp = repeatedValues[j];
                        repeatedValues[j] = repeatedValues[i];
                        repeatedValues[i] = temp;

                        int tempPos = repeatedValuesPosition[j];
                        repeatedValuesPosition[j] = repeatedValuesPosition[i];
                        repeatedValuesPosition[i] = tempPos;
                    }
                }
            }

            value1 = variableOneHolder[(repeatedValuesPosition[0])];
            value2 = variableTwoHolder[(repeatedValuesPosition[0])];

        }

        } else {
            value1 = variableOneHolder[negativeGreatestPosition];
            value2 = variableTwoHolder[negativeGreatestPosition];
        }

    // Step 5 ----> Print the final result

        if(value1 < value2) {
            printf("%d %d\n",value1,value2);
        } else {
            printf("%d %d\n",value2,value1);
        }
   
    }

    return 0;
}

/*
int main()
{
  // Step 1 ----> Get the Input

    int size = 480;
    //int input[] = {-8 ,-66 ,-60}; // only negative
    //int input[] = {-24 , -73}; // only negative
    //int input[] = {-21 ,-67 ,-37 ,-18 ,4 ,-65,5,6,9,8,10,14}; // Both positive and Negative
    int input[] = {78546,-1303,41190,39913,7125,39396,68012,76829,71946,41107,12507,19525,54939,85528,5556,2285,-3589,63972,80571,-6539,59293,77837,60089,38962,68485,-1073,43443,56817,69705,48859,79712,58247,81278,54619,31877,-1602,4011,33606,85227,9674,84713,31451,39199,73369,50697,78478,85654,80830,52445,-62,84291,45456,87775,54376,-5587,89977,87025,47856,80511,66725,6710,70219,34967,21706,58555,561,30104,-3717,44167,49049,39680,62597,-9505,88879,45962,74914,1069,65333,65740,87237,-1012,60026,42688,-3242,48119,70823,-3269,45139,28674,87242,21860,69106,-8827,-9456,807,83451,1106,64634,89734,78995,47400,39409,51588,71617,62006,31267,56527,-3208,30317,32262,17746,39306,26005,-5849,69786,84125,74974,234,39259,37365,21194,-5164,16467,22367,-4619,50996,39535,30209,49347,62987,42921,6742,36113,28226,88360,31836,69493,78604,38629,33528,20861,-9908,82834,80588,-5756,62615,74708,79218,72850,47685,26579,27761,76243,76768,83850,5341,61481,33381,45550,20824,6363,22189,61288,52476,60415,59643,18030,39904,71964,66659,7149,26542,66751,-22,17126,-5288,-3690,1829,83931,2877,83236,44227,40638,69475,54712,34484,84816,26188,77865,64084,57012,17945,-3732,52018,4138,66683,21656,32168,40304,3616,32544,57453,40158,33013,-8852,-8999,37725,-2541,26553,55373,34058,19784,33317,84697,22976,-1976,52898,41510,34213,64480,15589,24942,-7580,45579,86960,30280,45979,42334,-3834,-3721,79672,62432,87454,53547,29162,12320,54549,76888,43501,-8903,65978,87559,44603,9291,5968,77580,41037,68866,29085,85250,43341,78396,43910,69483,33970,40865,33481,89949,16916,39647,19945,6583,35796,41117,-6152,74959,63437,58397,85564,40655,83216,61537,38209,37814,4545,54178,49111,55583,56761,88196,74550,10098,304,28455,13298,44274,79321,56779,67941,29954,30143,21603,46538,75940,72720,50386,84616,69874,42500,80175,20524,35711,51707,-7549,7242,89975,80351,66354,55553,47107,88267,40098,-9078,22289,78554,14221,280,-8413,4717,78221,31541,68583,33542,11796,78240,39979,-4101,72851,19849,48399,63021,74095,17827,48445,263,58792,48415,-9391,58863,37685,71439,80847,87784,72361,13131,50,20299,23412,1637,35017,35350,66900,13595,78892,12414,1830,28867,18313,8398,82438,430,81419,-9755,51979,63581,509,20766,21992,24840,89629,-6606,6274,4189,-8827,88636,27320,24945,18930,60732,60304,87669,6078,37200,34981,18687,59614,70533,81276,11644,88931,73709,22074,4062,-2328,7771,77644,8181,38537,33353,66743,61884,36747,83018,76073,61643,5366,13388,-3417,58018,7838,66888,55683,47638,37805,659,42,31136,81193,-8686,52780,3836,75023,8572,17899,82695,26343,5538,24593,-1403,72613,1332,70481,19355,18067,80271,14715,33433,27377,21299,1446,45215,21904,-9154,26570,69709,25228,36612,10840,40138,37926,-2663,53974,46667,15909,81873,63079,52252,21128,-2332,60850,3736,32722,65048,56814,84511,55315,81529,27939,-7313,36545,63107,71624,68449,63954,8189,71875,22899,78523,-7290,73037};

  // Step 2 ----> Get the positive and negative counts

    int positiveCount = 0;
    int negativeCount = 0;

    for(int i=0; i<size; i++)
    {
        if(input[i] < 0) {
            negativeCount++;
        } else {
            positiveCount++;
        }
    }

    printf("PositiveCount is :%d\n",positiveCount);
    printf("NegativeCount is :%d\n",negativeCount);

  // Step 3 ----> Based on the Positive and Negative count program flow chabges

    if(positiveCount > 0 && negativeCount > 0) 
    {
        int positiveValues[(positiveCount - 1)];
        int negativeValues[(negativeCount - 1)];
        int positivePosition = -1;
        int negativePosition = -1;

        for(int i=0; i<size; i++) // Insert positive and negative values into an separate array
        {
            if(input[i] < 0) {
                ++negativePosition;
                negativeValues[negativePosition] = input[i];
            } else {
                ++positivePosition;
                positiveValues[positivePosition] = input[i];
            }
        }

        printf("Negative value Array :\n");

        for(int i=0; i<negativeCount; i++)
        {
            printf("%d ",negativeValues[i]);
        } 

        printf("\nPositive value Array :\n");

        for(int i=0; i<positiveCount; i++)
        {
            printf("%d ",positiveValues[i]);
        } 

        printf("\n\nAfter Sorting\n");

        for(int i=0; i<positiveCount; i++) // Sort the positive value array in desc order
        {
            for(int j=i+1; j<positiveCount;)
            {
                if(positiveValues[j] < positiveValues[i]) {
                    int temp = positiveValues[j];
                    positiveValues[j] = positiveValues[i];
                    positiveValues[i] = temp;
                    j++;
                } else {
                    j++;
                }
            }
        }

        for(int i=0; i<negativeCount; i++) // Sort the Negative value array in desc order
        {
            for(int j=i+1; j<negativeCount;)
            {
                if(negativeValues[j] < negativeValues[i]) {
                    int temp = negativeValues[j];
                    negativeValues[j] = negativeValues[i];
                    negativeValues[i] = temp;
                    j++;
                } else {
                    j++;
                }
            }
        }

        printf("\nNegative value Array Sorted:\n");

        for(int i=0; i<negativeCount; i++)
        {
            printf("%d ",negativeValues[i]);
        } 

        printf("\nPositive value Array Sorted:\n");

        for(int i=0; i<positiveCount; i++)
        {
            printf("%d ",positiveValues[i]);
        }

        printf("\n\n Manipulated Data:\n");

        if(positiveCount > negativeCount) {  // Add those values and store it in separate array

            int holder[positiveCount][negativeCount];
            int holder1[(positiveCount*negativeCount)];
            long int counter = -1;

            for(int i=0; i<negativeCount; i++) // holder 
            {
                for(int j=0; j<positiveCount; j++)
                {
                    holder[i][j] = (negativeValues[i] + positiveValues[j]);  
                }
            }

            // for(int i=0; i<negativeCount; i++)
            // {
            //     for(int j=0; j<positiveCount; j++)
            //     {
            //        printf("%d ",holder[i][j]);
            //     }
            //     printf("\n");
            // }

                for(int i=0; i<negativeCount; i++) // Holder 1 region
                {
                    for(int j=0; j<positiveCount; j++)
                    {
                        ++counter;
                        holder1[counter] = (negativeValues[i] + positiveValues[j]);
                    }
                }

                for(int i=0; i<(positiveCount*negativeCount); i++)
                {
                    printf("%d ",holder1[i]);
                }

                printf("\n");

                for(int i=0; i<(positiveCount*negativeCount); i++) // Sort the holder1 in desc order
                {
                    for(int j=i+1; j<(positiveCount*negativeCount);)
                    {
                        if(holder1[j] < holder1[i]) {
                            int temp = holder1[j];
                            holder1[j] = holder1[i];
                            holder1[i] = temp;
                            j++;
                        } else {
                            j++;
                        }
                    }
                }

                printf("\n\nAfter Sorting manipulated :\n");

                long int firstOcc = 0;
                for(int i=0; i<(positiveCount*negativeCount); i++) // Don't remove this
                {
                    printf("%d ",holder1[i]);
                    if(!(holder1[i] >= 0)) {
                        firstOcc++;
                    }
                }   

                printf("\nFirstOcc value is :%ld\n",firstOcc);

                long int reseter = firstOcc;
                int valueOne;
                int valueTwo;

                for(int i=0; i<negativeCount; i++)
                {
                    for(int j=0; j<positiveCount; j++)
                    {
                        if(reseter == 0) {
                            valueOne = i;
                            valueTwo = j;
                        }
                        reseter--;
                    }
                }

                printf("ValueOne is :%d\n",valueOne);
                printf("Valuetwo is :%d\n",valueTwo);

                printf("\n%d %d\n",negativeValues[valueOne],positiveValues[valueTwo]);

        } else {

        }

    } 
    else  // If only negative values in the array
    { 
        for(int i=0; i<size; i++) // Sort in desc order
        {
            for(int j=i+1; j<size;)
            {
                if(input[j] > input[i]) {
                    long int temp = input[j];
                    input[j] = input[i];
                    input[i] = temp;
                    j++;
                } else {
                    j++;
                }
            }
        }

        printf("Sorted input array :\n");

        for(int i=0; i<size; i++)
        {
            printf("%d ",input[i]);
        }

        printf("\n");

        int flag = 0;
        int smallest;
        int secondSmall;
        smallest = input[0];

        for(int i=1; i<size; i++)
        {
            if(input[0] != input[i]) {
                secondSmall = input[i];
                flag = 1;
                break;
            }  else {
                flag = 0;
            }
        }

        // Step Final ---> Print the result

        if(flag) {
            printf("%d %d\n",secondSmall,smallest);
        } else {
            printf("-1\n");
        }

    }

    return 0;
}
*/

/*
int main()
{
    // Step 1 ----> Get the Input

    int size = 480;
    //int input[] = {-8 ,-66 ,-60}; // only negative
    //int input[] = {-24 , -73}; // only negative
    //int input[] = {-21 ,-67 ,-37 ,-18 ,4 ,-65}; // Both positive and Negative
    int input[] = {78546,-1303,41190,39913,7125,39396,68012,76829,71946,41107,12507,19525,54939,85528,5556,2285,-3589,63972,80571,-6539,59293,77837,60089,38962,68485,-1073,43443,56817,69705,48859,79712,58247,81278,54619,31877,-1602,4011,33606,85227,9674,84713,31451,39199,73369,50697,78478,85654,80830,52445,-62,84291,45456,87775,54376,-5587,89977,87025,47856,80511,66725,6710,70219,34967,21706,58555,561,30104,-3717,44167,49049,39680,62597,-9505,88879,45962,74914,1069,65333,65740,87237,-1012,60026,42688,-3242,48119,70823,-3269,45139,28674,87242,21860,69106,-8827,-9456,807,83451,1106,64634,89734,78995,47400,39409,51588,71617,62006,31267,56527,-3208,30317,32262,17746,39306,26005,-5849,69786,84125,74974,234,39259,37365,21194,-5164,16467,22367,-4619,50996,39535,30209,49347,62987,42921,6742,36113,28226,88360,31836,69493,78604,38629,33528,20861,-9908,82834,80588,-5756,62615,74708,79218,72850,47685,26579,27761,76243,76768,83850,5341,61481,33381,45550,20824,6363,22189,61288,52476,60415,59643,18030,39904,71964,66659,7149,26542,66751,-22,17126,-5288,-3690,1829,83931,2877,83236,44227,40638,69475,54712,34484,84816,26188,77865,64084,57012,17945,-3732,52018,4138,66683,21656,32168,40304,3616,32544,57453,40158,33013,-8852,-8999,37725,-2541,26553,55373,34058,19784,33317,84697,22976,-1976,52898,41510,34213,64480,15589,24942,-7580,45579,86960,30280,45979,42334,-3834,-3721,79672,62432,87454,53547,29162,12320,54549,76888,43501,-8903,65978,87559,44603,9291,5968,77580,41037,68866,29085,85250,43341,78396,43910,69483,33970,40865,33481,89949,16916,39647,19945,6583,35796,41117,-6152,74959,63437,58397,85564,40655,83216,61537,38209,37814,4545,54178,49111,55583,56761,88196,74550,10098,304,28455,13298,44274,79321,56779,67941,29954,30143,21603,46538,75940,72720,50386,84616,69874,42500,80175,20524,35711,51707,-7549,7242,89975,80351,66354,55553,47107,88267,40098,-9078,22289,78554,14221,280,-8413,4717,78221,31541,68583,33542,11796,78240,39979,-4101,72851,19849,48399,63021,74095,17827,48445,263,58792,48415,-9391,58863,37685,71439,80847,87784,72361,13131,50,20299,23412,1637,35017,35350,66900,13595,78892,12414,1830,28867,18313,8398,82438,430,81419,-9755,51979,63581,509,20766,21992,24840,89629,-6606,6274,4189,-8827,88636,27320,24945,18930,60732,60304,87669,6078,37200,34981,18687,59614,70533,81276,11644,88931,73709,22074,4062,-2328,7771,77644,8181,38537,33353,66743,61884,36747,83018,76073,61643,5366,13388,-3417,58018,7838,66888,55683,47638,37805,659,42,31136,81193,-8686,52780,3836,75023,8572,17899,82695,26343,5538,24593,-1403,72613,1332,70481,19355,18067,80271,14715,33433,27377,21299,1446,45215,21904,-9154,26570,69709,25228,36612,10840,40138,37926,-2663,53974,46667,15909,81873,63079,52252,21128,-2332,60850,3736,32722,65048,56814,84511,55315,81529,27939,-7313,36545,63107,71624,68449,63954,8189,71875,22899,78523,-7290,73037};

    // Step 2 ----> Get the min value close to zero

    int holderSize = ((size*(size - 1))/2);
    int holder[(size-1)][(size-1)];
    int holder1[holderSize];

    printf("Holder size :%d\n\n",holderSize);

    for(int i=0; i<size; i++)  // Put values into 2d array
    {
        for(int j=(i+1); j<size; j++)
        {
            holder[i][j] = (input[i] + input[j]);
        }
    }

    printf("2D Holder values :\n");

    for(int i=0; i<size; i++) // Print the 2d holder array
    {
        for(int j=(i+1); j<size; j++)
        {
            printf("%d ",holder[i][j]);
        }
        printf("\n");
    }


    int holdingPosition = 0;

    for(int i=0; i<size; i++)  // Put values into 1d holder array
    {
        for(int j=(i+1); j<size; j++)
        {
            holder1[holdingPosition] = (input[i] + input[j]);
            holdingPosition++;
        }
    }

    printf("Holding Position value is:%d\n",holdingPosition);

    printf("1D Holder values :\n");

    for(int i=0; i<holdingPosition; i++)
    {
        printf("%d ",holder1[i]);
    }

    printf("\n\n");

  // Step 3 ----> Get the minmum value out the array

    int minimum = -100008;

    // for(int i=0; i<holdingPosition; i++) // Sort the positive value array in desc order
    // {
    //     for(int j=i+1; j<holdingPosition;j++)
    //     {
    //         if(holder1[j] > holder1[i]) {
    //             int temp = holder1[j];
    //             holder1[j] = holder1[i];
    //             holder1[i] = temp;   
    //         }
    //     }
    // }

    for(int i=0; i<holdingPosition; i++) // get the minimum value method 2
    {
        if(holder1[i] > minimum) {
            minimum = holder1[i];
        }
    }

    printf("1D Holder values after sorting:\n");

    // for(int i=0; i<holdingPosition; i++)
    // {
    //     printf("%d ",holder1[i]);
    // }

    //minimum = holder1[0]; // Set the minimum value after sorting

    printf("Minimum value is :%d\n",minimum);

    printf("\n");

  // Step 4 ----> Check minimum value against 2D array to get the value

    int value1;
    int value2;

    for(int i=0; i<holdingPosition; i++) 
    {
        for(int j=i+1; j<holdingPosition;)
        {
            if(minimum == (input[i] + input[j])) {
                value1 = input[i];
                value2 = input[j];
                i = holdingPosition+1;
                break;
            } else {
                j++;
            }
        }
    }

    printf("\n%d %d\n",value1,value2);
    

    return 0;

}
*/
/*
int main()
{
    // Step 1 ----> Get the Input

    int size = 978;
    //int input[] = {-8 ,-66 ,-60}; // only negative
    //int input[] = {-24 , -73}; // only negative
    //int input[] = {-21 ,-67 ,-37 ,-18 ,4 ,-65}; // Both positive and Negative
    //int input[] = {-21 ,-67 ,-37 ,-18 ,4 ,-65 ,24 ,28}; 
    //int input[] = {78546,-1303,41190,39913,7125,39396,68012,76829,71946,41107,12507,19525,54939,85528,5556,2285,-3589,63972,80571,-6539,59293,77837,60089,38962,68485,-1073,43443,56817,69705,48859,79712,58247,81278,54619,31877,-1602,4011,33606,85227,9674,84713,31451,39199,73369,50697,78478,85654,80830,52445,-62,84291,45456,87775,54376,-5587,89977,87025,47856,80511,66725,6710,70219,34967,21706,58555,561,30104,-3717,44167,49049,39680,62597,-9505,88879,45962,74914,1069,65333,65740,87237,-1012,60026,42688,-3242,48119,70823,-3269,45139,28674,87242,21860,69106,-8827,-9456,807,83451,1106,64634,89734,78995,47400,39409,51588,71617,62006,31267,56527,-3208,30317,32262,17746,39306,26005,-5849,69786,84125,74974,234,39259,37365,21194,-5164,16467,22367,-4619,50996,39535,30209,49347,62987,42921,6742,36113,28226,88360,31836,69493,78604,38629,33528,20861,-9908,82834,80588,-5756,62615,74708,79218,72850,47685,26579,27761,76243,76768,83850,5341,61481,33381,45550,20824,6363,22189,61288,52476,60415,59643,18030,39904,71964,66659,7149,26542,66751,-22,17126,-5288,-3690,1829,83931,2877,83236,44227,40638,69475,54712,34484,84816,26188,77865,64084,57012,17945,-3732,52018,4138,66683,21656,32168,40304,3616,32544,57453,40158,33013,-8852,-8999,37725,-2541,26553,55373,34058,19784,33317,84697,22976,-1976,52898,41510,34213,64480,15589,24942,-7580,45579,86960,30280,45979,42334,-3834,-3721,79672,62432,87454,53547,29162,12320,54549,76888,43501,-8903,65978,87559,44603,9291,5968,77580,41037,68866,29085,85250,43341,78396,43910,69483,33970,40865,33481,89949,16916,39647,19945,6583,35796,41117,-6152,74959,63437,58397,85564,40655,83216,61537,38209,37814,4545,54178,49111,55583,56761,88196,74550,10098,304,28455,13298,44274,79321,56779,67941,29954,30143,21603,46538,75940,72720,50386,84616,69874,42500,80175,20524,35711,51707,-7549,7242,89975,80351,66354,55553,47107,88267,40098,-9078,22289,78554,14221,280,-8413,4717,78221,31541,68583,33542,11796,78240,39979,-4101,72851,19849,48399,63021,74095,17827,48445,263,58792,48415,-9391,58863,37685,71439,80847,87784,72361,13131,50,20299,23412,1637,35017,35350,66900,13595,78892,12414,1830,28867,18313,8398,82438,430,81419,-9755,51979,63581,509,20766,21992,24840,89629,-6606,6274,4189,-8827,88636,27320,24945,18930,60732,60304,87669,6078,37200,34981,18687,59614,70533,81276,11644,88931,73709,22074,4062,-2328,7771,77644,8181,38537,33353,66743,61884,36747,83018,76073,61643,5366,13388,-3417,58018,7838,66888,55683,47638,37805,659,42,31136,81193,-8686,52780,3836,75023,8572,17899,82695,26343,5538,24593,-1403,72613,1332,70481,19355,18067,80271,14715,33433,27377,21299,1446,45215,21904,-9154,26570,69709,25228,36612,10840,40138,37926,-2663,53974,46667,15909,81873,63079,52252,21128,-2332,60850,3736,32722,65048,56814,84511,55315,81529,27939,-7313,36545,63107,71624,68449,63954,8189,71875,22899,78523,-7290,73037};
    int input[] = {57866,76806,-7051,56123,41354,12690,31649,34769,27545,78536,15145,87381,13219,73382,38184,46360,1797,47879,14435,35864,60826,-6695,64699,74297,30175,-458,3698,76323,51074,23363,27506,18936,33886,54177,8776,8958,76867,74148,53727,38129,62679,78872,35505,9615,85971,7406,65975,-2237,89008,-9594,67350,59829,17433,42044,67843,81331,75308,5258,67649,36378,62343,5150,89036,6224,-6956,7807,25182,79911,15672,88910,28036,12068,1494,-2742,31683,21183,38387,7654,28946,37390,31782,30013,30936,82937,5774,8774,74263,-8922,47754,75629,37456,20092,14496,36487,36316,17540,78016,71499,7447,27406,-5879,69205,49474,29337,180,-8847,60520,72289,8807,23184,19674,74311,63197,84332,67243,78972,3101,75224,80050,84577,60848,51223,14664,85345,21427,60981,36602,33160,66197,54049,70566,70318,56971,30036,9650,-9131,31189,3888,73158,73718,37072,2828,81746,10264,20877,82706,22953,33979,67925,36720,52273,62491,-2062,76938,81553,53087,47914,28150,-3757,24106,15917,526,28141,6605,40562,71513,7474,5468,85401,-9372,12903,32468,27178,4644,76455,58055,-2654,9403,25751,-1012,56124,88025,71479,87784,74958,63027,50867,56589,24895,80832,14412,50812,-8647,76275,67417,65638,57783,84892,81106,76902,9237,4005,43087,46415,42371,29537,38187,49717,48941,73939,58706,38782,-4324,63902,60283,80634,60647,21145,70940,-4463,35694,-4653,80071,60770,81622,57483,36403,73122,76092,51226,60019,-4676,88953,13102,75461,41320,76361,47366,24754,59019,31300,-6545,7796,60698,-8925,78080,75049,61722,32942,55984,-9024,2354,85053,81047,73124,76670,48525,19522,83509,58335,80748,77246,87381,3414,24065,-3445,54734,10421,53921,89488,79441,18938,16661,20954,89636,17736,32751,74680,13175,75694,64381,14151,88048,59429,5193,-5116,69816,87440,24406,63320,55770,38871,74283,53147,52285,8343,83424,17014,52487,47340,40220,41923,-5,66881,-3406,-374,18334,39346,8023,41509,48757,82404,65660,70522,51828,80853,75406,31639,78288,33529,28676,67776,82400,12955,54640,68403,31298,48059,19134,-6220,5394,69354,69425,39111,69952,-263,48737,-1719,49083,-9523,49790,31557,82881,25445,35796,68426,40015,44919,10060,28299,88448,48736,29792,4560,71691,-5573,82963,36707,52486,35815,64209,-8403,15164,43630,40708,-4888,77089,23162,3393,59889,23639,86906,1441,16515,46068,70959,-5064,-3921,25873,38718,58100,48038,21171,-2113,62598,26580,2314,79279,73287,88522,48811,71213,-9886,73975,48560,64544,2804,35644,-2299,16198,5528,31340,36821,40691,81577,-7116,21645,10230,-1037,57518,82670,-9220,39273,13836,22389,35589,74138,34703,48585,57420,56942,7391,62351,57056,-8639,20906,31595,4166,66551,63018,54086,5796,28075,24624,56488,43369,27508,88133,63599,60194,79369,79986,60974,28637,27540,-6641,-2057,11673,61784,56528,2811,28722,73919,75162,19495,-1002,29785,84813,36886,6331,57826,967,45850,-4103,35591,12333,49266,-3184,34183,46583,67010,23547,36564,61702,85907,-2179,88783,-6155,19495,60562,60374,32306,23001,68010,41185,52497,77008,80970,47305,23889,21019,38848,34856,76869,44745,4164,-803,27729,10981,43380,84312,11708,645,54593,83410,20269,62415,82188,24114,15627,76468,18205,57933,9464,-3789,9113,-4322,83219,23800,76705,17104,54819,25549,85682,41683,4011,23564,74602,41740,68267,51700,59769,89975,62345,48080,7098,-7391,44212,23003,50445,69839,9466,78651,61489,52653,84862,4319,82053,78076,38119,-7529,28897,2934,28020,48297,78339,65753,81861,62937,17489,60123,24632,10975,83815,20694,69055,24630,47025,23262,57634,7465,26818,817,-3889,-1698,87192,14690,12621,79241,26484,84463,81712,65381,-2608,43449,23673,85731,42919,39251,82385,-5875,9369,40734,15101,26902,71428,17873,61532,28448,74858,52883,69636,11671,63701,75747,19974,84610,24155,66317,73846,60639,60775,89275,59737,-8116,66441,17128,11333,19356,66379,3713,23481,9466,54448,72304,46368,59593,173,41617,21759,85031,4496,1390,6697,1914,10854,60393,-3481,45009,60428,4083,15643,31198,27075,9098,33083,3512,36226,78138,56590,12600,-8154,13788,32066,80016,-3912,12151,73327,29983,87491,5081,25009,1982,16471,65428,37618,37325,59539,44137,-7670,29962,58220,41695,-5123,19013,60793,61682,32525,30736,49815,22832,53337,75384,46620,19120,89117,76430,64994,72439,16408,62480,87520,75139,-1821,13986,74285,45797,85034,43819,-71,11081,7498,-8133,86498,12375,20880,81009,7775,87127,21740,67590,43676,85077,76691,24013,37915,75804,10439,12904,58238,60569,85384,79476,69426,17280,27179,53706,73077,22208,7520,6723,67011,48740,32312,63505,71115,86914,54509,12607,7753,86249,-9807,61429,5039,601,-4562,76676,86405,39599,-425,78361,33885,18676,67832,13306,45956,28728,77012,52750,84659,18249,69473,61665,76989,11781,58887,81822,8690,23391,4424,26444,43358,28339,21590,82119,38941,50750,-7493,59063,24066,2082,71141,67952,54480,72690,-8747,34153,11414,1983,-3102,6068,53954,76371,77733,40939,21869,70338,56478,64282,27446,-5381,24443,80804,56681,56033,-3365,29339,40501,-858,-1603,74567,34946,3256,52514,23143,85946,77490,67296,7355,13190,74194,23423,77144,84283,34874,51800,39869,15207,18273,14146,52653,46615,72311,67175,13291,62062,-2473,76352,12558,30392,8466,-2880,-945,21722,83357,32199,17664,-5441,33212,35019,17749,41124,-7840,4888,59124,37034,66689,8988,85963,18679,56857,72333,-989,39163,73225,46024,11220,80753,32371,33778,44862,50838,64621,53917,82560,57973,19833,10219,62532,63046,78961,13998,14165,81121,28886,7006,51872,29292,25994,47830,81694,-7154,53880,-9300,65732,37101,70447,86952,51571,12813,54448,6428,73651,29064,-5938,89929,20754,23896,10143,17003,20659,-901,41001,68546,13937,3604,85552,75809,42897,45263,57356,58308,71832,21232,82730,47559,-7950,63172,68228,77343,85986,32671,-6234,-6651,-4548,21550,-6727,49928,79168,37139,76931,9822,69960,27927,12085,-6107,41532,7632,3419,18146,86618,70776,86454,68445,25725,2896,25999,51497,76069,4222,38835,-4233,70616,66323,-884,-215,21590,2390,59714,10754,73251,70362,54298,53206,8285,76384,80821,83539};
    //978 above --> o/p -7391 7391

    // Step 2 ----> Get the min value close to zero

    int holdingSize = ((size*(size - 1))/2);
    int variableOneHolder[holdingSize];
    int variableTwoHolder[holdingSize];
    int sumHolder[holdingSize];
    int variablePosition = 0;

    int cpOfVariableOneHolder[holdingSize];
    int cpOfVariableTwoHolder[holdingSize];
    int cpOfSumHolder[holdingSize];

    printf("Holder size :%d\n\n",holdingSize);

    for(int i=0; i<size; i++)  // Put values into respective array
    {
        for(int j=(i+1); j<size; j++)
        {
            variableOneHolder[variablePosition] = input[i];
            variableTwoHolder[variablePosition] = input[j];
            sumHolder[variablePosition] = (input[i] + input[j]);

            cpOfVariableOneHolder[variablePosition] = input[i];
            cpOfVariableTwoHolder[variablePosition] = input[j];
            cpOfSumHolder[variablePosition] = (input[i] + input[j]);

            variablePosition++;
        }
    }

    //printf("Before sorting :\n");

    // for(int i=0; i<holdingSize; i++) // Print Before sorting
    // {
    //     printf("(%d + %d) = %d\n",variableOneHolder[i],variableTwoHolder[i],sumHolder[i]);
    //     //printf("%d ",sumHolder[i]);
    // }

  // Step 3 ----> Finding the Minimum value

    
    for(int i=0; i<holdingSize; i++) // Sort the sumHolder array in desc order
    {
        for(int j=i+1; j<holdingSize;j++)
        {
            if(sumHolder[j] < sumHolder[i]) {
                int temp = sumHolder[j];
                sumHolder[j] = sumHolder[i];
                sumHolder[i] = temp;  

                int temp1 = variableOneHolder[j];
                variableOneHolder[j] = variableOneHolder[i];
                variableOneHolder[i] = temp1;

                int temp2 = variableTwoHolder[j];
                variableTwoHolder[j] = variableTwoHolder[i];
                variableTwoHolder[i] = temp2; 
            }
        }
    }

    // printf("After sorting in desc Order :\n");

    // for(int i=0; i<holdingSize; i++) // Print after sorting
    // {
    //     printf("(%d + %d) = %d\n",variableOneHolder[i],variableTwoHolder[i],sumHolder[i]);
    //     //printf("%d ",sumHolder[i]);
    // }

    int positiveFlag = 0;
    int negativeFlag = 0;
    int negativePosition = 0;
    int positivePosition = 0;
    int positiveValue;
    int negativeValue; 

    for(int i=0; i<holdingSize; i++)
    {
        if(sumHolder[i] < 0) {
            negativePosition = i;
            negativeValue = sumHolder[i];
            negativeFlag = 1;
        } else {
            positivePosition = i;
            positiveValue = sumHolder[i];
            positiveFlag = 1;
            break;
        }
    }

    printf("\n-ve position %d and its value is %d\n",negativePosition,negativeValue);
    printf("+ve position %d and its value is %d\n",positivePosition,positiveValue);

  // Step 4 ----> Based on +ve and -ve values flow changes

    if(positiveFlag && negativeFlag) {
        int posCou = 0;
        int negCou = 0;

        for(int i=0; i<positiveValue; posCou++,i++);
        for(int i=negativeValue; i<0; negCou++,i--);

        if(negCou > posCou) {
            for(int i=0; i<holdingSize; i++)
            {
                if(positiveValue == cpOfSumHolder[i]) {
                    printf("%d %d\n",cpOfVariableOneHolder[i],cpOfVariableTwoHolder[i]);
                    i = holdingSize+1;
                    break;
                }
            }
        } else {
            for(int i=0; i<holdingSize; i++)
            {
                if(negativeValue == cpOfSumHolder[i]) {
                    printf("%d %d\n",cpOfVariableOneHolder[i],cpOfVariableTwoHolder[i]);
                    i = holdingSize+1;
                    break;
                }
            }
            //printf("%d %d",variableOneHolder[negativePosition],variableTwoHolder[negativePosition]);
        }

    } else {
        for(int i=0; i<holdingSize; i++)
        {
            if(negativeValue == cpOfSumHolder[i]) {
                printf("%d %d\n",cpOfVariableOneHolder[i],cpOfVariableTwoHolder[i]);
                i = holdingSize+1;
                break;
            }
        }
        //printf("%d %d\n",variableOneHolder[negativePosition],variableTwoHolder[negativePosition]);
    }

    //printf("\nMinimum value is %d and its position is %d:\n",minimum,minPosition);
    //printf("%d %d\n",variableOneHolder[2776],variableTwoHolder[2776]);

    return 0;
}
*/