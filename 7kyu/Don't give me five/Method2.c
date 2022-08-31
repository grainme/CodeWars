#include <stdio.h>
#include <string.h>
#include <ctype.h>

int dontGiveMeFive(int start, int end)
{
    char *buffer = malloc(11);
    int count = 0;
    for(int i = start; i < end + 1; i++)
    {
        sprintf(buffer,"%i",i);
        if(strchr(buffer, '5') == NULL)
        {
            count ++;
        }
    }
    free(buffer);
    return count;
}
