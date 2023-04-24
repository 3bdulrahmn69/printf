#ifndef MAIN_H
#define MAIN_H

// #include <stdio.h>
// #include <limits.h>
// #include <stdarg.h>
// #include <stdlib.h>

// #define BUFF_SIZE 1024
// #define UNUSED(x) (void)(x)

/* FLAGS && */
// #define F_MINUS 1
// #define F_PLUS 2
// #define F_ZERO 4
// #define F_HASH 8
// #define F_SPACE 16

/* SIZE && */
// #define S_SHORT 1
// #define S_LONG 2

/**
 * struct fmt - Struct op
 * @fmt: The format
 * @fn: The function associated
 */
// struct fmt
// {
// 	char fmt;
// 	int (*fn)(va_list, char[], int, int, int, int);
// };

/**
 * typedef struct fmt fmt_t - Struct op
 * @fmt: The format
 * @fm_t: The function associated
 */
// typedef struct fmt fmt_t;

// int _printf(const char *format, ...);
// int handle_print(const char *fmt, int *i, va_list list, char buffer[], int flags, int width, int precision, int size);

int _putchar(char c);
int _printf(const char *format, ...);


#endif /* MAIN_H */
