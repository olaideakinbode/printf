#include "main.h"
#include <stddef.h>
#include <stdarg.h>

int _printf(const char *format, ...);
{
int i = 0, j;
        char *new_str = NULL;

        va_list args;

        va_start(args, format);

        while (format[i] != '\0')
        {
        if (format[i] != %)

                _putchar(format[i]);
        else
        {
        if (format[i + 1] == 'c')
{
        _putchar(va_args(args, int));
        i++;
        }
        else if (format[i + 1] == 's')
        {
        i++;
        new_str = va_arg(args, char *);
        j = 0;
        while (new_str[j] != '\0')
        {
        _putchar(new_str[j]);
        j++
        }

        }
}
        }
        va_end(arg);
	return (0);
