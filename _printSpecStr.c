#include "main.h"

/**
 * _printSpecStr - Prints a string to stdout.
 *
 * @s: A pointer to the string to be printed.
 *
 * Return: The number of characters printed.
 */
int printSpecStr(char *s)
{
int i = 0, cnt = 0;

if (!s)
return (i);

for (; s[i] != '\0'; i++)
{
if ((s[i] > 0 && s[i] < 32) || (s[i] >= 127))
{
cnt += printStr("\\x");
cnt += printStr(_int_to_hex_2digits(s[i])) - 1;
}
else
{
_putchar(s[i]);
}
}

return (i + cnt);
}