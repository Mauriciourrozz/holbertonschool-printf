#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 */
int _printf(const char *format, ...)
{
	va_list args;
	int index = 0;
	char *str;

	va_start(args, format);

	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			index++;
			switch (format[index])
			{
				case 'c':
					_putchar((char)va_arg(args, int));
					break;
				case 's':
					str = va_arg(args, char *);
					write(1, str, _strlen(str));
					break;
				case '%':
					_putchar('%');
					break;
			}
		}
		else
		{
			_putchar(format[index]);
		}
		index++;
	}
	return (0);
}
