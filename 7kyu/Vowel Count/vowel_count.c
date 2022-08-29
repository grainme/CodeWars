/*
Return the number (count) of vowels in the given string.

We will consider a, e, i, o, u as vowels for this Kata (but not y).

The input string will only consist of lower case letters and/or spaces.

*/

// Method 01:

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t get_count(const char *s)
{
  int count = 0;
  for(int i = 0 ; i < strlen(s); i++)
  {
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'u' || s[i] == 'o' || s[i] == 'i')
    {
      count ++;
    }
  }
  return count;
}

// Method 02:

/* WE USE strchr() ; The C library function char *strchr(const char *str, int c) searches 
for the first occurrence of the character c (an unsigned char) in the string pointed to by the argument str. */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

#define vowels "aeoui"
size_t get_count(const char *s)
{
  int count = 0;
  for(;*s != '\0';s++)
  {
    if(strchr(vowels,*s) != NULL)
    {
      count++;
    }
  }
  return count;
}
