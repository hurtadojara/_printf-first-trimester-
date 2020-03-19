#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * cases - validate cases next to %
 * @ch: option
 * @arg: arguments list
 * Return: counter of char printed
 */
int cases(char ch, va_list *arg)
{
	int counter = 0, int_container = 0;
	unsigned int uns_container = 0;

	switch (ch)
	{
		case 's':
			counter += validator(ch, va_arg(*arg, char *));
			break;
		case 'c':
			counter += validator(ch, va_arg(*arg, int));
			break;
		case '%':
			_putchar('%');
			counter += 1;
			break;
		case 'i':
			int_container = va_arg(*arg, int);
			fill_int(ch, int_container, &counter);
			break;
		case 'd':
			int_container = va_arg(*arg, int);
			fill_int(ch, int_container, &counter);
			break;
		case 'u':
			uns_container = va_arg(*arg, unsigned int);
			fill_int(ch, uns_container, &counter);
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
	int i, counter = 0, numeric, alphabetic, x;

	for (i = 0; fmt[i] != '\0';)
	{
		ch = fmt[i];
		if (ch == '%')
		{
			i++;
			if (fmt[i] == '\0')
				return (-1);
			ch = fmt[i];
			alphabetic = (ch == 's' || ch == 'c' || ch == '%');
			numeric = (ch == 'i' || ch == 'd');
			if ((alphabetic || numeric) ? 1 : 0)
				counter += cases(ch, arg);
			else
				counter += dont_found(ch);
			i++;
		}
		if (fmt[i] != '\0' && fmt[i] != '%')
		{
			counter++;
			_putchar(fmt[i]);
			i++;
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
	if (format != NULL)
		final = process_format(format, &arg);
	else
		return (-1);
	va_end(arg);
	return (final);
}
