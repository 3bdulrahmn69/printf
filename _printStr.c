#include "main.h"

/**
 * printStr - Prints a string to stdout.
 *
 * @s: A pointer to the string to be printed.
 *
 * Return: The number of characters printed.
 */
int printStr(char *s)
{
int i = 0;

if (!s)
return (i);

for (; s[i] != '\0'; i++)
_putchar(s[i]);

return (i);
}
