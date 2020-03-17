#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

int cases(char ch, va_list *arg)
{
	int counter = 0, int_container = 0;

	switch (ch) {
		case 's':
			counter += validator(ch, va_arg(*arg, char *));
			break;
		case 'c':
			counter += validator(ch, va_arg(*arg, int));
			break;
		case '%':
			_putchar('%');
			break;
		case 'i':
			int_container = va_arg(*arg, int);
			fill_int(ch, int_container, &counter);
			break;
		case 'd':
			int_container = va_arg(*arg, int);
			fill_int(ch, int_container, &counter);
			break;
	}
	return (counter);
}


/**
  * process_format - print all format
  * @fmt: format
  * @arg: variadic parameters
	* Return: byte size of value
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
			ch = fmt[i + 1];
			if (ch == 's' || ch == 'c' || ch == '%' || ch == 'i' || ch == 'd')
				counter += cases(ch, arg);
			i += 2;
		}
		if (fmt[i] != '\0')
		{
			counter++;
			_putchar(fmt[i]);
		}
		else
		{
			break;
		}
	}
		return (counter);
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
	va_end(arg);
	return (final);
}