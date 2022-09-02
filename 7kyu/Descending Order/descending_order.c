#include <inttypes.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void sort(char *buffer);
unsigned long int descendingOrder(unsigned long int n);

int main(void)
{
    int x = 324653;
    fprintf(stdout,"%lu\n",descendingOrder(x));
}



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
    char *buffer = malloc(50 * sizeof(char));
    unsigned long int result;
    sprintf(buffer,"%lu",n);
    sort(buffer);
    // We can use strtol(buffer,NULL,0) instead of sscanf
    sscanf(buffer,"%lu",&result);
    free(buffer);
    return result;
}


/*

VALGRIND RESULT :

==1133== HEAP SUMMARY:
==1133==     in use at exit: 0 bytes in 0 blocks
==1133==   total heap usage: 2 allocs, 2 frees, 1,074 bytes allocated
==1133== 
==1133== All heap blocks were freed -- no leaks are possible
==1133== 
==1133== For lists of detected and suppressed errors, rerun with: -s
==1133== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
*/
