//solution must allocate all required memory
//and return a free-able buffer to the caller.

// GOAL : Remove all the vowels characters in a string!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define vowels "aeouiAEOUI"

char *disemvowel(const char *str);


int main()
{
    char *res = disemvowel("What are you, a communist?");
    printf("%s\n",res);
    free(res);
}


char *disemvowel(const char *str)
{
  char *result = malloc(strlen(str) * sizeof(char));
  int j = 0;
  for(;*str != '\0';str++)
  {
    if(strchr(vowels,*str) == NULL)
    {
      result[j] = *str;
      j++;
    }
  }
  result[j] = '\0';
  return result;
  free(result);
}
