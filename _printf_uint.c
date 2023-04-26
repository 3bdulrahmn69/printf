#include "main.h"
#include <stdarg.h>

/**
 * _printf_uint - asdj
 * @args: agj
 * Return: int
*/
int _printf_uint(va_list args)
{
int num;
char *res;

num = va_arg(args, unsigned int);

res = uintToString(num);

return (printStr(res));
}
