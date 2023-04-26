#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * zero - fjsd
 * Return: char *
 */
char *zero(void)
{
char *res;

res = malloc(2);
if (!res)
return (NULL);
res[0] = '0';
res[1] = '\0';
return (res);
}

/**
 * intToBinary - fjsd
 * @num: sodpjga
 * Return: char *
 */
char *intToBinary(unsigned int num)
{
unsigned int i = 1, digits = 1, rem, j = 0;
char *res;

if (num == 0)
{
res = zero();
return (res);
}
while (i * 2 < num)
{
i *= 2;
digits++;
}
res = malloc(digits + 1);
if (!res)
return (NULL);
res[j++] = '1';
rem = num - i;
i /= 2;
while (i > 1)
{
while (rem < i)
{
i /= 2;
res[j++] = '0';
}
if (rem == i)
{
res[j++] = '1';
rem -= i;
}
while (rem > i)
{
res[j++] = '1';
rem -= i;
}
i /= 2;
}
res[digits] = '\0';
return (res);
}
