#include "main.h"
#include <stdarg.h>

int _printf_string(va_list args)
{
    char *tmp;

    tmp = va_arg(args, char * );
    if (!tmp)
        tmp = "(null)";
        
    return (printStr(tmp));
}
