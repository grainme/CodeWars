/* Note:
    Allocate memory yourself!
    
"ATTGC" --> "TAACG"
"GTAT" --> "CATA"

*/

#include <stdlib.h>
#include <string.h>

char *dna_strand(const char *dna)
{
  char *res = malloc(strlen(dna) +1);
  int i;
  for(i = 0 ; dna[i] != '\0'; i++)
  {
    if (dna[i] == 'A') res[i] = 'T';
    else if (dna[i] == 'T') res[i] = 'A';
    else if (dna[i] == 'G') res[i] = 'C';
    else if (dna[i] == 'C') res[i] = 'G';
  }
  res[i] = '\0';
  return res;
}
