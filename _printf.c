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
	int j;

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
				case 's': 
					for (j = 0; j < format[index]; j++)
					{
						_putchar(va_arg(args, int));
					}
						break;
					
				case '%':
					_putchar("\%");
					break;

			}
		}
	}
	return (0);
}
