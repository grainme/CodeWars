#include <math.h>

int check_5(int number)
{
  while(number != 0)
  {
    if (number%10 == 5)
    {
      return 1; // True
    }
    number /= 10;
  }
  return 0; // False
}

int dontGiveMeFive(int start, int end)
{
  int count = 0;
  for(int i = start; i <= end; i++)
  {
    if (check_5(abs(i)) != 1)
    {
      count ++;
    }
  }
  return count;
}
