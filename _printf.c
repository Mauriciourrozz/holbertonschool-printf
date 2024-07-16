#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 */
int _printf(const char *format, ...)
{
	va_list args;
	int index;

	va_start(args, format);

	for (index = 0; format != NULL && format[index] != '\0'; index++)
	{
		if (format[index] == '%')
		{
			va_arg(args, int);
			switch (format[index])
			{
				case 'c':
					_putchar(va_arg(args, int));
					break;
				case 's': //bucle
					_putchar('j');
					break;
				case '%':
					_putchar('%');
					break;

			}
		}
	}
	return (0);
}
