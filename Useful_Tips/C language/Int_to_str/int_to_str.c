// Convert a number to a string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


int main(void)
{
    int num = 100;
    char *buffer = malloc(10);
    sprintf(buffer,"%i",num);
    fprintf(stdout,"The string_number : %s\n",buffer);
    // WOAH! Now we can iterate through the string.
    return 0;
} 
