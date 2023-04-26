#include "main.h"
#include <stdlib.h>

/**
 * revString - sdga
 * @s: str
 * @len: len
 * @negFlag: agojs
 * Return: char *
 */
char *revString(char *s, int len, int negFlag)
{
int i, reslen, j = 0;
char *res;

res = malloc(len + 1 + negFlag);
if (!res)
return (NULL);

reslen = len + negFlag;

for (i = len - 1; i >= 0; i--, j++)
{
res[j + negFlag] = s[i];
}

res[reslen] = '\0';

return (res);
}
