#include <stdarg.h>
#include "holberton.h"
/**
 * stout_print - print char of string to stdout
 * @str: string
 */
void stout_print(char *str)
{
	int x;

	for (x = 0; x < lenght(str); x++)
	{
		_putchar(str[x]);
	}
}
/**
 * fill_int - validate integer
 * @ch : char to validator
 * @arg: int to validate
 * @c: pointer to counter
 */
void fill_int(char ch, int arg, int *c)
{
	if (arg != 0)
		*c += validator(ch, arg);
	else
		_putchar('0');
}
/**
 * validator - find for placeholders and print paratemer
 * @ch: placeholder value
 * Return: num of bytes printed in va_list
 */
int validator(int ch, ...)
{
	va_list arg2;
	char *temp, *res = 0;
	char temp2;
	int temp3;

	va_start(arg2, ch);
	if (ch == 's')
	{
		temp = va_arg(arg2, char *);
		stout_print(temp);
		return (lenght(temp));
	}
	else if (ch == 'c')
	{
		temp2 = va_arg(arg2, int);
		_putchar(temp2);
		return (1);
	}
	else if (ch == 'd' || ch == 'i')
	{
		temp3 = va_arg(arg2, int);
		res = intochar(temp3);
		stout_print(res);
		return (lenght(res));
	}
	va_end(arg2);
	return (-1);
}
