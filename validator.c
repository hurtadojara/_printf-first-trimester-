#include <stdarg.h>
#include "holberton.h"
/**
 * validator - find for placeholders and print paratemer
 * @ch: placeholder value
 */
void validator(int ch, ...)
{
	va_list arg2;
	int x;
	char *temp;
	char temp2;
	int temp3;
	char *res = 0;

	va_start(arg2, ch);
	if (ch == 's')
	{
		temp = va_arg(arg2, char *);
		for (x = 0; x < lenght(temp); x++)
		{
			_putchar(temp[x]);
		}
	}
	else if (ch == 'c')
	{
		temp2 = va_arg(arg2, int);
		_putchar(temp2);
	}
	else if (ch == 'd')
	{
		temp3 = va_arg(arg2, int);
		res = intochar(temp3);
		for (x = 0; x < lenght(res); x++)
		{
			_putchar(res[x]);
		}
	}
	else if (ch == 'i')
	{
		temp3 = va_arg(arg2, int);
		res = intochar(temp3);
		for (x = 0; x < lenght(res); x++)
		{
			_putchar(res[x]);
}
