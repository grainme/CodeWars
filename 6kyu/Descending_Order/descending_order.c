#include <inttypes.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void sort(char *buffer)
{
  int swap = 1;
  int size = 0;
  for(int i = 0; buffer[i] != '\0'; i++) size++;
  while (swap != 0)
  {
    swap = 0;
    for(int i = 0; i < size - 1; i++)
    {
      if(buffer[i]<buffer[i+1])
      {
        char temp = buffer[i];
        buffer[i] = buffer[i+1];
        buffer[i+1] = temp;
        swap++;
      }
    } 
  }
}


unsigned long int descendingOrder(unsigned long int n)
{
    char *buffer = malloc(500 * sizeof(char));
    sprintf(buffer,"%lu",n);
    sort(buffer);
    return strtoul(buffer,NULL,0);
}