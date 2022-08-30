/*
Examples:
accum("abcd") -> "A-Bb-Ccc-Dddd"
accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
accum("cwAt") -> "C-Ww-Aaa-Tttt"
*/
// This code still have some errors related to memory!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *accum(const char *source);

int main(void)
{
    char *source = "rqgsxa";
    printf("%s\n",accum(source));
    return 0;
}

char *accum(const char *source)
{
    char *res = malloc(50*sizeof(char));
    int ind = 0;
    int k;
    for (int i = 0; source[i] != '\0'; i++)
    {
        k = 0;
        res[ind] = toupper(source[i]);
        ind ++;
        while(k != i)
        {
            res[ind] = tolower(source[i]);
            ind++;
            k++;
        }
        if (source[i+1] != '\0')
        {
            res[ind] = '-';
        }
        ind++;
        k = 0;
    }
    res[ind] = '\0';
    return res;
}
