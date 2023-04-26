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
unsigned int i = 1, digits = 1, j;
char *res;

if (num == 0)
{
res = zero();
return (res);
}
while (i * 2 <= num)
{
i *= 2;
digits++;
}
res = malloc(digits + 1);
if (!res)
return (NULL);

i = num;
j = digits - 1;
while (i > 0)
{
res[j--] = (i % 2) + '0';
i /= 2;
}
res[digits] = '\0';
return (res);
}
