#include "main.h"

/**
 * printf_xhexa - function to print hexadecimal numbers
 * 
 * @args: list
 *
 * @Return: int
 */

int printf_xhexa(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    int count = 0;

    /* Print the "0x" prefix if the number is nonzero */
    if (num != 0) {
        count += _puts("0x");
    }

    /* Print the hexadecimal digits in reverse order */
    do {
        int digit = num % 16;
        count += _putchar(digit < 10 ? digit + '0' : digit - 10 + 'a');
        num /= 16;
    } while (num > 0);

    return count;
}
