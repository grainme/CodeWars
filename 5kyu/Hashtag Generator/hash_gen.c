/*
"Coding wars       here   " --> "#CodingWarsHere"
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

// Prototypes 
void hash_gen(char *res, char *source);

int main(void)
{
    char *x = malloc(50);
    char *y = " Hello there thanks for trying my Kata";
    hash_gen(x,y);
    // Output: #HelloThereThanksForTryingMyKata
    printf("%s\n",x);
    return 0;
}

void hash_gen(char *res, char *source)
{
    // Keepuing the track if it's the first letter right after space.
    int first_letter = 1 ; // True
    // Intializing the result string
    res[0] = '#';
    // Declaring to index to track the string
    int ind = 1;

    for(int i = 0; source[i] != '\0'; i++)
    {
        if(source[i] != ' ')
        {
            if (first_letter == 1)
            {
                res[ind] = toupper(source[i]);
                ind++;
                first_letter = 0;
            }
            else
            {
                res[ind] = tolower(source[i]);
                ind++;
                first_letter = 0;
            }
        }
        else
        {
            first_letter = 1;
        }
    }
    // Terminating the string with the null character
    res[ind] = '\0';
}
