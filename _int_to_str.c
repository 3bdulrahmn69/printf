#include "main.h"
#include <stdlib.h>

char *intToString(int num)
{
int nlen = 1, tmp, i = 0;
char *res;

tmp = num;
for (; tmp / 10 != 0; tmp /= 10)
{
nlen++;
}

res = malloc(nlen + 1);
if (!res)
return (NULL);

tmp = num;
for (; tmp / 10 != 0; tmp /= 10)
{
res[i++] = (tmp % 10) + '0';
}

res[i] = '\0';

return (res);
}
