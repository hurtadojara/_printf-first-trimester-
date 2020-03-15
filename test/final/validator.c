#include <stdarg.h>
#include "holberton.h"
/**
 * validator - find for placeholders and print paratemer
 * @ch: placeholder value
 */
void validator(char ch, ...)
{
	va_list arg2;
	int x;
	char *temp;
	char temp2;

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
}
