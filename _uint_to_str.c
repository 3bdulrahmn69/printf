#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * uintToString - fjsd
 * @num: sodpjga
 * Return: char *
 */
char *uintToString(unsigned int num)
{
int nlen = 1, i;
unsigned long val = num, tmp;
char *res, *revres;

tmp = val;
for (; tmp / 10 != 0; tmp /= 10)
{
nlen++;
}

res = malloc(nlen + 1);
if (!res)
return (NULL);

tmp = val;
i = 0;
for (; tmp / 10 != 0; tmp /= 10)
{
res[i++] = (tmp % 10) + '0';
}
res[i++] = (tmp % 10) + '0';

revres = revString(res, nlen, 0);

return (revres);
}
