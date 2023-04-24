#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

void freeArrStr(char **s, int j)
{
    while (j >= 0)
    free(s[j--]);

    free(s);
}

/**
 * resLength - Computes the length of the result produced by printf
 * @format: format string to be printed
 * Return: length of the result
 */
int resLength(const char *format)
{
int i = 0, len = 1;

if (!format)
return (0);

for (; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
if (format[i + 1] == 's' || format[i + 1] == 'c')
len++;
}

if (format[i - 2] == '%')
len++;
}

if (i == 0)
return (0);

return (len);
}

/**
 * getSubstring - extracts a substring from a given string
 * @str: the original string
 * @s: the start index of the substring
 * @e: the end index of the substring
 * Return: pointer to the extracted substring
 */
char *getSubstring(const char *str, int s, int e)
{
int i = s;
char *res = malloc(e - s + 1);

if (!res)
return (NULL);

for (; i < e; i++)
{
res[i - s] = str[i];
}

res[i] = '\0';

return (res);
}

/**
 * handlingFormat - function that tokenize a string to
 * get the substrings and their format in a % like printf
 * @format: format of the string.
 * @l: length of the string format to be passed.
 * Return: tokens with formatting in a double pointer.
 */
char **handlingFormat(const char *format, int l)
{
int len = l, i, j, s;
char **res;
char *tmp;

if (!format || len == 0)
return (NULL);

res = (char **) malloc(sizeof(char *) * len);

if (!res)
return (NULL);

for (i = 0, s = 0, j = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
res[j++] = getSubstring(format, s, i);

tmp = malloc(2);
if (!tmp)
{
freeArrStr(res, j - 1);
return (NULL);
}
tmp[0] = '%';
tmp[1] = format[++i];
res[j++] = tmp;

s = i + 1;
}
else if (format[i + 1] == '\0')
{
res[j++] = getSubstring(format, s, i + 1);
}
}

return (res);
}

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

/**
 * _printf - a function that produces output according to a format.
 * @format: A string that contains the text to be written to standard output.
 * This function parses the format string and prints the appropriate output
 * based on the format specifier passed in the string.
 * and -1 on failure.
 * Return: int
*/
int _printf(const char *format, ...)
{
char **res;
char *tmp;
int len, printed = 0, i = 0;
va_list args;

if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);

len = resLength(format);

res = handlingFormat(format, len);
if (!res)
return (-1);

va_start(args, format);

for (; i < len; i++)
{
if (res[i][0] == '%')
{
if (res[i][1] == 'c')
{
printed++;
_putchar(va_arg(args, int));
}
else if (res[i][1] == 's')
{
tmp = va_arg(args, char *);
if (!tmp)
tmp = "(null)";
printed += printStr(tmp);
}
}
else
printed += printStr(res[i]);
}

va_end(args);

return (printed);
}
