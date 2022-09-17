#include <stdio.h>


// input : 19 --> output : 10

#define abs(x) ((x>0)?x:-x)

int sum_digits(int n);

int main(void)
{
    int number = 18;
    printf("%i\n",sum_digits(number));
    return 0;
}

int sum_digits(int n)
{
    int m = abs(n);
    int s = 0;
    while (m != 0)
    {
        s += m%10;
        m /= 10; 
    }
    return s;
}