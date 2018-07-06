#include <stdio.h>

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
	// Step 1 -> Get the input

		int size;
		scanf("%d",&size);
		int date;
		scanf("%d",&date);

		int carNumber[size];
		for(int i=0; i<size; i++)
		{
			scanf("%d",&carNumber[i]);
		}
		int penality[size];
		for(int i=0; i<size; i++)
		{
			scanf("%d",&penality[i]);
		}

	// Step 2 --> Find the penality

		int totalFine = 0;
		int flag = (date % 2);

		if(flag) {
			for(int i=0; i<size; i++)
			{
				if((carNumber[i] % 2 == 0)) {
					totalFine = totalFine + penality[i];
				}		
			}
		} else {
			for(int i=0; i<size; i++)
			{
				if((carNumber[i] % 2 == 1)) {
					totalFine = totalFine + penality[i];
				}		
			}
		}

	// Step 3 ---> Print the result

		printf("%d\n",totalFine);

    }
    
	return 0;
}

/*
int main()
{
  // Step 1 -> Get the input

    int size = 4;
    int date = 12;

    int carNumber[] = {2375 ,7682 ,2325 ,2352};
    int penality[] = {250 ,500 ,350 ,200};

  // Step 2 --> Find the penality

    int totalFine = 0;
	int flag = (date % 2);

	if(flag) {
		for(int i=0; i<size; i++)
		{
			if((carNumber[i] % 2 == 0)) {
				totalFine = totalFine + penality[i];
			}		
		}
	} else {
		for(int i=0; i<size; i++)
		{
			if((carNumber[i] % 2 == 1)) {
				totalFine = totalFine + penality[i];
			}		
		}
	}

  // Step 3 ---> Print the result

	printf("%d\n",totalFine);

    return 0;
}
*/