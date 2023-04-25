#include "main.h"
#include <stdlib.h>

/**
 * freeArrStr - func
 * @s: char **
 * @j: int
 * Return: void
*/
void freeArrStr(char **s, int j)
{
while (j >= 0)
free(s[j--]);

free(s);
}
