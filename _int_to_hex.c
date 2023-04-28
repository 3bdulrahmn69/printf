#include "main.h"
#include <stdlib.h>

/**
 * _int_to_hex_2digits - function to print hexadecimal numbers
 * @num: list
 * Return: char *
 */
char *_int_to_hex_2digits(int num)
{
int count = 0, i;
char *digits = malloc(2);

digits[1] = num % 16 < 10 ? num % 16 + '0' : num % 16 - 10 + 'A';
num /= 16;
digits[0] = num % 16 < 10 ? num % 16 + '0' : num % 16 - 10 + 'A';

return (digits);
}