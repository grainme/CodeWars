#include <stdio.h>
#include <stdlib.h>

/* The main function. */
int main(void)
{
    char *name = "Hello World!";
    char *word = "Hello";

    /* Printing the result of the function `startsWith` to the console. */
    printf("%i\n",startsWith(name, word));

    return 0;
}


/* A function that takes two strings as arguments and returns 1 
   if the first string starts with the second string. */
int startsWith(const char *string, const char *prefix)
{
  for(int i = 0; prefix[i] != '\0'; i++)
  {
    if(string[i] != prefix[i])
    {
      return 0;
    }
  }
  return 1;
}