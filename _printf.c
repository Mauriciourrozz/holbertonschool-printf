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
	int counter = 0,  i;

	if (format == NULL)
		return (-1);

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
					counter++;
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
					{
						write(1, "(null)", 6);
						counter = counter + 6;
					}
					else
					{
						for (i = 0; str[i] != '\0'; i++)
						{
							_putchar(str[i]);
							counter++;
						}
					}
					break;
				case '%':
					if (format[index + 1] == '\0')
						break;
					else if (format[index] == '%')
					{
					_putchar('%');
					counter++;
					break;
					}
					else
					{	
					 _putchar('%');
                                        _putchar(format[index]);
                                        counter += 2;
                                        break;
					}
			}
		}
		else
		{
			_putchar(format[index]);
			counter++;
		}
		index++;
	}
	va_end(args);
	return (counter);
}

