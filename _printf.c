#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - Mi printf
 * @format: puntero que apunta a una cadena dcaracterese que contiene un
 * especificador (%) y puede tener mas argumentos
 * Return: Numero de caracteres impresos
 */
int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			switch (*(++format))
			{
				case 'c':
					counter += _putchar(va_arg(args, int));
					break;
				case 's':
					counter += _print_str(va_arg(args, char *));
					break;
				case '%':
					counter += _putchar('%');
					break;
				case '\0':
					counter = -1;
					break;
				case 'd':
				case 'i':
					counter += _print_num(va_arg(args, int));
					break;
				default:
					counter = -1;
					break;
			}
		}
		else
			counter += _putchar(*format);
		format++;
	}
	va_end(args);
	return (counter);
}

/**
 * _print_str - Imprime una string
 * @str: string
 * Return: Numero de caracteres
 */
int _print_str(char *str)
{
	int counter = 0;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		counter += 6;
	}
	else
	{
		while (*str)
		{
			_putchar(*str++);
			counter++;
		}
	}
	return (counter);
}

/**
 * _print_num - sirve para imprimir a un numero pos. o neg.
 * @n: numero
 * Return: numero de digitos que se imprimieron
 */
int _print_num(int n)
{
	int d = 0;

	if (n < 0)
	{
		_putchar('-');
		d++;
		n = -n;
	}

	if (n / 10)
		d += _print_num(n / 10);
	_putchar((n % 10) + '0');
	d++;

	return (d);
}


