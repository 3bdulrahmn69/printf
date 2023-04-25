#include "main.h"
#include <stdarg.h>

/**
 * _printf_char - asdj
 * @args: agj
 * Return: int
*/
int _printf_char(va_list args)
{
_putchar(va_arg(args, int));
return (1);
}
