#include "main.h"
#include <stdarg.h>

int _printf_char(va_list args)
{
    _putchar(va_arg(args, int));
    return (1);
}
