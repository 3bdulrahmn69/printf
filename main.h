#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct specifier - A structure defining a
 * @c: The conversion specifier character
 * @f: A pointer to the corresponding conve
 * Description: This structure is used t
 * functions in a printf-like function
 * and returns an integer value.
 */
typedef struct specifier
{
int c;
int (*f)(va_list args);
} Specifier;

int _putchar(char c);
int printStr(char *s);
int _printf(const char *format, ...);
void freeArrStr(char **s, int j);
int _printf_char(va_list args);
int _printf_string(va_list args);


#endif /* MAIN_H */
