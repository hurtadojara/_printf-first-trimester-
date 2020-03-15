#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
  * process_format - print all format
  * @fmt: format
  * @arg: variadic paratemerts
  */
void process_format(const char *fmt, va_list *arg)
{
	char ch;
	int i;

	for (i = 0; fmt[i] != '\0'; i++)
	{
		ch = fmt[i];
		if (ch == '%')
		{
			i++;
			if (fmt[i] == 's')
			{
				validator(fmt[i], va_arg(*arg, char *));
				i++;
			}
			if (fmt[i] == 'c')
			{
				validator(fmt[i], va_arg(*arg, int));
				i++;
			}
		}
		_putchar(fmt[i]);
  }
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
	process_format(format, &arg);
	va_end(arg);
	return (final);
}