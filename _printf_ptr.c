#include "main.h"

/**
 * _printf_ptr - function to print hexadecimal numbers
 * @args: list
 * Return: int
 */
int _printf_ptr(va_list args)
{
intptr_t num = (intptr_t)va_arg(args, void *);
int count = 0, i;
int digits[32];

/* Compute the hexadecimal digits in the correct order */
int num_digits = 0;

if (!num)
return (printStr("(nil)"));

if (num == -1)
return (printStr("0xffffffffffffffff"));

do {
int digit = num % 16;

digits[num_digits++] = digit < 10 ? digit + '0' : digit - 10 + 'a';
num /= 16;
} while (num > 0);

count += printStr("0x");

/* Print the hexadecimal digits in the correct order */
for (i = num_digits - 1; i >= 0; i--)
{
count += _putchar(digits[i]);
}

return (count);
}
