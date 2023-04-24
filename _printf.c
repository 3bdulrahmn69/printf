#include "main.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct specifier
{
    int c;
    int s;
    // int i;
    // double f;
} Specifier;

// * for testing
void printArrStr(char **astr, int len)
{
    int i;

    for (i = 0; i < len; i++)
    {
        printf("%s\n", astr[i]);
    }
}

/**
 * inTarget - sum args from variadic args
 * @c: string to print
 * Return: int
*/
void * inTarget(char c)
{
    Specifier *obj = (Specifier *) malloc(sizeof(Specifier));

    obj->c = 0;
    obj->s = 0;
    if (c == 'c')
        obj->c = 1;
    else if (c == 's')
        obj->s = 1;

    return (obj);
}

int resLength(const char *format)
{
    int i = 0, len = 1;

    if (!format)
        return (0);

    for (; format[i] != '\0'; i++)
    {
        // find this %
        if (format[i] == '%')
        {
            // find specifier
            if (format[i + 1] == 's' || format[i + 1] == 'c')
                // increment the length variable 
                len++;
        }

        // find the first char not equal '\0' after specifier
        if (format[i - 2] == '%')
            len++;
    }

    if (i == 0)
        return (0);

    return (len);
}

char * getSubstring(const char *str, int s, int e)
{
    int i = s;
    char *res = malloc(e - s);

    if (!res)
        return (NULL);

    for(; i < e; i++)
    {
        res[i - s] = str[i];
    }

    return (res);
}

char ** handlingFormat(const char *format, int l)
{
    int len = l, i, j, s;
    char **res; // array of strings after finding specifiers
    char *tmp;

    if (!format || len == 0)
        return (NULL);

    // printf("res len successful = %d\n", len);

    res = (char **) malloc(sizeof(char *) * len);

    if (!res)
        return (NULL);

    for (i = 0, s = 0, j = 0; format[i] != '\0'; i++)
    {
        // find this %
        if (format[i] == '%')
        {
            // adding previous string
            res[j++] = getSubstring(format, s, i);

            // adding specifier
            tmp = malloc(2);
            tmp[0] = '%';
            tmp[1] = format[++i];
            res[j++] = tmp;

            s = i + 1;
        }
        // find last string
        else if (format[i + 1] == '\0')
        {
            res[j++] = getSubstring(format, s, i + 1);
            // printf("Lol: %s\n", res[j - 1]);
        }
        // printf("Lol: %s\n", res[j - 1]);
    }

    // * testing
    printArrStr(res, len);

    return (res);
}

int _printf(const char *format, ...)
{
    char **res;
    int len = resLength(format);

    res = handlingFormat(format, len);

    return (0);
}