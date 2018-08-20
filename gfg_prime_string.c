#include <stdio.h>
#define MAX_LENGTH 100000

int main()
{
	int testCaseCount;
    scanf("%d",&testCaseCount);
    
    for(int count=0; count<testCaseCount; count++)
    {
        long long int length;
        scanf("%lld",&length);
        char string[length];
        scanf("%s",string);
        unsigned long long int number = 0;
        int flag = 1;

        for(unsigned long long int i=0; string[i] != '\0'; i++)
        {
            number += string[i];
        }

        for(int i=2; i<(number -1); i++)
        {
            if(number%i == 0) {
                flag = 0;
                break;
            }    
        }

        printf("%s\n",((flag) ? "YES" : "NO"));
    }
	return 0;
}


/*
int main()
{
    char string[] = "QNWribtXhmdTdDHARKwIPiOfwJJWRYIadkKpsePlhnDwqfwNpdZayWfXahehFCksNJWomSnTStYtZUYyHSISEJYuUgDASGtLTcRxrqvOqZkxTaMwWfDpjfOISPlVrIDMTWQaXEJOsWRRlycsbVjbGlCCizjSbXNkGBgifpSEwtQTTywYmAgMqZmMyyAzsdDzOqcSkdKZJOyhgwYhzvGgJwgSTxalkhnLUhqNiOShXiSJeXMxcwWvHPLjCYkVfpwwwGNdOHIMzsHBRFmEeVCAAveBLrmpvFpeAwhdIaXDbLEMuGAyVCRTogDxsLYpTbwxvzOBFLfWdjXBTTWGwlCCHrtrotJQIgqKFvETMrKVWnNVEHbJHgcHGTLQjrXwkCZuoypbjgQouETSfulySPVOZxrVemtiaKNEFGYCBSRogVLliwiTgvtOwXRBAJsTbcFziAhtiMTagFIlIHVqPYWQRAcSNIHnLZpbSyOrXwXTmNREEBpYouSaWmIMLoPoLMJzczMyAmShLpdFSjVMEnSPYLinyZHBnhjgKFuftaRZBNQgSRpppEXBvctrVlJYtjSEkzSsVPnMePlwWXmTvlXQRPvVqvUnqfYJAAwFjgIDIgQOalInmxsHWGRvrbjOiLuEOGHEecqotLCdCHnGTLmgFBlLKaJXDkXvqZbcVYgiWmbUPErjTnpeZTEQfelNDMDLPfxPlRudnanMHFHRZivppHSidTFSjiiSXLGjaLGleeLuOZwthhzXuzmqHyaOTYHZJMItbyLQKOpMAmiQDsbApkcSTXWxDJuIInBSNDIihYLjftDaVYnQykzHDpDXgmswIQFspgBDDZzhEFTTfKXXfrUwrOtxZzivCMsNDxickvfiWnVGDjkHOredSDxeVxidJOfQOWrfQYiKmhQM";
    unsigned long long int number = 0;
    int flag = 1;

    for(unsigned long long int i=0; string[i] != '\0'; i++)
    {
        number += string[i];
    }

    printf("Number is :%llu\n",number);

    for(int i=2; (flag && i<(number -1)); i++)
    {
        if(number%i == 0) {
            flag = 0;
            break;
        }    
    }

    printf("%s\n",((flag) ? "YES" : "NO"));
    
    return 0;
}
*/
