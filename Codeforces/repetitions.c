#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = malloc(1000*sizeof(char));
    scanf("%s",s);
    int c =0;
    int res = 0;
    char curr = s[0];
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != curr)
        {
            curr = s[i];
            c = 0;
        }
        c+=1;
        if (c > res)
        {
            res = c;
        }
    }
    printf("%i\n",res);
}

/*
s = input()
c = 0
mx = 0
curr = s[0]
for i in range(len(s)):
    if s[i] != curr:
        curr = s[i]
        c = 0
    c += 1
    mx = max(mx,c)

print(mx)
*/