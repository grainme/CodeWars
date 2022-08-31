#include <stdlib.h>
#include <string.h>

char *remove_url_anchor(char *url_in)
{
  char *result = malloc(100);
  int i = 0;
  while(url_in[i] !='#' && url_in[i] != '\0')
  {
    result[i] = url_in[i];
    i++;
  }
  result[i] = '\0';
  return result;
}
