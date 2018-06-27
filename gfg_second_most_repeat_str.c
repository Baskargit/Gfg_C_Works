#include<stdio.h>
#include<string.h>
#define max_length 100

// Accepted Version in Geeks for Geeks
int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
    // Step 1  ----> Get the Input

        int numberOfStrings;
        scanf("%d",&numberOfStrings);
        int totalLength = (1000000)+(numberOfStrings);

        char newlinefeed;
        newlinefeed = getchar();
        char fullString[totalLength];
        scanf("%[^\n]s",fullString);

    //Step 2   ----> Separating phrases into individual words and store it in a array

        char input[numberOfStrings][max_length];
        int spacIndex = 0;
        int spaceCount[numberOfStrings-1];

        for(int i=0; fullString[i] != '\0'; i++) // Counting Spaces
        {
            if(fullString[i] == 32) {
                    spaceCount[spacIndex] = i;
                    spacIndex++;
                }
        }

        int row = 0;
        int column = 0;

        for(int i=0; fullString[i] != '\0';i++)  // Inserting Words into separate array
        {
            if(fullString[i] != 32) {
                input[row][column] = fullString[i];
                column++;
            } else {
                input[row][column] = '\0';
                row++;
                column = 0;
            }
        }

    //Step 3   ----> Insert Null character for Repeated strings,count the frequency and store it in array

        char copiedString[numberOfStrings][max_length];

        for(int i=0; i<numberOfStrings; i++)  // Copying Input string into copied String array for data process
        {
            strcpy(copiedString[i],input[i]);
        }

        int occurrence = 0;
        
        for(int i=0; i<numberOfStrings; i++) // Checking for Duplicates
        {
            for(int j=i+1; j<numberOfStrings;) 
            {
                if(strcmp(copiedString[i],copiedString[j]) == 0 && copiedString[j][0] != '\0') 
                {
                    occurrence++;
                    copiedString[j][0] = '\0';
                    j++;
                } else {
                    j++;
                }
            }
        }

        int position = 0;
        char dupsRemovedStrings[(numberOfStrings-occurrence)][max_length];
        unsigned int frequencyCount = 0;
        int frequency[numberOfStrings-occurrence];

        for(int i=0; i<numberOfStrings;)  // creating Duplicates Removed array from copiedstring
        {
            if(copiedString[i][0] != '\0') {
                strcpy(dupsRemovedStrings[position],input[i]);
                i++;
                position++;
            } else {
                i++;
            }
        }
        

        for(int i=0; i<(numberOfStrings-occurrence); i++) // Getting the Frequency count
        {
            for(int j=0; j<numberOfStrings;) 
            {
                if(strcmp(dupsRemovedStrings[i],input[j]) == 0) 
                {
                    frequencyCount++;
                    frequency[i] = frequencyCount;
                    j++;
                } else {
                    j++;
                }
            }
            frequencyCount = 0;
        }
        

    //Step 4   ----> Filter the frequency array in "Desc" Order also swap the index of the non-dup array

        for(int i=0; i<(numberOfStrings-occurrence); i++)
        {
            for(int j=i+1; j<(numberOfStrings-occurrence);)
            {
                if(frequency[i] < frequency[j]) {
                    unsigned int temp = frequency[j];
                    frequency[j] = frequency[i];
                    frequency[i] = temp;
                    char tempChar[max_length];
                    strcpy(tempChar,dupsRemovedStrings[j]);
                    //for(int z=0; dupsRemovedStrings[j][z] != '\0'; z++) {dupsRemovedStrings[j][z] = '\0';}
                    strcpy(dupsRemovedStrings[j],dupsRemovedStrings[i]);
                    //for(int z=0; dupsRemovedStrings[i][z] != '\0'; z++) {dupsRemovedStrings[i][z] = '\0';}
                    strcpy(dupsRemovedStrings[i],tempChar);
                    j++;
                } else {
                    j++;
                }
            }
        }

    //Step 5   ----> Display the array[1] as output

        printf("%s\n",dupsRemovedStrings[1]);
    
    //Step 6  -----> Flush the old fullString and input string with null characters
    
        for(int i=0; fullString[i] != '\0'; i++) // Full String 
        {
            fullString[i] = '\0';
        }
        
        for(int i=0; i<(numberOfStrings-occurrence); i++)
        {
            for(int z=0; dupsRemovedStrings[i][z] != '\0'; z++) {dupsRemovedStrings[i][z] = '\0';}
        }
        
    }
	return 0;
}