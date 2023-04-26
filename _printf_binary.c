#include "main.h"
#include <stdarg.h>

/**
 * _printf_binary - asdj
 * @args: agj
 * Return: int
 */
int _printf_binary(va_list args)
{
unsigned int tmp = va_arg(args, unsigned int);

return (printStr(intToBinary(tmp)));
}
