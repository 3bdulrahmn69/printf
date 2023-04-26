#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * intToString - fjsd
 * @num: sodpjga
 * Return: char *
*/
char *intToString(int num)
{
int nlen = 1, i, negnum = 0;
long val = num, tmp;
char *res, *revres;

if (val < 0)
{
negnum = 1;
val *= -1;
}

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

revres = revString(res, nlen, negnum);

revres[0] = (negnum == 1) ? '-' : revres[0];

return (revres);
}
