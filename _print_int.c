#include "main.h"
#include <stdarg.h>

/**
 * _printf_int - asdj
 * @args: agj
 * Return: int
*/
int _printf_int(va_list args)
{
int num;
char *res;

num = va_arg(args, int);

res = intToString(num);

return (printStr(res));
}
