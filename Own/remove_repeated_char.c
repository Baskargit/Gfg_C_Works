#include <stdio.h>

int main()
{
    char a[3] = {'a' , 'b' , 'a'};

    printf("Data With Duplicate Characters : \n");
    for(int i=0; i<sizeof(a); i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");

    // Logic
    int duplicateCount = 0;

    for(int i=0; i<sizeof(a); i++)
    {
        for(int j=i+1; j<sizeof(a);)
        {
            if( (a[i] == a[j]) && (a[i] != '\0') ) {
                duplicateCount++;
                a[j] = '\0';
                j++;
            } else {
                j++;
            }
        }
    }

    // Creating New Array without Duplicate Characters
    char b[(sizeof(a) - duplicateCount)];
    int position = 0;

    for(int i=0; i<sizeof(a);)
    {
        if(a[i] != '\0') {
            b[position] = a[i];
            position++;
            i++;
        } else {
            i++;
        }
    }

    printf("Final Output with Duplicates Removed:\n");
    for(int i=0; i<sizeof(b); i++)
    {
        printf("%c",b[i]);
    }
    printf("\n");
    return 0;
}