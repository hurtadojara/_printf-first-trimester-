#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
  * process_format - print all format
  * @fmt: format
  * @arg: variadic paratemerts
  */
int process_format(const char *fmt, va_list *arg)
{
	char ch;
	int i, counter = 0;

	for (i = 0; fmt[i] != '\0'; i++)
	{
		ch = fmt[i];
		if (ch == '%')
		{
			i++;
			if (fmt[i] == 's')
			{
				counter += validator(fmt[i], va_arg(*arg, char *));
				i++;
			}
			else if (fmt[i] == 'c')
			{
				counter += validator(fmt[i], va_arg(*arg, int));
				i++;
			}
			if (fmt[i] == 'd')
			{
				counter += validator(fmt[i], va_arg(*arg, int));
				i++;
			}
		}
		counter++;
		_putchar(fmt[i]);
}
		return (counter - 1);
}
/**
 * _printf - format and print data
 * @format: string to format data
 * Return: counter of string printed
 */
int _printf(const char *format, ...)
{
	int final = 0;
	va_list arg;

	va_start(arg, format);
	final = process_format(format, &arg);
	printf("Caracteres impresos: %i\n", final);
	va_end(arg);
	return (final);
}
