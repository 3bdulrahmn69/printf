#include "main.h"

/**
 * _printf_spec_string - function to print hexadecimal numbers
 * @args: list
 * Return: int
 */
int _printf_spec_string(va_list args)
{
char *tmp;

tmp = va_arg(args, char *);
if (!tmp)
tmp = "(null)";

return (printSpecStr(tmp));
}
